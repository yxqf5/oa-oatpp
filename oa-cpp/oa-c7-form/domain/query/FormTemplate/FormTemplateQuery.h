#pragma once

#ifndef _FORM_TEMPLATE_QUERY_
#define _FORM_TEMPLATE_QUERY_

#include "domain/GlobalInclude.h"
#include "domain/query/PageQuery.h"
#include OATPP_CODEGEN_BEGIN(DTO)

// 支持分页
class FormTemplateQuery : public PageQuery
{
	DTO_INIT(FormTemplateQuery, PageQuery);

	// 表单模板id
	API_DTO_FIELD_DEFAULT(String, formTemplateId, ZH_WORDS_GETTER("form-template.field.id"));

	// 表单模板分类
	API_DTO_FIELD_DEFAULT(String, formTemplateCategory, ZH_WORDS_GETTER("form-template.field.category"));
};



#include OATPP_CODEGEN_END(DTO)
#endif // !_FORM_TEMPLATE_QUERY_