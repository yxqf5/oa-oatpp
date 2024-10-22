#pragma once

#ifndef _FORM_TEMPLATE_DTO_
#define _FORM_TEMPLATE_DTO_

#include "../../GlobalInclude.h"

#include OATPP_CODEGEN_BEGIN(DTO)

class FormTemplateDTO : public oatpp::DTO
{
	DTO_INIT(FormTemplateDTO, DTO);

	// ��ģ��id
	API_DTO_FIELD_DEFAULT(String, formTemplateId, ZH_WORDS_GETTER("form-template.field.id"));

	// ��ģ������
	API_DTO_FIELD_DEFAULT(String, formTemplateName, ZH_WORDS_GETTER("form-template.field.name"));

	// ģ�����
	API_DTO_FIELD_DEFAULT(String, formTemplateCategory, ZH_WORDS_GETTER("form-template.field.category"));

	// ��ģ������
	API_DTO_FIELD_DEFAULT(String, formTemplateDesciption, ZH_WORDS_GETTER("form-template.field.desciption"));

	// ��ģ��ͼ��
	API_DTO_FIELD_DEFAULT(String, formTemplateIcon, ZH_WORDS_GETTER("form-template.field.icon"));	

	// ��ģ������
	API_DTO_FIELD_DEFAULT(String, formTemplateData, ZH_WORDS_GETTER("form-template.field.data"));
};

// ��ҳ�������
class FormTemplatePageDTO : public PageDTO<FormTemplateDTO::Wrapper>
{
	DTO_INIT(FormTemplatePageDTO, PageDTO<FormTemplateDTO::Wrapper>);
};

#endif // !_FORM_TEMPLATE_DTO_
