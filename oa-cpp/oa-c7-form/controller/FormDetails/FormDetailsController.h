#pragma once
#pragma once
/*
	��Ŀ���ӿ�
	author��niuniu
*/
#ifndef _FORMDETAILSCONTROLLER_H_
#define _FORMDETAILSCONTROLLER_H_

#include "domain/vo/BaseJsonVO.h"
#include "domain/dto/FormDetails/FormDetailsDTO.h"
#include "domain/vo/FormDetails/FormDetailsVO.h"

#include OATPP_CODEGEN_BEGIN(ApiController)

class FormDetailsController : public oatpp::web::server::api::ApiController
{

	API_ACCESS_DECLARE(FormDetailsController);
public:
	//��ȡ��Ŀ���Խӿ�
	ENDPOINT_INFO(queryFormDetails) {
		// ����ӿڱ���
		API_DEF_ADD_TITLE(ZH_WORDS_GETTER("form.list.summary2"));
		// ����Ĭ����Ȩ��������ѡ���壬��������ˣ�����ENDPOINT������Ҫ����API_HANDLER_AUTH_PARAME��
		API_DEF_ADD_AUTH();
		// ������Ӧ������ʽ
		API_DEF_ADD_RSP_JSON_WRAPPER(FormDetailsJsonVO);
		// �����ҳ��ѯ��������
		//API_DEF_ADD_PAGE_PARAMS();
		// ����������ѯ��������
		API_DEF_ADD_QUERY_PARAMS(String, "id", ZH_WORDS_GETTER("form.list.xid"), "1", true);
		//API_DEF_ADD_QUERY_PARAMS(String, "sex", ZH_WORDS_GETTER("sample.field.sex"), "N", false);
	}
	// 3.2 �����ѯ�ӿڴ���
	ENDPOINT(API_M_GET, "/FormDetails", queryFormDetails, QUERY(String, id), API_HANDLER_AUTH_PARAME) {
		// ������ѯ����ΪQuery����ģ��
		//API_HANDLER_QUERY_PARAM(userQuery, SampleQuery, queryParams);
		// ����ִ�к�����Ӧ���
		API_HANDLER_RESP_VO(executeQueryFormDetails(id));
	}

	ENDPOINT_INFO(addForm) {
		API_DEF_ADD_TITLE(ZH_WORDS_GETTER("form.list.summary3"));
		API_DEF_ADD_AUTH();
		API_DEF_ADD_RSP_JSON_WRAPPER(StringJsonVO);
	}
	ENDPOINT(API_M_POST, "/FormDetails", addForm, BODY_DTO(FormDetailsDTO::Wrapper, dto), API_HANDLER_AUTH_PARAME) {
		API_HANDLER_RESP_VO(execAddForm(dto));
	}
private:
	StringJsonVO::Wrapper executeQueryFormDetails(const String& id);
	//ִ���޸ĸ�����Ϣ
	//StringJsonVO::Wrapper executeModifyNew(const NewDTO::Wrapper& dto);
	StringJsonVO::Wrapper execAddForm(const FormDetailsDTO::Wrapper& dto);
};


#endif //!_FORMCONTROLLER_H_
