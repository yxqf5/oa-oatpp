#pragma once
#ifndef _DATALIST_H_
#define _DATALIST_H
#include "../../GlobalInclude.h"

#include OATPP_CODEGEN_BEGIN(DTO)


class DataListDTO : public oatpp::DTO {
	DTO_INIT(DataListDTO, DTO);
	//±íµ¥id
	API_DTO_FIELD_DEFAULT(String, xid, ZH_WORDS_GETTER("data.list.xid"));
	API_DTO_FIELD_DEFAULT(String, xpicture, ZH_WORDS_GETTER("data.list.picture"));
	API_DTO_FIELD_DEFAULT(String, xsequence, ZH_WORDS_GETTER("data.list.xsequence"));
	API_DTO_FIELD_DEFAULT(String, xname, ZH_WORDS_GETTER("data.list.xname"));

};

#include OATPP_CODEGEN_END(DTO)
#endif