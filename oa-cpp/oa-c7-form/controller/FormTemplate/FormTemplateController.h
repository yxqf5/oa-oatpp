#pragma once

#ifndef _FORM_TEMPLATE_CONTROLLER_
#define _FORM_TEMPLATE_CONTROLLER_

#include "domain/vo/BaseJsonVO.h"
#include "domain/query/FormTemplate/FormTemplateQuery.h"
#include "domain/vo/FormTemplate/FormTemplateVO.h"
#include "domain/dto/FormTemplate/FormTemplateDTO.h"
#include "../../domain/GlobalInclude.h"

#include OATPP_CODEGEN_BEGIN(ApiController) //<- Begin Codegen


class FormTemplateController : public oatpp::web::server::api::ApiController
{
	API_ACCESS_DECLARE(FormTemplateController);
public:
	// 分页获取表单模板列表
	ENDPOINT_INFO(getFormTemplate) {
		API_DEF_ADD_TITLE(ZH_WORDS_GETTER("form-template.category"));
		API_DEF_ADD_AUTH();
		API_DEF_ADD_RSP_JSON_WRAPPER(FormTemplatePageJsonVO);
		API_DEF_ADD_PAGE_PARAMS();
		API_DEF_ADD_QUERY_PARAMS(String, "category", ZH_WORDS_GETTER("form-template.field.category"), "quan bu", true);
	}
	ENDPOINT(API_M_GET, "/form/template", getFormTemplate, QUERIES(QueryParams, queryParams), API_HANDLER_AUTH_PARAME) {
		API_HANDLER_QUERY_PARAM(ftQuery, FormTemplateQuery, queryParams);
		API_HANDLER_RESP_VO(execGetFormTemplate(ftQuery));
	}

	// 新增表单模板
	ENDPOINT_INFO(addFormTemplate) {
		API_DEF_ADD_TITLE(ZH_WORDS_GETTER("form-template.add"));
		API_DEF_ADD_AUTH();
		API_DEF_ADD_RSP_JSON_WRAPPER(Uint64JsonVO);
	}
	ENDPOINT(API_M_POST, "/form/template", addFormTemplate, BODY_DTO(FormTemplateDTO::Wrapper, dto), API_HANDLER_AUTH_PARAME) {
		API_HANDLER_RESP_VO(execAddFormTemplate(dto));
	}

private:
	FormTemplatePageJsonVO::Wrapper execGetFormTemplate(const FormTemplateQuery::Wrapper& ftQuery);
	Uint64JsonVO::Wrapper execAddFormTemplate(const FormTemplateDTO::Wrapper& dto);
};

#include OATPP_CODEGEN_END(ApiController) //<- End Codegen

#endif // !_FORM_TEMPLATE_CONTROLLER_