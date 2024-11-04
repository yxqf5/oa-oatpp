#pragma once
#pragma once
/*
 Copyright Zero One Star. All rights reserved.

 @Author: awei
 @Date: 2022/10/25 14:23:49

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
#ifndef _SAMPLE_DAO_
#define _SAMPLE_DAO_
#include "BaseDAO.h"
#include "../../../domain/do/column/setting/ColumnsInfoDO.h"

//#include "../../domain/query/sample/SampleQuery.h"

/**
 * ʾ�������ݿ����ʵ��
 */
class ColumnsInfoDAO : public BaseDAO
{
public:
	// ͳ����������
	//uint64_t count(const SampleQuery::Wrapper& query);
	// ��ҳ��ѯ����
	//list<ColumnsInfoDO> selectWithPage(const SampleQuery::Wrapper& query);
	
	// ͨ��������ѯ����
	//list<ColumnsInfoDO> selectByName(const string& name);


	//ͨ��id��ѯ�Ƿ�����������;�����ж�id�Ƿ����
	std::list<ColumnsInfoDO> QueryById(const ColumnsInfoDO& qObj);
		
	//ͨ��name��ѯ�Ƿ�����������;�����ж�name�Ƿ����
	uint64_t QueryByName(const ColumnsInfoDO& qObj);

	// ��������
	int insert(const ColumnsInfoDO& iObj);
	// �޸�����
	int update(const ColumnsInfoDO& uObj);
	// ͨ��IDɾ������
	int deleteById(uint64_t id);
};
#endif // !_SAMPLE_DAO_
