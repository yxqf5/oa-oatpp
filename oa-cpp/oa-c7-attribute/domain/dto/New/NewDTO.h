#pragma once
#pragma once

#ifndef _NewDTO_H_
#define _NewDTO_H_

#include "../../GlobalInclude.h"

#include OATPP_CODEGEN_BEGIN(DTO)

class NewDTO : public oatpp::DTO
{
    DTO_INIT(NewDTO, DTO);

    API_DTO_FIELD_DEFAULT(String, picture, ZH_WORDS_GETTER("newdto.put.picture"));
    API_DTO_FIELD_DEFAULT(String, fw, ZH_WORDS_GETTER("newdto.put.fw"));
    API_DTO_FIELD_DEFAULT(String, publisher, ZH_WORDS_GETTER("newdto.put.publisher"));
    API_DTO_FIELD_DEFAULT(String, administrators, ZH_WORDS_GETTER("newdto.put.administrators"));




};


#include OATPP_CODEGEN_END(DTO)


#endif