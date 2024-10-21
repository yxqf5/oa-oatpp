#pragma once


/*
Copyright Zero One Star. All rights reserved.

@Author: awei
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
#ifndef _COLUMNSINFODTO_
#define _COLUMNSINFODTO_

#include "../../../GlobalInclude.h"

#include OATPP_CODEGEN_BEGIN(DTO)

class ColumnsInfoDTO : public oatpp::DTO
{
	DTO_INIT(ColumnsInfoDTO, DTO);
	// ��ĿΨһ��ֵ
	API_DTO_FIELD(String, id, ZH_WORDS_GETTER("column.field.id"),true,"123123");
	// ��Ŀ����
	API_DTO_FIELD(String, name, ZH_WORDS_GETTER("column.field.name"),true,"yxqf");
	// ��Ŀ����
	API_DTO_FIELD(String, othername, ZH_WORDS_GETTER("column.field.other-name"),false,"234234");
	// ��Ŀ����
	API_DTO_FIELD(String, description, ZH_WORDS_GETTER("column.field.description"),false,"qwerqwer");
	// ��Ŀ����
	API_DTO_FIELD(String, sort, ZH_WORDS_GETTER("column.field.sort"),false,"asdf");
	// ��Ŀ����
	API_DTO_FIELD(String, type, ZH_WORDS_GETTER("column.field.type"),false,"zxcv");
	// Ĭ�ϱ༭��
	API_DTO_FIELD(String, defaultEditForm, ZH_WORDS_GETTER("column.field.default-edit-form"),false,"azxcv");
	// Ĭ���Ķ���
	API_DTO_FIELD(String, defaultReadForm, ZH_WORDS_GETTER("column.field.default-read-form"),false,"aytui");
	// ��Ŀͼ��
	API_DTO_FIELD(String, image, ZH_WORDS_GETTER("column.field.image"),false,"image");

}; 

#include OATPP_CODEGEN_END(DTO)

#endif // !_COLUMNSINFODTO_
