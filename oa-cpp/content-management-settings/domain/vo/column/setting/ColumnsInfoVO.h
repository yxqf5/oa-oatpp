#pragma once


#ifndef _COLUMNSINFOVO_
#define _COLUMNSINFOVO_

#include "../../../GlobalInclude.h"
//#include "../../../dto/column/setting/ColumnsInfoDTO.h"

#include OATPP_CODEGEN_BEGIN(DTO)

class ColumnsInfoVO : public oatpp::DTO
{
	DTO_INIT(ColumnsInfoVO, DTO);
	// 栏目唯一键值
	API_DTO_FIELD(String, id, ZH_WORDS_GETTER("column.field.id"), true, "123123");
	// 栏目名字
	API_DTO_FIELD(String, name, ZH_WORDS_GETTER("column.field.name"), true, "yxqf");
	// 栏目别名
	API_DTO_FIELD(String, othername, ZH_WORDS_GETTER("column.field.other-name"), false, "234234");
	// 栏目描述
	API_DTO_FIELD(String, description, ZH_WORDS_GETTER("column.field.description"), false, "qwerqwer");
	// 栏目排序
	API_DTO_FIELD(String, sort, ZH_WORDS_GETTER("column.field.sort"), false, "asdf");
	// 栏目类型
	API_DTO_FIELD(String, type, ZH_WORDS_GETTER("column.field.type"), false, "zxcv");
	// 默认编辑表单
	API_DTO_FIELD(String, defaultEditForm, ZH_WORDS_GETTER("column.field.default-edit-form"), false, "azxcv");
	// 默认阅读表
	API_DTO_FIELD(String, defaultReadForm, ZH_WORDS_GETTER("column.field.default-read-form"), false, "aytui");
	// 栏目图标
	API_DTO_FIELD(String, image, ZH_WORDS_GETTER("column.field.image"), false, "image");

};


/**
 * 定义一个栏目信息显示JsonVO对象，用于响应给客户端
 */
class ColumnsInfoJsonVO : public JsonVO<ColumnsInfoDTO::Wrapper>
{
	DTO_INIT(ColumnsInfoJsonVO, JsonVO<ColumnsInfoDTO::Wrapper>);
};


#include OATPP_CODEGEN_END(DTO)

#endif //!_COLUMNSINFOVO1_
