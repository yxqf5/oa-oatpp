#pragma once

#ifndef _TESTCONTROLLER_
#define _TESTCONTROLLER_

#include "domain/vo/BaseJsonVO.h"
#include "domain/GlobalInclude.h"
#include "domain/query/PageQuery.h"

#include   OATPP_CODEGEN_BEGIN(ApiController);
class TestController : public oatpp::web::server::api::ApiController{

	API_ACCESS_DECLARE(TestController);



public:

	ENDPOINT_INFO(queryTest) {
		// general
		info->summary = ZH_WORDS_GETTER("test.get.summary");
		//info->addResponse<Object<StringJsonVO>>(Status::CODE_200, "application/json");
		API_DEF_ADD_RSP_JSON_WRAPPER(StringJsonVO);
		API_DEF_ADD_PAGE_PARAMS();
		//info->queryParams.add<UInt64>("pageIndex").description= "ye ma";
		//info->queryParams.add<UInt64>("pageSize").description= "ye de size";

	}


	ENDPOINT(API_M_GET, "/test",queryTest , QUERIES(QueryParams, params) )
	{

		API_HANDLER_QUERY_PARAM(condtion,PageQuery,params);

		
		API_HANDLER_RESP_VO(executeQueryTest(condtion));
	}

private:
	StringJsonVO::Wrapper executeQueryTest(const PageQuery::Wrapper& condtion);

};

#include OATPP_CODEGEN_END(ApiController);

#endif _TESTCONTROLLER_