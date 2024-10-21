/*
 Copyright Zero One Star. All rights reserved.

 @Author: Rif
 @Date: 2024/10/19 11:58:35

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

	  https://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
*/
#ifndef _ORGANIZATIONCONTROLLER_H_
#define _ORGANIZATIONCONTROLLER_H_

#include "domain/vo/BaseJsonVO.h"
#include "domain/vo/Organization/OrganizationNameVO.h"
#include "domain/vo/Organization/OrganizationMemberVO.h"

#include OATPP_CODEGEN_BEGIN(ApiController)

class OrganizationController : public oatpp::web::server::api::ApiController
{
	// ����������������
	API_ACCESS_DECLARE(OrganizationController);
public: // ����ӿ�

	// 1. ��ȡ��֯���ƽӿ�
	ENDPOINT_INFO(queryOrganizationInfo) {
		// ����ӿڱ���
		API_DEF_ADD_TITLE(ZH_WORDS_GETTER("organization.query-organization.summary"));
		// ����Ĭ����Ȩ��������ѡ���壬��������ˣ�����ENDPOINT������Ҫ����API_HANDLER_AUTH_PARAME��
		//API_DEF_ADD_AUTH();
		// ������Ӧ������ʽ
		API_DEF_ADD_RSP_JSON_WRAPPER(OrganizationNameJsonVO);
		// ����������ѯ��������
		API_DEF_ADD_QUERY_PARAMS(String, "xname", ZH_WORDS_GETTER("organization.query-organization.name"), "li ming", true);
		//API_DEF_ADD_QUERY_PARAMS(String, "xid", ZH_WORDS_GETTER("organization.query-organization.id"), "1", false);
	}
	// 3.2 �����ѯ�ӿڴ���
	ENDPOINT(API_M_GET, "/organization/query-organization-name", queryOrganizationInfo, QUERY(String,xname)) {
		// ����ִ�к�����Ӧ���
		API_HANDLER_RESP_VO(execcuteQueryOrganizationInfo(xname));
	}

//	---------------------------------------------------------------------

	//	2. ��ȡ��֯��Ա���ƽӿ�
	ENDPOINT_INFO(queryOrganizationMember) {
		// ����ӿڱ���
		API_DEF_ADD_TITLE(ZH_WORDS_GETTER("organization.query-organization-member.summary"));
		// ����Ĭ����Ȩ��������ѡ���壬��������ˣ�����ENDPOINT������Ҫ����API_HANDLER_AUTH_PARAME��
		//API_DEF_ADD_AUTH();
		// ������Ӧ������ʽ
		API_DEF_ADD_RSP_JSON_WRAPPER(OrganizationMemberJsonVO);
		// ����������ѯ��������
		API_DEF_ADD_QUERY_PARAMS(String, "xname", ZH_WORDS_GETTER("organization.query-organization-member.name"), "li ming", true);
		//API_DEF_ADD_QUERY_PARAMS(String, "id", ZH_WORDS_GETTER("organization.query-organization.id"), "1", false);
	}
	// 3.2 �����ѯ�ӿڴ���
	ENDPOINT(API_M_GET, "/organization/query-organization-member-name", queryOrganizationMember, QUERY(String,xname)) {
		// ����ִ�к�����Ӧ���
		API_HANDLER_RESP_VO(execcuteQueryOrganizationMember(xname));
	}
	//��ȡ��֯��Ա���ƽӿ�

private: // ����ӿ�ִ�к���
	OrganizationNameJsonVO::Wrapper execcuteQueryOrganizationInfo(const String& xname);
	OrganizationMemberJsonVO::Wrapper execcuteQueryOrganizationMember(const String& xname);
};

#include OATPP_CODEGEN_END(ApiController)

#endif // !_ORGANIZATIONCONTROLLER_H_