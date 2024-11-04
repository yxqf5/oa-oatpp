#pragma once
#ifndef _COLUMNSINFO_SERVICE_
#define _COLUMNSINFO_SERVICE_
#include <list>
#include "../../../domain/vo/column/setting/ColumnsInfoVO.h"
#include "../../../domain/dto/column/setting/ColumnsInfoDTO.h"
//#include "domain/query/sample/SampleQuery.h"


/**
 * ʾ������ʵ�֣���ʾ������ʾ������ʵ��
 */
class ColumnsInfoService
{
public:
	// ��ҳ��ѯ��������
	//SamplePageDTO::Wrapper listAll(const SampleQuery::Wrapper& query);
	
	//��ѯ���ݿ����Ƿ�������,ͨ��name��ѯ
	bool QueryData(const ColumnsInfoDTO::Wrapper& dto);
	//ͨ��id��ѯ����
	ColumnsInfoDTO::Wrapper QueryDataById(const ColumnsInfoDTO::Wrapper& dto);
	// ��������
	uint64_t saveData(const ColumnsInfoDTO::Wrapper& dto, const PayloadDTO& payload);
	// �޸�����
	bool updateData(const ColumnsInfoDTO::Wrapper& dto);
	// ͨ��IDɾ������
	bool removeData(uint64_t id);
};

#endif // !_COLUMNSINFO_SERVICE_

