#pragma once

#ifndef _FORM_TEMPLATE_DTO_
#define _FORM_TEMPLATE_DTO_

#include "../../GlobalInclude.h"

#include OATPP_CODEGEN_BEGIN(DTO)

class FormTemplateDTO : public oatpp::DTO
{
	DTO_INIT(FormTemplateDTO, DTO);

	// 表单模板id
	API_DTO_FIELD_DEFAULT(String, formTemplateId, ZH_WORDS_GETTER("form-template.field.id"));

	// 表单模板名称
	API_DTO_FIELD_DEFAULT(String, formTemplateName, ZH_WORDS_GETTER("form-template.field.name"));

	// 模板分类
	API_DTO_FIELD_DEFAULT(String, formTemplateCategory, ZH_WORDS_GETTER("form-template.field.category"));

	// 表单模板描述
	API_DTO_FIELD_DEFAULT(String, formTemplateDesciption, ZH_WORDS_GETTER("form-template.field.desciption"));

	// 表单模板图标
	API_DTO_FIELD_DEFAULT(String, formTemplateIcon, ZH_WORDS_GETTER("form-template.field.icon"));	

	// 表单模板数据
	API_DTO_FIELD_DEFAULT(String, formTemplateData, ZH_WORDS_GETTER("form-template.field.data"));
};

// 分页传输对象
class FormTemplatePageDTO : public PageDTO<FormTemplateDTO::Wrapper>
{
	DTO_INIT(FormTemplatePageDTO, PageDTO<FormTemplateDTO::Wrapper>);
};

#endif // !_FORM_TEMPLATE_DTO_
