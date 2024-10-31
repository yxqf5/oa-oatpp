#pragma once
#ifndef  _CONFIGURATIONVO
#define _CONFIGURATIONVO
#include "../../../GlobalInclude.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * 示例传输对象
 */
class configurationVo : public oatpp::DTO
{
	DTO_INIT(configurationVo, DTO);
	//选择分类表单
	API_DTO_FIELD(String, xcreatorUnitName, ZH_WORDS_GETTER("configuration.atq.choose.summary"), true, "configuration.atq.choose.edit");
	//分类标识
	API_DTO_FIELD(String, xappId, ZH_WORDS_GETTER("configuration.atq.basic.logo"), true, "abababababab");
	//分类别名
	API_DTO_FIELD(String, xalias, ZH_WORDS_GETTER("configuration.atq.basic.name"), true, "newfile");
	//文档类型
	API_DTO_FIELD(String, xdocumentType, ZH_WORDS_GETTER("configuration.atq.basic.type"), true, "Information");
	//发布时是否发送消息
	API_DTO_FIELD(String, xsendNotify, ZH_WORDS_GETTER("configuration.atq.basic.auto"), true, "yes");
	//使用流程
	API_DTO_FIELD(String, process, ZH_WORDS_GETTER("configuration.atq.process"), true, "from 1 to 2");
	//可见范围
	API_DTO_FIELD(String, range, ZH_WORDS_GETTER("configuration.atq.range"), true, "everyone");
	//发布者
	API_DTO_FIELD(String, xcreatorPerson, ZH_WORDS_GETTER("configuration.atq.publish"), true, "xiaohe");
	//管理者
	API_DTO_FIELD(String, xmanagePerson, ZH_WORDS_GETTER("configuration.atq.manage"), true, "xadmin");
};

/**
 * 示例显示JsonVO，用于响应给客户端的Json对象
 */
class configurationJsonVo : public JsonVO<configurationVo::Wrapper> {
	DTO_INIT(configurationJsonVo, JsonVO<configurationVo::Wrapper>);
};
#include OATPP_CODEGEN_END(DTO)
#endif // !_ CONFIGURATIONDTO_H_