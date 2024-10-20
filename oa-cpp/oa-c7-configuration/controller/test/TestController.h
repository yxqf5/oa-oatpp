#pragma once


#ifndef _TESTCONTROLLER_H_
#define _TESTCONTROLLER_H_ 

#include "domain/vo/BaseJsonVO.h"
#include OATPP_CODEGEN_BEGIN(ApiController)
#include "domain/query/PageQuery.h"
#include "domain/GlobalInclude.h"
class TestController : public oatpp::web::server::api::ApiController
{

    //定义控制器访问入口
    API_ACCESS_DECLARE(TestController);
public://定义接口
    //定义测试查询描述
    ENDPOINT_INFO(queryTest) {
        // general
        info->summary = ZH_WORDS_GETTER("test.get.summary");
        info->addResponse<Object<StringJsonVO>>(Status::CODE_200, "application/json");
        API_DEF_ADD_RSP_JSON_WRAPPER(StringJsonVO);
        // params specific
        //info->queryParams.add<UInt64>("pageIndex").description = "ye ma";
        //info->queryParams.add<UInt64>("pageSize").description = "mei ye shuju tiaoshu";
        API_DEF_ADD_PAGE_PARAMS();
    }
    //定义一个测试查询接口
    ENDPOINT(API_M_GET, "/test", queryTest, QUERIES(QueryParams, params))
    {
        //解析参数
        API_HANDLER_QUERY_PARAM(condition, PageQuery, params);
        //响应结果
        API_HANDLER_RESP_VO(executeQueryTest(condition));


    }
private:
    StringJsonVO::Wrapper executeQueryTest(const PageQuery::Wrapper& condition);





};

#include OATPP_CODEGEN_END(ApiController)

#endif