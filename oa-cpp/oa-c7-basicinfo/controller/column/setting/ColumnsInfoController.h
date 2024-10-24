#pragma once


/*
 Copyright Zero One Star. All rights reserved.

 @Author: yxqf
 @Date: $DATE$ $HOUR$:$MINUTE$:$SECOND$

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
#ifndef _COLUMNSINFOCOLLTROLLER_
#define _COLUMNSINFOCOLLTROLLER_

#include "domain/vo/BaseJsonVO.h"
#include "domain/dto/column/setting/ColumnsInfoDTO.h"
#include "domain/vo/column/setting/ColumnsInfoVO.h"
//#include "domain/query/sample/SampleQuery.h"

#include OATPP_CODEGEN_BEGIN(ApiController)

class ColumnsInfoController : public oatpp::web::server::api::ApiController
{
	// ����������������
	API_ACCESS_DECLARE(ColumnsInfoController);
public: // ����ӿ�


	
	//������Ŀ
	// 
	// 3.1 ���������ӿ�����
	ENDPOINT_INFO(addColumns) {
		//info->summary = ZH_WORDS_GETTER("column.add.summary");
		// ����ӿڱ���
		API_DEF_ADD_TITLE(ZH_WORDS_GETTER("column.add.summary"));
		// ����Ĭ����Ȩ��������ѡ���壬��������ˣ�����ENDPOINT������Ҫ����API_HANDLER_AUTH_PARAME��
		API_DEF_ADD_AUTH();
		// ������Ӧ������ʽ
		API_DEF_ADD_RSP_JSON_WRAPPER(ColumnsInfoJsonVO);
	}
	// 3.2 ���������ӿڴ���
	ENDPOINT(API_M_POST, "/column-add", addColumns, BODY_DTO(ColumnsInfoDTO::Wrapper, dto), API_HANDLER_AUTH_PARAME) {
		// ����ִ�к�����Ӧ���
		API_HANDLER_RESP_VO(execAddColumns(dto));
	}


	//�޸���Ŀ
	// 
	// 3.1 �����޸Ľӿ�����
	API_DEF_ENDPOINT_INFO_AUTH(ZH_WORDS_GETTER("column.post.summary"), modifyColumnsInfo, StringJsonVO::Wrapper);
	// 3.2 �����޸Ľӿڴ���
	//API_HANDLER_ENDPOINT_AUTH(API_M_PUT, "/column-setting", modifyColumnsInfo, BODY_DTO(ColumnsInfoDTO::Wrapper, dto), execModifySample(dto));
	ENDPOINT(API_M_PUT, "/column-post", modifyColumnsInfo, BODY_DTO(ColumnsInfoDTO::Wrapper, dto), API_HANDLER_AUTH_PARAME) {
		// ����ִ�к�����Ӧ���
		API_HANDLER_RESP_VO(execModifyColumns(dto));
	}


	//ɾ����Ŀ
	// 
	// 3.1 ����ɾ���ӿ�����

	ENDPOINT_INFO(removeColumns) {

		// �������ͷ��������Լ���Ȩ֧��
		API_DEF_ADD_COMMON_AUTH(ZH_WORDS_GETTER("column.remove.summary"), ColumnsInfoJsonVO::Wrapper);
		// ��������·������˵��
		//API_DEF_ADD_PATH_PARAMS(UInt64, "id", ZH_WORDS_GETTER("sample.field.id"), 1, true);
	}
	// 3.2 ����ɾ���ӿڴ���
	//API_HANDLER_ENDPOINT_AUTH(API_M_DEL, "/column-remove/{id}", removeSample, PATH(UInt64, id), execRemoveSample(id));
	ENDPOINT(API_M_DEL, "/column-remove/{id}", removeColumns, QUERY(String,id), API_HANDLER_AUTH_PARAME) {
		// ����ִ�к�����Ӧ���
		String id1 = authObject->getPayload().getId();
		API_HANDLER_RESP_VO(execRemoveColumns(id1));
	}




private: // ����ӿ�ִ�к���
	ColumnsInfoJsonVO::Wrapper execAddColumns(ColumnsInfoDTO::Wrapper dto);
	StringJsonVO::Wrapper execModifyColumns(ColumnsInfoDTO::Wrapper dto);
	ColumnsInfoJsonVO::Wrapper execRemoveColumns(String id); 
};

#include OATPP_CODEGEN_END(ApiController)

#endif // !_$FILE_BASE_UPPER$_H_