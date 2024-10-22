#pragma once

#pragma once
#ifndef _FORMDETAILSDTO_H_
#define _FORMDETAILSDTO_H
#include "../../GlobalInclude.h"

#include OATPP_CODEGEN_BEGIN(DTO)


class FormDetailsDTO : public oatpp::DTO {
	DTO_INIT(FormDetailsDTO, DTO);
	//±íµ¥id
	API_DTO_FIELD_DEFAULT(String, xbs, ZH_WORDS_GETTER("form.details.bs"));
	API_DTO_FIELD_DEFAULT(String, xname, ZH_WORDS_GETTER("form.details.name"));
	API_DTO_FIELD_DEFAULT(String, xms, ZH_WORDS_GETTER("form.details.ms"));
	API_DTO_FIELD_DEFAULT(String, xreadonly, ZH_WORDS_GETTER("form.details.reado"));
	API_DTO_FIELD_DEFAULT(String, xtype, ZH_WORDS_GETTER("form.details.ys"));
	API_DTO_FIELD_DEFAULT(String, xlogo, ZH_WORDS_GETTER("form.details.picture"));
	API_DTO_FIELD_DEFAULT(String, xdy, ZH_WORDS_GETTER("form.details.dy"));
	API_DTO_FIELD_DEFAULT(String, xsc, ZH_WORDS_GETTER("form.details.sc"));
	API_DTO_FIELD_DEFAULT(String, xys, ZH_WORDS_GETTER("form.details.type"));
	API_DTO_FIELD_DEFAULT(String, xattr, ZH_WORDS_GETTER("form.details.attr"));
	

};

#include OATPP_CODEGEN_END(DTO)
#endif