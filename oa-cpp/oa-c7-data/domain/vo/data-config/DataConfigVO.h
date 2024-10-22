#pragma once
/*
 Copyright Zero One Star. All rights reserved.

 @Author: awei
 @Date: 2024/10/21 19:38:29

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
#ifndef _ADDDATACONFIGVO_H_
#define _ADDDATACONFIGVO_H_

#include "../../GlobalInclude.h"

#include OATPP_CODEGEN_BEGIN(DTO)

class DataConfigVO : public oatpp::DTO
{
	DTO_INIT(DataConfigVO, DTO);
	// ����
	API_DTO_FIELD(String, name, ZH_WORDS_GETTER("data-config.field.xname"), true, {});
	// ����
	API_DTO_FIELD(String, alias, ZH_WORDS_GETTER("data-config.field.xalias"), true, {});
	// ����
	API_DTO_FIELD_DEFAULT(String, description, ZH_WORDS_GETTER("data-config.field.xdescription"));
	// ��Ŀ
	API_DTO_FIELD_DEFAULT(String, project, ZH_WORDS_GETTER("data-config.field.project"));
	// ����
	API_DTO_FIELD_DEFAULT(String, type, ZH_WORDS_GETTER("data-config.field.type"));
	// ֵ
	API_DTO_FIELD_DEFAULT(String, value, ZH_WORDS_GETTER("data-config.field.value"));
	// Ψһ��ʶ
	API_DTO_FIELD_DEFAULT(String, id, ZH_WORDS_GETTER("data-config.field.xid"));
};

/**
 * ��������JsonVO��������Ӧ���ͻ��˵�Json����
 */
class DataConfigJsonVO : public JsonVO<DataConfigVO::Wrapper> {
	DTO_INIT(DataConfigJsonVO, JsonVO<DataConfigVO::Wrapper>);
};

#include OATPP_CODEGEN_END(DTO)

#endif // !_ADDDATACONFIGVO_H_
