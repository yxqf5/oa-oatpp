


#include "stdafx.h"
#include "ColumnsInfoController.h"
#include "../../../service/column/setting/ColumnsInfoService.h"
#include "NacosClient.h"
#include "FastDfsClient.h"
#include<iostream>
//#include <unordered_set>



ColumnsInfoJsonVO::Wrapper ColumnsInfoController::execAddColumns(ColumnsInfoDTO::Wrapper dto) {
	auto jvo = ColumnsInfoJsonVO::createShared();

	//根据参考系统,栏目名字不能为空,不能重复
	if (!dto->name) {
		jvo->init(dto, RS_PARAMS_INVALID);
		return jvo;
	}
	
	//设置插入的xid键值
	//dto->id =dto->name + dto->othername;

	////////
	ColumnsInfoService service;
	auto it = service.QueryData(dto);
	std::cout <<"the it value : " << it << std::endl;
	//查询name是否存在 --如果存在querydata返回1,然后返回异常
	if (it) {
		jvo->init(dto, RS_PARAMS_INVALID);
		return jvo;
	}
	auto tage = service.saveData(dto);
	if (tage>0) {
		jvo->success(dto);
	}
	return jvo;

	////如果需要上传头像
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

	return {};
}


ColumnsInfoJsonVO::Wrapper ColumnsInfoController::execModifyColumns(ColumnsInfoDTO::Wrapper dto) {
	
	auto jvo = ColumnsInfoJsonVO::createShared();

	//根据参考系统,栏目名字不能为空,不能重复
	if (!dto->name) {
		jvo->init(dto, RS_PARAMS_INVALID);
		return jvo;
	}

	//设置插入的xid键值
	//dto->id =dto->name + dto->othername;

	////////
	ColumnsInfoService service;

	auto it = service.QueryData(dto);
	std::cout << "the it value : " << it << std::endl;

	//查询name是否存在 --如果存在querydata返回1,然后返回异常
	if (it) {
		jvo->init(dto, RS_PARAMS_INVALID);
		return jvo;
	}

	auto tage = service.updateData(dto);
	if (!tage)
	{
		jvo->fail(dto);
	}
	else {
		jvo->success(dto);

	}

	////////




	return jvo;

	//如果需要上传头像
	//if (dto->image)
	//{
	//	ZO_CREATE_DFS_CLIENT_URL(dfs, urlPrefix);
	//	std::string fieldName = dfs.uploadFile(dto->image);//////////////
	//	std::cout << "upload fieldname is : " << fieldName << std::endl;
	// }

	//ColumnsInfoService service;
	//auto jvo = ColumnsInfoJsonVO::createShared();
	//auto result = service.updateData(dto);

	//jvo->success(dto);
	//

	//return jvo;

	//return {};
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