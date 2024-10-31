#pragma once
#pragma once
#ifndef _ATTADETAILS_H_
#define _ATTADETAILS_H
#include "../../GlobalInclude.h"

#include OATPP_CODEGEN_BEGIN(DTO)


class AttaDetailsDTO : public oatpp::DTO {
	DTO_INIT(AttaDetailsDTO, DTO);
	//±íµ¥id
	

	API_DTO_FIELD_DEFAULT(String, xname, ZH_WORDS_GETTER("atta.list.xname"));
	API_DTO_FIELD_DEFAULT(String, xalias, ZH_WORDS_GETTER("atta.list.xalias"));
	
	
	API_DTO_FIELD_DEFAULT(String, xdescription, ZH_WORDS_GETTER("atta.list.xdescription"));
	API_DTO_FIELD_DEFAULT(String, xlength, ZH_WORDS_GETTER("atta.list.xlength"));
	API_DTO_FIELD_DEFAULT(String, xdata, ZH_WORDS_GETTER("atta.list.xdata"));


	

};

#include OATPP_CODEGEN_END(DTO)
#endif