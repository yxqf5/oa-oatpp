#pragma once
/*
	��Ŀ���ӿ�
	author��niuniu
*/
#ifndef _FORMLISTCONTROLLER_H_
#define _FORMLISTCONTROLLER_H_

#include "domain/vo/BaseJsonVO.h"
#include "domain/dto/FormList/FormListDTO.h"
#include "domain/vo/FormList/FormListVO.h"

#include OATPP_CODEGEN_BEGIN(ApiController)

class FormListController : public oatpp::web::server::api::ApiController
{

	API_ACCESS_DECLARE(FormListController);
public:
	//��ȡ��Ŀ���Խӿ�
	ENDPOINT_INFO(queryFormList) {
		// ����ӿڱ���
		API_DEF_ADD_TITLE(ZH_WORDS_GETTER("form.list.summary1"));
		// ����Ĭ����Ȩ��������ѡ���壬��������ˣ�����ENDPOINT������Ҫ����API_HANDLER_AUTH_PARAME��
		API_DEF_ADD_AUTH();
		// ������Ӧ������ʽ
		API_DEF_ADD_RSP_JSON_WRAPPER(FormListJsonVO);
		// �����ҳ��ѯ��������
		//API_DEF_ADD_PAGE_PARAMS();
		// ����������ѯ��������
		API_DEF_ADD_QUERY_PARAMS(String, "id", ZH_WORDS_GETTER("form.list.xid"), "1", true);
		//API_DEF_ADD_QUERY_PARAMS(String, "sex", ZH_WORDS_GETTER("sample.field.sex"), "N", false);
	}
	// 3.2 �����ѯ�ӿڴ���
	ENDPOINT(API_M_GET, "/FormList", queryFormList, QUERY(String, id), API_HANDLER_AUTH_PARAME) {
		// ������ѯ����ΪQuery����ģ��
		//API_HANDLER_QUERY_PARAM(userQuery, SampleQuery, queryParams);
		// ����ִ�к�����Ӧ���
		API_HANDLER_RESP_VO(executeQueryFormList(id));
	}
	

private:
	StringJsonVO::Wrapper executeQueryFormList(const String& id);
	//ִ���޸ĸ�����Ϣ
	//StringJsonVO::Wrapper executeModifyNew(const NewDTO::Wrapper& dto);
};


#endif //!_FORMCONTROLLER_H_
