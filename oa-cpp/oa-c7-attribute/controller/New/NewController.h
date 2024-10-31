#pragma once
#pragma once
#pragma once
#ifndef  _NewController_H_
#define  _NewController_H_

#include "domain/vo/BaseJsonVO.h"
#include "domain/vo/new/NewVO.h"
#include "domain/dto/new/NewDTO.h"

#include OATPP_CODEGEN_BEGIN(ApiController)

class NewController : public oatpp::web::server::api::ApiController
{
	API_ACCESS_DECLARE(NewController);
public:
	//��ȡ��Ŀ���Խӿ�
	ENDPOINT_INFO(queryNew) {
		// ����ӿڱ���
		API_DEF_ADD_TITLE(ZH_WORDS_GETTER("newdto.get.summary"));
		// ����Ĭ����Ȩ��������ѡ���壬��������ˣ�����ENDPOINT������Ҫ����API_HANDLER_AUTH_PARAME��
		API_DEF_ADD_AUTH();
		// ������Ӧ������ʽ
		API_DEF_ADD_RSP_JSON_WRAPPER(NewJsonVO);
		// �����ҳ��ѯ��������
		//API_DEF_ADD_PAGE_PARAMS();
		// ����������ѯ��������
		API_DEF_ADD_QUERY_PARAMS(String, "id", ZH_WORDS_GETTER("newdto.put.id"), "1", true);
		//API_DEF_ADD_QUERY_PARAMS(String, "sex", ZH_WORDS_GETTER("sample.field.sex"), "N", false);
	}
	// 3.2 �����ѯ�ӿڴ���
	ENDPOINT(API_M_GET, "/attribute", queryNew, QUERY(String, id), API_HANDLER_AUTH_PARAME) {
		// ������ѯ����ΪQuery����ģ��
		//API_HANDLER_QUERY_PARAM(userQuery, SampleQuery, queryParams);
		// ����ִ�к�����Ӧ���
		API_HANDLER_RESP_VO(executeQueryNew(id));
	}
	//�½���Ŀ�ӿ�
	// 3.1 �����޸Ľӿ�����
	API_DEF_ENDPOINT_INFO_AUTH(ZH_WORDS_GETTER("newdto.put.summary"), modifyNew, StringJsonVO::Wrapper);
	// 3.2 �����޸Ľӿڴ���
	API_HANDLER_ENDPOINT_AUTH(API_M_PUT, "/New", modifyNew, BODY_DTO(NewDTO::Wrapper, dto), executeModifyNew(dto));

private:
	StringJsonVO::Wrapper executeQueryNew(const String& id);
	//ִ���޸ĸ�����Ϣ
	StringJsonVO::Wrapper executeModifyNew(const NewDTO::Wrapper& dto);
};

#endif // ! _NewController_H_