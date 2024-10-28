


#include "stdafx.h"
#include "ColumnsInfoController.h"
#include "../../../service/column/setting/ColumnsInfoService.h"
#include "NacosClient.h"
#include "FastDfsClient.h"




ColumnsInfoJsonVO::Wrapper ColumnsInfoController::execAddColumns(ColumnsInfoDTO::Wrapper dto) {
	/*auto jvo = ColumnsInfoJsonVO::createShared();

	if (!dto->name) {
		jvo->init(UInt64(-1), RS_PARAMS_INVALID);
		return jvo;
	}

	ColumnsInfoService service;

	auto tage = service.saveData(dto);

	if (tage>0) {
		jvo->success(UInt64(tage));
	}
*/


	////如果需要上传头像
	//if (dto->image)
	//{
	//	ZO_CREATE_DFS_CLIENT_URL(dfs, urlPrefix);
	//	std::string fieldName = dfs.uploadFile(dto->image);//////////////
	//	std::cout << "upload fieldname is : " << fieldName << std::endl;
	//}
	ColumnsInfoService service;
	auto jvo = ColumnsInfoJsonVO::createShared();
	auto result = service.updateData(dto);

	jvo->success(dto);


	return jvo;

	return {};
}
ColumnsInfoJsonVO::Wrapper ColumnsInfoController::execModifyColumns(ColumnsInfoDTO::Wrapper dto) {
	/*
	auto jvo = ColumnsInfoJsonVO::createShared();

	if (!dto->id) {
		jvo->init(UInt64(-1),RS_PARAMS_INVALID);
		return jvo;
	}


	ColumnsInfoService service;

	auto tage = service.updateData(dto);
	if (!tage)
	{
		jvo->fail(tage);
	}
	else {
		jvo->success(tage);

	}
	return jvo;*/

	//如果需要上传头像
	//if (dto->image)
	//{
	//	ZO_CREATE_DFS_CLIENT_URL(dfs, urlPrefix);
	//	std::string fieldName = dfs.uploadFile(dto->image);//////////////
	//	std::cout << "upload fieldname is : " << fieldName << std::endl;
	// }

	ColumnsInfoService service;
	auto jvo = ColumnsInfoJsonVO::createShared();
	auto result = service.updateData(dto);

	jvo->success(dto);
	
	//治愈 致郁
	return jvo;

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