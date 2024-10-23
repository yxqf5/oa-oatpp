#pragma once
#pragma once
/*
	��Ŀ���ӿ�
	author��niuniu
*/
#ifndef _DATALISTCONTROLLER_H_
#define _DATALISTCONTROLLER_H_

#include "domain/vo/BaseJsonVO.h"
#include "domain/dto/DataList/DataListDTO.h"
#include "domain/vo/DataList/DataListVO.h"

#include OATPP_CODEGEN_BEGIN(ApiController)

class DataListController : public oatpp::web::server::api::ApiController
{

	API_ACCESS_DECLARE(DataListController);
public:
	//��ȡ��Ŀ���Խӿ�
	ENDPOINT_INFO(queryDataList) {
		// ����ӿڱ���
		API_DEF_ADD_TITLE(ZH_WORDS_GETTER("data.list.summary1"));
		// ����Ĭ����Ȩ��������ѡ���壬��������ˣ�����ENDPOINT������Ҫ����API_HANDLER_AUTH_PARAME��
		API_DEF_ADD_AUTH();
		// ������Ӧ������ʽ
		API_DEF_ADD_RSP_JSON_WRAPPER(DataListJsonVO);
		// �����ҳ��ѯ��������
		//API_DEF_ADD_PAGE_PARAMS();
		// ����������ѯ��������
		API_DEF_ADD_QUERY_PARAMS(String, "id", ZH_WORDS_GETTER("data.list.xid"), "1", true);
		//API_DEF_ADD_QUERY_PARAMS(String, "sex", ZH_WORDS_GETTER("sample.field.sex"), "N", false);
	}
	// 3.2 �����ѯ�ӿڴ���
	ENDPOINT(API_M_GET, "/DataList", queryDataList, QUERY(String, id), API_HANDLER_AUTH_PARAME) {
		// ������ѯ����ΪQuery����ģ��
		//API_HANDLER_QUERY_PARAM(userQuery, SampleQuery, queryParams);
		// ����ִ�к�����Ӧ���
		API_HANDLER_RESP_VO(executeQueryDataDetails(id));
	}

	ENDPOINT_INFO(queryDataDetails) {
		// ����ӿڱ���
		API_DEF_ADD_TITLE(ZH_WORDS_GETTER("data.list.summary2"));
		// ����Ĭ����Ȩ��������ѡ���壬��������ˣ�����ENDPOINT������Ҫ����API_HANDLER_AUTH_PARAME��
		API_DEF_ADD_AUTH();
		// ������Ӧ������ʽ
		API_DEF_ADD_RSP_JSON_WRAPPER(DataDetailsJsonVO);
		// �����ҳ��ѯ��������
		//API_DEF_ADD_PAGE_PARAMS();
		// ����������ѯ��������
		API_DEF_ADD_QUERY_PARAMS(String, "id", ZH_WORDS_GETTER("data.list.xid"), "1", true);
		//API_DEF_ADD_QUERY_PARAMS(String, "sex", ZH_WORDS_GETTER("sample.field.sex"), "N", false);
	}
	// 3.2 �����ѯ�ӿڴ���
	ENDPOINT(API_M_GET, "/DataDetails", queryDataDetails, QUERY(String, id), API_HANDLER_AUTH_PARAME) {
		// ������ѯ����ΪQuery����ģ��
		//API_HANDLER_QUERY_PARAM(userQuery, SampleQuery, queryParams);
		// ����ִ�к�����Ӧ���
		API_HANDLER_RESP_VO(executeQueryDataDetails(id));
	}

	ENDPOINT_INFO(deleteAttatch) {
		// ����ӿڱ���
		API_DEF_ADD_TITLE(ZH_WORDS_GETTER("delete.data"));
		// ����Ĭ����Ȩ��������ѡ���壬��������ˣ�����ENDPOINT������Ҫ����API_HANDLER_AUTH_PARAME��
		//API_DEF_ADD_AUTH();
		// ������Ӧ������ʽ
		API_DEF_ADD_RSP_JSON_WRAPPER(Uint64JsonVO);
		// ����������ѯ��������
		API_DEF_ADD_QUERY_PARAMS(String, "attatchName", ZH_WORDS_GETTER("cms_appndict.xname"), "null", true);
		API_DEF_ADD_QUERY_PARAMS(String, "id", ZH_WORDS_GETTER("cms_appndict.xid"), "1", false);
	}
	// 3.2 �����ѯ�ӿڴ���
	ENDPOINT(API_M_DEL, "/delete", deleteAttatch, QUERY(String, attatchName)) {
		// ����ִ�к�����Ӧ���
		API_HANDLER_RESP_VO(execdeletedata(attatchName));
	}


private:
	StringJsonVO::Wrapper executeQueryDataDetails(const String& id);
	StringJsonVO::Wrapper executeQueryDataList(const String& id);
	Uint64JsonVO::Wrapper execdeletedata(const String& id);
	//ִ���޸ĸ�����Ϣ
	//StringJsonVO::Wrapper executeModifyNew(const NewDTO::Wrapper& dto);
};


#endif //!_FORMCONTROLLER_H_
