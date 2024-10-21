#pragma once
/*
 Copyright Zero One Star. All rights reserved.

 @Author: awei
 @Date: 2022/10/25 10:59:38

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
#ifndef _CONFIGURATION_DTO_
#define _CONFIGURATION_DTO_
#include "../../../GlobalInclude.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * ʾ���������
 */
class ConfigurationDTO : public oatpp::DTO
{
	DTO_INIT(ConfigurationDTO, DTO);
	//ѡ������
	API_DTO_FIELD(String, xcreatorUnitName, ZH_WORDS_GETTER("configuration.atq.choose.summary"), true, "configuration.atq.choose.edit");
	//�����ʶ
	//API_DTO_FIELD(String, xappId, ZH_WORDS_GETTER("configuration.atq.basic.logo"), true, "abababababab");
	//�������
	API_DTO_FIELD(String, xalias, ZH_WORDS_GETTER("configuration.atq.basic.name"), true, "newfile");
	//�ĵ�����
	API_DTO_FIELD(String, xdocumentType, ZH_WORDS_GETTER("configuration.atq.basic.type"), true, "Information");
	//����ʱ�Ƿ�����Ϣ
	API_DTO_FIELD(String, xsendNotify, ZH_WORDS_GETTER("configuration.atq.basic.auto"), true, "yes");
	//ʹ������
	API_DTO_FIELD(String, process, ZH_WORDS_GETTER("configuration.atq.process"), true, "from 1 to 2");
	//�ɼ���Χ
	API_DTO_FIELD(String, range, ZH_WORDS_GETTER("configuration.atq.range"), true, "everyone");
	//������
	//API_DTO_FIELD(String, xcreatorPerson, ZH_WORDS_GETTER("configuration.atq.publish"), true, "xiaohe");
	//������
	API_DTO_FIELD(String, xmanagePerson, ZH_WORDS_GETTER("configuration.atq.manage"), true, "xadmin");
};


#include OATPP_CODEGEN_END(DTO)
#endif//