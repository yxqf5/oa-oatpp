#pragma once

#ifndef _FORM_TEMPLATE_VO_
#define _FORM_TEMPLATE_VO_

#include "../../GlobalInclude.h"
#include "domain/dto/FormTemplate/FormTemplateDTO.h"

#include OATPP_CODEGEN_BEGIN(DTO)

class FormTemplateJsonVO : public JsonVO<FormTemplateDTO::Wrapper> {
	DTO_INIT(FormTemplateJsonVO, JsonVO<FormTemplateDTO::Wrapper>);
};

// ·ÖÒ³
class FormTemplatePageJsonVO : public JsonVO<FormTemplatePageDTO::Wrapper> {
	DTO_INIT(FormTemplatePageJsonVO, JsonVO<FormTemplatePageDTO::Wrapper>);
};

#include OATPP_CODEGEN_END(DTO)

#endif // !_FORM_TEMPLATE_VO_
