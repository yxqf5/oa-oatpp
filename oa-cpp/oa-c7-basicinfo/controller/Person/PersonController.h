/*
 Copyright Zero One Star. All rights reserved.

 @Author: Rif
 @Date: 2024/10/19 17:04:30

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
#ifndef _PERSONCONTROLLER_H_
#define _PERSONCONTROLLER_H_

#include "domain/vo/BaseJsonVO.h"
#include "domain/vo/Person/PersonInfoVO.h"
#include "domain/query/PersonQuery.h"

#include OATPP_CODEGEN_BEGIN(ApiController)

class PersonController : public oatpp::web::server::api::ApiController
{
public: // ����ӿ�
	// ����������������
	API_ACCESS_DECLARE(PersonController);
	//	��ȡ��Ա�����б�
	ENDPOINT_INFO(queryPerson) {
		// ����ӿڱ���
		API_DEF_ADD_TITLE(ZH_WORDS_GETTER("person.query-person.summary"));
		// ����Ĭ����Ȩ��������ѡ���壬��������ˣ�����ENDPOINT������Ҫ����API_HANDLER_AUTH_PARAME��
		//API_DEF_ADD_AUTH();
		// ������Ӧ������ʽ
		API_DEF_ADD_RSP_JSON_WRAPPER(PersonInfoJsonVO);
		// ����������ѯ��������
		API_DEF_ADD_QUERY_PARAMS(String, "xname", ZH_WORDS_GETTER("person.query-person.name"), "R", true);
		API_DEF_ADD_QUERY_PARAMS(UInt64, "pageNumber", ZH_WORDS_GETTER("person.query-person.pageNumber"), 1 , true);
		//API_DEF_ADD_QUERY_PARAMS(String, "id", ZH_WORDS_GETTER("organization.query-organization.id"), "1", false);
	}

	// 3.2 �����ѯ�ӿڴ���
	ENDPOINT(API_M_GET, "/person/query-preson-name", queryPerson, QUERIES(QueryParams,queryParams)) {
		// ������ѯ����ΪQuery����ģ��
		API_HANDLER_QUERY_PARAM(perQuery, PersonQuery, queryParams);
		// ����ִ�к�����Ӧ���
		API_HANDLER_RESP_VO(execcuteQueryPerson(perQuery));
	}
	//��ȡ��֯��Ա���ƽӿ�

	
private: // ����ӿ�ִ�к���
	PersonInfoJsonVO::Wrapper execcuteQueryPerson(const PersonQuery::Wrapper& perQuery);
};

#include OATPP_CODEGEN_END(ApiController)

#endif // !_PERSONCONTROLLER_H_