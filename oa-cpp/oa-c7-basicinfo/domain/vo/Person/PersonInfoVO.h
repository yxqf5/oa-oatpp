 /*
 Copyright Zero One Star. All rights reserved.

 @Author: Rif
 @Date: 2024/10/19 11:47:15

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

	  https://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
*/
#ifndef _PERSONINFOVO_H_
#define _PERSONINFOVO_H_

#include "../../GlobalInclude.h"
#include "../../dto/Person/PersonInfoDTO.h"

#include OATPP_CODEGEN_BEGIN(DTO)

class PersonInfoVO: public oatpp::DTO
{
	DTO_INIT(PersonInfoVO, DTO);
	
	DTO_FIELD(List<Object<PersonInfoDTO>>, list);
	//API_DTO_FIELD(String, xname, ZH_WORDS_GETTER("person.query-person.name"), true ,"Rif");
	//API_DTO_FIELD(String, xid, ZH_WORDS_GETTER("person.query-person.id"), true ,"007");

	//DTO_FIELD(String, name);
	//DTO_FIELD_INFO(name) {
	//	info->description = "Person Info";
	//}
	//DTO_FIELD(String, id);
	//DTO_FIELD_INFO(id) {
	//	info->description = ZH_WORDS_GETTER("sample.field.age");
	//}
};

/**
 * 示例显示JsonVO，用于响应给客户端的Json对象
 */
class PersonInfoJsonVO: public JsonVO<PersonInfoVO::Wrapper> {
	DTO_INIT(PersonInfoJsonVO, JsonVO<PersonInfoVO::Wrapper>);
};

#include OATPP_CODEGEN_END(DTO)

#endif // !_PERSONINFOVO_H_