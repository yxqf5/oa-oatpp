#pragma once

#ifndef  _ATQCONTROLLER_H_
#define _ATQCONTROLLER_H_

#include "domain/vo/BaseJsonVO.h"
#include"domain/vo/configuration/atq/configurationVo.h"
#include"domain/dto/configuration/atq/configurationDto.h"

#include OATPP_CODEGEN_BEGIN(ApiController)

class atqController : public oatpp::web::server::api::ApiController
{
	// ����������������
	API_ACCESS_DECLARE(atqController);
public: // ����ӿ�
//��ȡ��Ŀ�����б�ӿ�
    // 3.1 �����ѯ�ӿ�����
	ENDPOINT_INFO(queryconfiguration) {
		// ����ӿڱ���
		API_DEF_ADD_TITLE(ZH_WORDS_GETTER("configuration.atq.get.summary"));
		// ����Ĭ����Ȩ��������ѡ���壬��������ˣ�����ENDPOINT������Ҫ����API_HANDLER_AUTH_PARAME��
		API_DEF_ADD_AUTH();
		// ������Ӧ������ʽ
		API_DEF_ADD_RSP_JSON_WRAPPER(configurationJsonVo);
		// ����������ѯ��������
		API_DEF_ADD_QUERY_PARAMS(String, "logo", ZH_WORDS_GETTER("configuration.atq.basic.logo"), "tqtqtqtqtqtq", true);
	}
	// 3.2 �����ѯ�ӿڴ���
	ENDPOINT(API_M_GET, "/configuration/atq", queryconfiguration, QUERY(String, logo), API_HANDLER_AUTH_PARAME) {
		// ����ִ�к�����Ӧ���
		API_HANDLER_RESP_VO(execucateconfigquery(logo));
	}
//�޸���Ŀ����ӿ�
	// 3.1 �����޸Ľӿ�����
	API_DEF_ENDPOINT_INFO_AUTH(ZH_WORDS_GETTER("configuration.atq.put.summary"), modifyconfiguration,StringJsonVO::Wrapper);
	// 3.2 �����޸Ľӿڴ���
	API_HANDLER_ENDPOINT_AUTH(API_M_PUT, "/configuration/atq", modifyconfiguration, BODY_DTO(ConfigurationDTO::Wrapper, dto), execucatemodify(dto));
//������Ŀ����ӿ�
	// 3.1 ���������ӿ�����
	ENDPOINT_INFO(addConfiguration) {
		// ����ӿڱ���
		API_DEF_ADD_TITLE(ZH_WORDS_GETTER("configuration.atq.add.summary"));
		// ����Ĭ����Ȩ��������ѡ���壬��������ˣ�����ENDPOINT������Ҫ����API_HANDLER_AUTH_PARAME��
		API_DEF_ADD_AUTH();
		// ������Ӧ������ʽ
		API_DEF_ADD_RSP_JSON_WRAPPER(StringJsonVO);
	}
	// 3.2 ���������ӿڴ���
	ENDPOINT(API_M_POST, "/configuration/atq", addConfiguration, BODY_DTO(ConfigurationDTO::Wrapper, dto), API_HANDLER_AUTH_PARAME) {
		// ����ִ�к�����Ӧ���
		API_HANDLER_RESP_VO(execucateadd(dto));
	}
private: // ����ӿ�ִ�к���
	//ִ�л�ȡ��Ŀ�����б�
	configurationJsonVo::Wrapper execucateconfigquery(const String& logo);
	//ִ���޸���Ŀ����ӿ�
	StringJsonVO::Wrapper execucatemodify(const ConfigurationDTO::Wrapper& dto);
	//������Ŀ����ӿ�
	StringJsonVO::Wrapper execucateadd(const ConfigurationDTO::Wrapper& dto);
};

#include OATPP_CODEGEN_END(ApiController)

#endif //