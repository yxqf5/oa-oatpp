#pragma once
#ifndef _ATTALIST_H_
#define _ATTALIST_H
#include "../../GlobalInclude.h"

#include OATPP_CODEGEN_BEGIN(DTO)


class AttaListDTO : public oatpp::DTO {
	DTO_INIT(AttaListDTO, DTO);
	//±íµ¥id
	API_DTO_FIELD_DEFAULT(String, xid, ZH_WORDS_GETTER("data.list.xid"));
	
};

#include OATPP_CODEGEN_END(DTO)
#endif