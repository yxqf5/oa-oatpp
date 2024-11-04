


#include "stdafx.h"
#include "ColumnsInfoController.h"
#include "../../../service/column/setting/ColumnsInfoService.h"
#include "NacosClient.h"
#include "FastDfsClient.h"
#include<iostream>
//#include <unordered_set>



ColumnsInfoJsonVO::Wrapper ColumnsInfoController::execAddColumns(ColumnsInfoDTO::Wrapper dto,const PayloadDTO& payload) {
	auto jvo = ColumnsInfoJsonVO::createShared();

	//���ݲο�ϵͳ,��Ŀ���ֲ���Ϊ��
	if (!dto->name) {
		jvo->init(dto, RS_PARAMS_INVALID);
		return jvo;
	}

	//id not null
	if (!dto->id) {
		jvo->init(dto, RS_PARAMS_INVALID);
		return jvo;
	}
	
	//���ò����xid��ֵ
	//dto->id =dto->name + dto->othername;
	////////

	ColumnsInfoService service;
	auto it = service.QueryData(dto);
	//std::cout <<"the it value : " << it << std::endl;
	//��ѯname�Ƿ����,�����ظ� --�������querydata����1,Ȼ�󷵻��쳣
	if (it) {
		jvo->init(dto, RS_PARAMS_INVALID);
		return jvo;
	}


	auto tage = service.saveData(dto,payload);

	if (tage>0) {

		jvo->success(dto);
	}
	else {
		jvo->fail(dto);
	}
	return jvo;

	////�����Ҫ�ϴ�ͷ��
	//if (dto->image)
	//{
	//	ZO_CREATE_DFS_CLIENT_URL(dfs, urlPrefix);
	//	std::string fieldName = dfs.uploadFile(dto->image);//////////////
	//	std::cout << "upload fieldname is : " << fieldName << std::endl;
	//}

	/*ColumnsInfoService service;
	auto jvo = ColumnsInfoJsonVO::createShared();
	auto result = service.updateData(dto);

	jvo->success(dto);


	return jvo;*/
}


ColumnsInfoJsonVO::Wrapper ColumnsInfoController::execModifyColumns(ColumnsInfoDTO::Wrapper dto) {
	
	auto jvo = ColumnsInfoJsonVO::createShared();

	//���ݲο�ϵͳ,��Ŀ���ֲ���Ϊ��
	if (!dto->name) {
		jvo->init(dto, RS_PARAMS_INVALID);
		return jvo;
	}

	//id ����Ϊ��
	if (!dto->id) {
		jvo->init(dto, RS_PARAMS_INVALID);
		return jvo;
	}



	////////

	ColumnsInfoService service;
	auto tmp = service.QueryDataById(dto);
	//std::cout<<"the tmp id and name ,select form cms_appinfo : id: " <<tmp->id->c_str()<<"   name: " << tmp->name->c_str() << endl;
	//name�Ƿ����,�������������Ƿ��Ѵ���.nameδ�������ò���
	if (tmp->name != dto->name) {

		//name����
		auto it = service.QueryData(dto);

		//std::cout << "the dto name value is exist : " << it << std::endl;
		
		//��ѯname�Ƿ���� --�������querydata����1,Ȼ�󷵻��쳣
		if (it) {
			jvo->init(dto, RS_PARAMS_INVALID);
			return jvo;
		}

	}

	auto tage = service.updateData(dto);
	if (!tage)
	{
		jvo->fail(dto);
	}
	else {
		jvo->success(dto);

	}

	return jvo;
}


Uint64JsonVO::Wrapper ColumnsInfoController::execRemoveColumns(String id){
	
	auto jvo = Uint64JsonVO::createShared();

	if (!id) {
		jvo->init(UInt64(-1), RS_PARAMS_INVALID);
		return jvo;
	}

	string tmp=id->c_str();
	int i = stoi(tmp);

	ColumnsInfoService service;

	auto tage = service.removeData(i);
	if (!tage)
	{
		jvo->fail(tage);
	}
	else {
		jvo->success(tage);

	}
	return jvo;
	//return {};

}