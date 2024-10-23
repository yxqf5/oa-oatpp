#pragma once
#pragma once
#ifndef _ATTADETAILS_H_
#define _ATTADETAILS_H
#include "../../GlobalInclude.h"

#include OATPP_CODEGEN_BEGIN(DTO)


class AttaDetailsDTO : public oatpp::DTO {
	DTO_INIT(AttaDetailsDTO, DTO);
	//±íµ¥id
	API_DTO_FIELD_DEFAULT(String, xid, ZH_WORDS_GETTER("data.list.xid"));

};

#include OATPP_CODEGEN_END(DTO)
#endif