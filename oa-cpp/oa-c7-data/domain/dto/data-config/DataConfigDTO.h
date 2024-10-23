#pragma once
/*
 Copyright Zero One Star. All rights reserved.

 @Author: awei
 @Date: 2024/10/21 17:39:56

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
#ifndef _ADDDATACONFIGDTO_H_
#define _ADDDATACONFIGDTO_H_

#include "../../GlobalInclude.h"

/**
 * 数据配置对象
 */
#include OATPP_CODEGEN_BEGIN(DTO)

class DataConfigDTO : public oatpp::DTO
{
	DTO_INIT(DataConfigDTO, DTO);
	// 名称
	API_DTO_FIELD(String, xname, ZH_WORDS_GETTER("data-config.field.xname"), true, {});
	// 别名
	API_DTO_FIELD(String, xalias, ZH_WORDS_GETTER("data-config.field.xalias"), true, {});
	// 描述
	API_DTO_FIELD_DEFAULT(String, xdescription, ZH_WORDS_GETTER("data-config.field.xdescription"));
	// 项目
	API_DTO_FIELD_DEFAULT(String, project, ZH_WORDS_GETTER("data-config.field.project"));
	// 类型
	API_DTO_FIELD_DEFAULT(String, type, ZH_WORDS_GETTER("data-config.field.type"));
	// 值
	API_DTO_FIELD_DEFAULT(String, value, ZH_WORDS_GETTER("data-config.field.value"));

};

#include OATPP_CODEGEN_END(DTO)

#endif // !_ADDDATACONFIGDTO_H_

