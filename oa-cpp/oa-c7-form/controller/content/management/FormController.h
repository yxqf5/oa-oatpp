#pragma once
/*
	栏目表单接口
	author：niuniu
*/
#ifndef _FORMCONTROLLER_H_
#define _FORMCONTROLLER_H_

#include "domain/vo/BaseJsonVO.h"
#include "domain/dto/content/management/DeleteFormDTO.h"
#include "domain/dto/content/management/ModifyFormDTO.h"

#include OATPP_CODEGEN_BEGIN(ApiController)

class FormController : public oatpp::web::server::api::ApiController {
	 API_ACCESS_DECLARE(FormController);
public:
	//定义删除栏目表单接口描述
	ENDPOINT_INFO(deleteFormById) {
		info->summary = "Delete Form by ID";
		info->pathParams.add<String>("xid").description = "The ID of the form to be deleted";
	}
	//定义删除栏目表单接口处理
	ENDPOINT("DELETE", "/forms/{xid}", deleteFormById, BODY_DTO(Object<DeleteFormDTO>, deleteFormDto)){
		//auto xid = deleteFormDto->xid;
		//具体处理流程等待补充
		bool result = true;
		if (result) {
			return createResponse(Status::CODE_204, "Form deleted successfully");
		}else {
			return createResponse(Status::CODE_404, "Form not found");
		}
	}
	//定义修改栏目表单接口描述
	ENDPOINT_INFO(modifyForm) {
		info->summary = "Modify a form";
		info->description = "Modify an existing form using the form ID and the details provided.";
		info->pathParams.add<String>("xid").description = "The ID of the form to modify";
		//info->addResponse<ModifyFormDTO>(Status::CODE_200, "Form modified successfully"); // 成功响应
	}

	// 定义修改表单的端点
	ENDPOINT("PUT", "/forms/{xid}", modifyForm, BODY_DTO(ModifyFormDTO::Wrapper, formDto)){
		//修改逻辑
		return createResponse(Status::CODE_200, "Form modified successfully");
	}
private:
	Uint64JsonVO::Wrapper execModifyForm(const ModifyFormDTO::Wrapper& dto);
};

#include OATPP_CODEGEN_END(ApiController)
#endif //!_FORMCONTROLLER_H_
