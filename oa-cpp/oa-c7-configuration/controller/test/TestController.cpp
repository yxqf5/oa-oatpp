#include "stdafx.h"
#include "TestController.h"
#include<iostream>

StringJsonVO::Wrapper TestController::executeQueryTest(const PageQuery::Wrapper& condition)
{
    //��ӡǰ�˴�������
    std::cout << condition->pageIndex.getValue({}) << "," << condition->pageSize.getValue({}) << std::endl;
    //��Ӧ���ݸ�ǰ��
    auto res = StringJsonVO::createShared();
    res->success(String("test querry"));
    return res;

}