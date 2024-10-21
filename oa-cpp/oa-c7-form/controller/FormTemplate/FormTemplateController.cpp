#include "FormTemplateController.h"
#include "stdafx.h"

// δ��ɵİ汾

FormTemplatePageJsonVO::Wrapper FormTemplateController::execGetFormTemplate(const FormTemplateQuery::Wrapper& ftQuery)
{
	auto ft_jvo = FormTemplatePageJsonVO::createShared();
	ft_jvo->success();
	return ft_jvo;
}

Uint64JsonVO::Wrapper FormTemplateController::execAddFormTemplate(const FormTemplateQuery::Wrapper& dto)
{
	auto jvo = Uint64JsonVO::createShared();
	jvo->success();
	return jvo;
}
