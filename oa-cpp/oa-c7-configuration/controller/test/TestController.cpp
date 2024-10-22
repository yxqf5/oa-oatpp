#include "stdafx.h"
#include "TestController.h"
#include<iostream>

StringJsonVO::Wrapper TestController::executeQueryTest(const PageQuery::Wrapper& condition)
{
    //打印前端传来数据
    std::cout << condition->pageIndex.getValue({}) << "," << condition->pageSize.getValue({}) << std::endl;
    //响应数据给前端
    auto res = StringJsonVO::createShared();
    res->success(String("test querry"));
    return res;

}