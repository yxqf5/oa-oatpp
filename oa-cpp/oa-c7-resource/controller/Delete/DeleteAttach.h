/*
 Copyright Zero One Star. All rights reserved.

 @Author: W.C.K.D
 @Date: 2024/10/22 21:13:13

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
#ifndef _DELETECONTROLLER_H
#define _DELETECONTROLLER_H

#include "domain/vo/BaseJsonVO.h"
#include "domain/vo/Delete/OrganizationNameVO.h"
#include "domain/vo/Delete/OrganizationMemberVO.h"

#include OATPP_CODEGEN_BEGIN(ApiController)

class DeleteController : public oatpp::web::server::api::ApiController
{
	// ����������������
	API_ACCESS_DECLARE(DeleteController);
public: // ����ӿ�

	// 1. ��ȡ��֯���ƽӿ�
	ENDPOINT_INFO(deleteAttatch) {
		// ����ӿڱ���
		API_DEF_ADD_TITLE(ZH_WORDS_GETTER("delete.resource"));
		// ����Ĭ����Ȩ��������ѡ���壬��������ˣ�����ENDPOINT������Ҫ����API_HANDLER_AUTH_PARAME��
		//API_DEF_ADD_AUTH();
		// ������Ӧ������ʽ
		API_DEF_ADD_RSP_JSON_WRAPPER(DeleteAttachJsonVO);
		// ����������ѯ��������
		API_DEF_ADD_QUERY_PARAMS(String, "attatchName", ZH_WORDS_GETTER("cms_appndict.xname"), "null", true);
		API_DEF_ADD_QUERY_PARAMS(String, "id", ZH_WORDS_GETTER("cms_appndict.xid"), "1", false);
	}
	// 3.2 �����ѯ�ӿڴ���
	ENDPOINT(API_M_DEL, "/delete", deleteAttatch, QUERY(String,attatchName)) {
		// ����ִ�к�����Ӧ���
		API_HANDLER_RESP_VO(execcuteQueryAttatchInfo(attatchName));
	}

//	---------------------------------------------------------------------

	//	2. ��ȡ��֯��Ա���ƽӿ�
	//ENDPOINT_INFO(queryOrganizationMember) {
	//	// ����ӿڱ���
	//	API_DEF_ADD_TITLE(ZH_WORDS_GETTER("organization.query-organization-member.summary"));
	//	// ����Ĭ����Ȩ��������ѡ���壬��������ˣ�����ENDPOINT������Ҫ����API_HANDLER_AUTH_PARAME��
	//	//API_DEF_ADD_AUTH();
	//	// ������Ӧ������ʽ
	//	API_DEF_ADD_RSP_JSON_WRAPPER(OrganizationMemberJsonVO);
	//	// ����������ѯ��������
	//	API_DEF_ADD_QUERY_PARAMS(String, "name", ZH_WORDS_GETTER("organization.query-organization-member.name"), "li ming", true);
	//	//API_DEF_ADD_QUERY_PARAMS(String, "id", ZH_WORDS_GETTER("organization.query-organization.id"), "1", false);
	//}
	//// 3.2 �����ѯ�ӿڴ���
	//ENDPOINT(API_M_DEL, "/delete_attatch", queryOrganizationMember, QUERY(String,name)) {
	//	// ����ִ�к�����Ӧ���
	//	API_HANDLER_RESP_VO(execcuteQueryOrganizationMember(name));
	//}
	//��ȡ��֯��Ա���ƽӿ�

private: // ����ӿ�ִ�к���
	DeleteAttachJsonVO::Wrapper execcuteQueryAttatchInfo(const String& name);
};

#include OATPP_CODEGEN_END(ApiController)

#endif // !_ORGANIZATIONCONTROLLER_H_