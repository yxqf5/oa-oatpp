#pragma once
#pragma once

#pragma once
#ifndef _DATADETAILSDTO_H_
#define _DATADETAILSDTO_H
#include "../../GlobalInclude.h"

#include OATPP_CODEGEN_BEGIN(DTO)


class DataDetailsDTO : public oatpp::DTO {
	DTO_INIT(DataDetailsDTO, DTO);
	//±íµ¥id
	API_DTO_FIELD_DEFAULT(String, xbs, ZH_WORDS_GETTER("data.details.bs"));
	API_DTO_FIELD_DEFAULT(String, xname, ZH_WORDS_GETTER("data.details.name"));
	API_DTO_FIELD_DEFAULT(String, xms, ZH_WORDS_GETTER("data.details.ms"));
	API_DTO_FIELD_DEFAULT(String, xreadonly, ZH_WORDS_GETTER("data.details.reado"));
	API_DTO_FIELD_DEFAULT(String, xtype, ZH_WORDS_GETTER("data.details.ys"));
	API_DTO_FIELD_DEFAULT(String, xlogo, ZH_WORDS_GETTER("data.details.picture"));
	API_DTO_FIELD_DEFAULT(String, xdy, ZH_WORDS_GETTER("data.details.dy"));
	API_DTO_FIELD_DEFAULT(String, xsc, ZH_WORDS_GETTER("data.details.sc"));
	API_DTO_FIELD_DEFAULT(String, xys, ZH_WORDS_GETTER("data.details.type"));
	API_DTO_FIELD_DEFAULT(String, xattr, ZH_WORDS_GETTER("data.details.attr"));


};

#include OATPP_CODEGEN_END(DTO)
#endif