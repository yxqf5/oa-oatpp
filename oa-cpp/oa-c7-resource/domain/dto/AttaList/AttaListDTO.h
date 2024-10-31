#pragma once
#ifndef _ATTALIST_H_
#define _ATTALIST_H
#include "../../GlobalInclude.h"

#include OATPP_CODEGEN_BEGIN(DTO)


class AttaListDTO : public oatpp::DTO {
	DTO_INIT(AttaListDTO, DTO);
	//±íµ¥id
	
	API_DTO_FIELD_DEFAULT(String, xcreateTime, ZH_WORDS_GETTER("atta.list.xcreatetime"));
	API_DTO_FIELD_DEFAULT(String, xfileName, ZH_WORDS_GETTER("atta.list.xfileName"));
	API_DTO_FIELD_DEFAULT(String, xname, ZH_WORDS_GETTER("atta.list.xname"));
	API_DTO_FIELD_DEFAULT(String, xlength, ZH_WORDS_GETTER("atta.list.xlength"));
	
	
};

#include OATPP_CODEGEN_END(DTO)
#endif