#pragma once

#ifndef _SECTION_CONTROLLER_
#define _SECTION_CONTROLLER_
#include "oatpp-swagger/Types.hpp"
#include "domain/GlobalInclude.h"
#include "domain/vo/BaseJsonVO.h"

#include OATPP_CODEGEN_BEGIN(ApiController) //<- Begin Codegen

class SectionController : public oatpp::web::server::api::ApiController
{
	API_ACCESS_DECLARE(SectionController);
public:

	// 删除栏目分类
	ENDPOINT_INFO(removeSection) {
		API_DEF_ADD_COMMON_AUTH(ZH_WORDS_GETTER("section.delete"), Uint64JsonVO::Wrapper);
		// id类型不一定是整型，可以后期调整
		API_DEF_ADD_PATH_PARAMS(UInt64, "id", ZH_WORDS_GETTER("section.delete.id"), 1, true);
	}
	API_HANDLER_ENDPOINT_AUTH(API_M_DEL, "/section/{id}", removeSection, PATH(UInt64, id), execRemoveSection(id));
private:
	Uint64JsonVO::Wrapper execRemoveSection(const UInt64& id); 
}

#include OATPP_CODEGEN_END(ApiController) //<- End Codegen
#endif // _SECTION_CONTROLLER_
