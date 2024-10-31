#pragma once
#pragma once
#pragma once
/*
	��Ŀ���ӿ�
	author��niuniu
*/
#ifndef _ATTADETAILSCONTROLLER_H_
#define _ATTADETAILSCONTROLLER_H_

#include "domain/vo/BaseJsonVO.h"
#include "domain/dto/AttaList/AttaListDTO.h"
#include "domain/vo/AttaList/AttaListVO.h"

#include OATPP_CODEGEN_BEGIN(ApiController)

class AttaDetailsController : public oatpp::web::server::api::ApiController
{

	API_ACCESS_DECLARE(AttaDetailsController);
public:
	//��ȡ��Ŀ���Խӿ�
	ENDPOINT_INFO(queryAttaList) {
		// ����ӿڱ���
		API_DEF_ADD_TITLE(ZH_WORDS_GETTER("atta.list.summary1"));
		// ����Ĭ����Ȩ��������ѡ���壬��������ˣ�����ENDPOINT������Ҫ����API_HANDLER_AUTH_PARAME��
		API_DEF_ADD_AUTH();
		// ������Ӧ������ʽ
		API_DEF_ADD_RSP_JSON_WRAPPER(AttaListJsonVO);
		// �����ҳ��ѯ��������
		//API_DEF_ADD_PAGE_PARAMS();
		// ����������ѯ��������
		API_DEF_ADD_QUERY_PARAMS(String, "id", ZH_WORDS_GETTER("atta.list.xid"), "1", true);
		//API_DEF_ADD_QUERY_PARAMS(String, "sex", ZH_WORDS_GETTER("sample.field.sex"), "N", false);
	}
	// 3.2 �����ѯ�ӿڴ���
	ENDPOINT(API_M_GET, "/attaList", queryAttaList, QUERY(String, id), API_HANDLER_AUTH_PARAME) {
		// ������ѯ����ΪQuery����ģ��
		//API_HANDLER_QUERY_PARAM(userQuery, SampleQuery, queryParams);
		// ����ִ�к�����Ӧ���
		API_HANDLER_RESP_VO(executeQueryAttaDetails(id));
	}

	ENDPOINT_INFO(queryAttaDetails) {
		// ����ӿڱ���
		API_DEF_ADD_TITLE(ZH_WORDS_GETTER("atta.list.summary2"));
		// ����Ĭ����Ȩ��������ѡ���壬��������ˣ�����ENDPOINT������Ҫ����API_HANDLER_AUTH_PARAME��
		API_DEF_ADD_AUTH();
		// ������Ӧ������ʽ
		API_DEF_ADD_RSP_JSON_WRAPPER(AttaDetailsJsonVO);
		// �����ҳ��ѯ��������
		//API_DEF_ADD_PAGE_PARAMS();
		// ����������ѯ��������
		API_DEF_ADD_QUERY_PARAMS(String, "id", ZH_WORDS_GETTER("atta.list.xid"), "1", true);
		//API_DEF_ADD_QUERY_PARAMS(String, "sex", ZH_WORDS_GETTER("sample.field.sex"), "N", false);
	}
	// 3.2 �����ѯ�ӿڴ���
	ENDPOINT(API_M_GET, "/AttaDetails", queryAttaDetails, QUERY(String, id), API_HANDLER_AUTH_PARAME) {
		// ������ѯ����ΪQuery����ģ��
		//API_HANDLER_QUERY_PARAM(userQuery, SampleQuery, queryParams);
		// ����ִ�к�����Ӧ���
		API_HANDLER_RESP_VO(executeQueryAttaDetails(id));
	}

	

private:
	StringJsonVO::Wrapper executeQueryAttaDetails(const String& id);
	StringJsonVO::Wrapper executeQueryAttaList(const String& id);
	
	//ִ���޸ĸ�����Ϣ
	//StringJsonVO::Wrapper executeModifyNew(const NewDTO::Wrapper& dto);
};


#endif //!_FORMCONTROLLER_H_
