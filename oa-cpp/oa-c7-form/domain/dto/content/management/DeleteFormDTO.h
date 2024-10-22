#pragma once
#ifndef _DELETEFORM_DTO_
#define _DELETEFORM_DTO_
#include "../../../GlobalInclude.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/*
	ɾ����Ŀ���������
	author��niuniu
*/
class DeleteFormDTO : public oatpp::DTO {
	DTO_INIT(DeleteFormDTO, DTO);
	//��id
	API_DTO_FIELD_DEFAULT(String, xid, ZH_WORDS_GETTER("content.management.field.xid"));
};
 
#include OATPP_CODEGEN_END(DTO)
#endif _DELETEFORM_DTO_
