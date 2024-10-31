#pragma once
#ifndef _DATALIST_H_
#define _DATALIST_H
#include "../../GlobalInclude.h"

#include OATPP_CODEGEN_BEGIN(DTO)


class DataListDTO : public oatpp::DTO {
	DTO_INIT(DataListDTO, DTO);
	//��id
	
	
	
	API_DTO_FIELD_DEFAULT(String, xname, ZH_WORDS_GETTER("data.list.xname"));
	API_DTO_FIELD_DEFAULT(String, xsequence, ZH_WORDS_GETTER("data.list.xsequence"));

};

#include OATPP_CODEGEN_END(DTO)
#endif