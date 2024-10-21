#pragma once

#ifndef _FORM_TEMPLATE_QUERY_
#define _FORM_TEMPLATE_QUERY_

#include "domain/GlobalInclude.h"
#include "domain/query/PageQuery.h"
#include OATPP_CODEGEN_BEGIN(DTO)

// ֧�ַ�ҳ
class FormTemplateQuery : public PageQuery
{
	DTO_INIT(FormTemplateQuery, PageQuery);

	// ��ģ��id
	API_DTO_FIELD_DEFAULT(String, formTemplateId, ZH_WORDS_GETTER("form-template.field.id"));

	// ��ģ�����
	API_DTO_FIELD_DEFAULT(String, formTemplateCategory, ZH_WORDS_GETTER("form-template.field.category"));
};



#include OATPP_CODEGEN_END(DTO)
#endif // !_FORM_TEMPLATE_QUERY_