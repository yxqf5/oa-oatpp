 /*
 Copyright Zero One Star. All rights reserved.

 @Author: Rif
 @Date: 2024/10/19 11:25:10

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
#ifndef _ORGANIZATIONMEMBERDTO_H_
#define _ORGANIZATIONMEMBERDTO_H_

#include "../../GlobalInclude.h"

#include OATPP_CODEGEN_BEGIN(DTO)

class OrganizationName : public oatpp::DTO
{
	DTO_INIT(OrganizationName, DTO);

	API_DTO_FIELD(String, xname, ZH_WORDS_GETTER("organization.query-organization.name"), true ,"01 School");
	API_DTO_FIELD(String, xid, ZH_WORDS_GETTER("organization.query-organization.id"), true ,"01");
	
	//DTO_FIELD(String, name);
	//DTO_FIELD_INFO(name) {
	//	info->description = ZH_WORDS_GETTER("organization.query-organization-member.summary");
	//}

	//DTO_FIELD(String, id);
	//DTO_FIELD_INFO(id) {
	//	info->description = ZH_WORDS_GETTER("organization.query-organization-member.summary");
	//}
};

#include OATPP_CODEGEN_END(DTO)

#endif // !_ORGANIZATIONMEMBERDTO_H_
