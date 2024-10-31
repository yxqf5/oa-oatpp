#pragma once
#ifndef _ATTALISTVO_H_
#define _ATTALISTVO_H_

#include "../../GlobalInclude.h"
#include "domain/dto/AttaList/AttaListDTO.h"
#include "domain/dto/AttaList/AttaDetailsDTO.h"

#include OATPP_CODEGEN_BEGIN(DTO)

class AttaListJsonVO : public JsonVO<AttaListDTO::Wrapper> {
	DTO_INIT(AttaListJsonVO, JsonVO<AttaListDTO::Wrapper>);
};

// ·ÖÒ³
class AttaDetailsJsonVO : public JsonVO<AttaDetailsDTO::Wrapper> {
	DTO_INIT(AttaDetailsJsonVO, JsonVO<AttaDetailsDTO::Wrapper>);
};

#include OATPP_CODEGEN_END(DTO)

#endif // !_FORM_TEMPLATE_VO_
