#include "stdafx.h"
#include "TestController.h"



StringJsonVO::Wrapper TestController::executeQueryTest(const PageQuery::Wrapper& condtion){
	//打印前端返回的数据
	std::cout << condtion->pageIndex.getValue({}) <<" , " << condtion->pageSize.getValue({}) << std::endl;

	auto res =StringJsonVO::createShared();
	res->success(String("test query"));
	return res;
}