 /*
 Copyright Zero One Star. All rights reserved.

 @Author: Rif
 @Date: 2024/10/19 11:49:05

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
#ifndef _ORGANIZATIONMEMBERVO_H_
#define _ORGANIZATIONMEMBERVO_H_

#include "../../GlobalInclude.h"
#include "../../dto/Organization/OrganizationMemberDTO.h"

#include OATPP_CODEGEN_BEGIN(DTO)

class OrganizationMemberVO: public oatpp::DTO
{
	DTO_INIT(OrganizationMemberVO, DTO);

	DTO_FIELD(List<Object<OrganizationMemberDTO>>, list);
	
	//API_DTO_FIELD(String, xname, ZH_WORDS_GETTER("organization.query-organization-member.summary"), true ,"Rif");
	//API_DTO_FIELD(String, xid, ZH_WORDS_GETTER("organization.query-organization-member.id"), true ,"007");
	//API_DTO_FIELD(String, xemployee, ZH_WORDS_GETTER("organization.query-organization-member.company"), true ,"01 Unoversity");
};

/**
 * 示例显示JsonVO，用于响应给客户端的Json对象
 */
class OrganizationMemberJsonVO: public JsonVO<OrganizationMemberVO::Wrapper> {
	DTO_INIT(OrganizationMemberJsonVO, JsonVO<OrganizationMemberVO::Wrapper>);
};

#include OATPP_CODEGEN_END(DTO)

#endif // !_ORGANIZATIONMEMBERVO_H_