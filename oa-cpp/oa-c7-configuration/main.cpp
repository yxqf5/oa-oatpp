/*
 Copyright Zero One Star. All rights reserved.

 @Author: awei
 @Date: 2022/10/24 23:02:34

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
#include "stdafx.h"
#include "StringUtil.h"
#include "ServerInfo.h"
#include "HttpServer.h"
#include "controller/Router.h"
#include "controller/OtherComponent.hpp"
#include "DbInit.h"

#ifdef LINUX
#include "NacosClient.h"
#endif
#include"FastDfsClient.h"
#include"ExcelComponent.h"
#include"RocketClient.h"
#include"MongoClient.h"
#include"RedisClient.h"
#include"PdfComponent.h"
/**
 * 解析启动参数
 * 注意：
 * 参数中数据需要满足一定的格式，如：sp=8090、sn=feign-cpp-sample
 * 前缀与真实值之间使用=分隔
 */
bool getStartArg(int argc, char* argv[]) {
	// 服务器端口
	std::string serverPort = "8090";
	// 数据库连接信息
	std::string dbUsername = "root";
	std::string dbPassword = "123456";
	std::string dbName = "test";
	std::string dbHost = "192.168.137.130";
	int dbPort = 3306;
	int dbMax = 5;
#ifdef LINUX
	// Nacos配置参数
	std::string nacosAddr = "192.168.137.130:8848";
	std::string nacosNs = "4833404f-4b82-462e-889a-3c508160c6b4";
	std::string serviceName = "";
	std::string regIp = "";
#endif

	// 开始解析
	int currIndex = 1;
	bool isSetDb = false;
	while (currIndex < argc)
	{
		// 拆分字符串
		auto args = StringUtil::split(argv[currIndex], "=");
		// 判断参数是否合法
		if (args.size() != 2)
		{
			cout << "arg: " << argv[currIndex] << ", format error." << endl;
			exit(1);
		}

		// 根据参数前缀对不同属性赋值
		std::string prefix = args[0];
		std::string val = args[1];
		if (prefix == "sp") serverPort = val;
		else if (prefix == "du")
		{
			isSetDb = true;
			dbUsername = val;
		}
		else if (prefix == "dp")
		{
			isSetDb = true;
			dbPassword = val;
		}
		else if (prefix == "dn")
		{
			isSetDb = true;
			dbName = val;
		}
		else if (prefix == "dh")
		{
			isSetDb = true;
			dbHost = val;
		}
		else if (prefix == "dP")
		{
			isSetDb = true;
			dbPort = atoi(val.c_str());
		}
		else if (prefix == "dm") dbMax = atoi(val.c_str());
#ifdef LINUX
		else if (prefix == "na") nacosAddr = val;
		else if (prefix == "ns") nacosNs = val;
		else if (prefix == "sn") serviceName = val;
		else if (prefix == "ip") regIp = val;
#endif
		// 更新索引
		currIndex++;
	}

	// 记录服务器配置到内存中方便使用
	ServerInfo::getInstance().setServerPort(serverPort);
	ServerInfo::getInstance().setDbUsername(dbUsername);
	ServerInfo::getInstance().setDbPassword(dbPassword);
	ServerInfo::getInstance().setDbName(dbName);
	ServerInfo::getInstance().setDbHost(dbHost);
	ServerInfo::getInstance().setDbPort(dbPort);
	ServerInfo::getInstance().setDbMax(dbMax);
#ifdef LINUX
	ServerInfo::getInstance().setNacosAddr(nacosAddr);
	ServerInfo::getInstance().setNacosNs(nacosNs);
	ServerInfo::getInstance().setRegIp(regIp);
	ServerInfo::getInstance().setServiceName(serviceName);
#endif
	return isSetDb;
}
//测试声明区域
///////////////////////////////////////////////////////////////////////////////////
//测试fastdfs
void testDfs();
//测试使用Execl
void testExecl();
//测试使用Mq
void testMq();
//测试mongodb
void testMongo();
//测试redis
void testRedis();
//测试PDF报表
void testPDF();
///////////////////////////////////////////////////////////////////////////////////
int main(int argc, char* argv[]) {
	// 服务器参数初始化
	bool isSetDb = getStartArg(argc, argv);
//测试调用区域
///////////////////////////////////////////////////////////////////////////////////

//testDfs();
//testExecl();
//testMq();
//testMongo();
//testRedis();
	testPDF();
///////////////////////////////////////////////////////////////////////////////////
#ifdef LINUX
	// 创建Nacos客户端对象
	NacosClient nacosClient(
		ServerInfo::getInstance().getNacosAddr(),
		ServerInfo::getInstance().getNacosNs());
	// 从Nacos配置中心中获取数据库配置
	if (!isSetDb)
	{
		YAML::Node node = nacosClient.getConfig("data-source.yaml");
		YamlHelper yaml;
		std::string dbUrl = yaml.getString(&node, "spring.datasource.url");
		if (dbUrl != "")
		{
			int dbPort = 0;
			std::string dbHost = "";
			std::string dbName = "";
			// 解析数据库连接字符串
			yaml.parseDbConnUrl(dbUrl, &dbHost, &dbPort, &dbName);
			// 获取数据库用户名和密码
			std::string dbUsername = yaml.getString(&node, "spring.datasource.username");
			std::string dbPassword = yaml.getString(&node, "spring.datasource.password");
			// 重新修改缓存中的数据
			ServerInfo::getInstance().setDbUsername(dbUsername);
			ServerInfo::getInstance().setDbPassword(dbPassword);
			ServerInfo::getInstance().setDbName(dbName);
			ServerInfo::getInstance().setDbHost(dbHost);
			ServerInfo::getInstance().setDbPort(dbPort);
		}
	}

	// 注册服务
	if (!ServerInfo::getInstance().getServiceName().empty() && !ServerInfo::getInstance().getRegIp().empty())
	{
		nacosClient.registerInstance(
			ServerInfo::getInstance().getRegIp(),
			atoi(ServerInfo::getInstance().getServerPort().c_str()),
			ServerInfo::getInstance().getServiceName());
	}
#endif

#ifndef _RELEASE_DOC_
	// 初始数据库连接
	bool initConnPool = DbInit::initDbPool(DBConfig(
		ServerInfo::getInstance().getDbUsername(),
		ServerInfo::getInstance().getDbPassword(),
		ServerInfo::getInstance().getDbName(),
		ServerInfo::getInstance().getDbHost(),
		ServerInfo::getInstance().getDbPort(),
		ServerInfo::getInstance().getDbMax()));
	if (!initConnPool) return -1;
#endif

	// 启动HTTP服务器
	HttpServer::startServer(ServerInfo::getInstance().getServerPort(),
		[=](Endpoints* doc, HttpRouter* router) {
			Router(doc, router).initRouter();
		},
		[](std::shared_ptr<AbstractComponentReg>* o) {
			*o = std::make_shared<OtherComponent>();
		});

#ifndef _RELEASE_DOC_
	// 释放数据库连接
	DbInit::releasePool();
#endif

#ifdef LINUX
	// 反注册服务
	if (!ServerInfo::getInstance().getServiceName().empty() && !ServerInfo::getInstance().getRegIp().empty())
	{
		nacosClient.deregisterInstance(
			ServerInfo::getInstance().getRegIp(),
			atoi(ServerInfo::getInstance().getServerPort().c_str()),
			ServerInfo::getInstance().getServiceName());
	}
#endif
	return 0;
}
//测试定义区域
///////////////////////////////////////////////////////////////////////////////////

void testDfs() {
	FastDfsClient dfs("192.168.137.130");
	std::string field=dfs.uploadFile("C:\\Users\\heyiting\\Pictures\\Screenshots\\cutecat.png");
	std::cout << field << std::endl;
	bool isDel=dfs.deleteFile("group1/M00/00/00/oYYBAGcQan6ARPlaAAuM_941BBU030.png");
	if (isDel) {
		std::cout << "删除成功" << std::endl;
	}
	else {
		std::cout << "删除失败" << std::endl;
	}
}

void testExecl() {
	//创建Excel文件
	ExcelComponent excel;
	std::vector<std::vector<std::string>>data;
	data.push_back({});
	data[0].emplace_back("id");
	data[0].emplace_back("age");
	data.push_back({});
	data[1].emplace_back("1");
	data[1].emplace_back("18");
	data.push_back({});
	data[2].emplace_back("2");
	data[2].emplace_back("11");
	excel.writeVectorToFile("./public/execl/1.xlsx", "test", data);

	//传递到fastDfs
	auto buff = excel.writeVectorToBuff("test", data);
	FastDfsClient dfs("192.168.137.130");
	auto filed=dfs.uploadFile(reinterpret_cast<const char*>(buff.data()), buff.size(), "xlsx");
	std::cout << filed << std::endl;

	//读取excel文件
	data = ExcelComponent::readIntoVector("./public/execl/1.xlsx", "test");
	for (size_t i = 0; i < data.size(); i++) {
		auto one = data[i];
		for (size_t j = 0; j < one.size(); j++) {
			std::cout << one[j] << " ";
		}
		std::cout << std::endl;
	}
}

void testMq() {
	RocketClient rc("192.168.137.130:9876");
	rc.productMsgSync("tq", "wo shi xiao xi ti");
}

void testMongo() {
	MongoClient c("mongodb://awei:123456@192.168.137.130:27017/firstDb");
	using namespace bsoncxx::builder::basic;
	c.addOne("tes", make_document(kvp("name", "Mongo's Burgers")));
	c.addOne("tes", make_document(kvp("age", "19")));
}

void testRedis() {
	RedisClient r("192.168.137.130", 6379);
	auto count=r.execute<long long>([](Redis* rc) {
		return rc->rpush("list", { "a", "b", "c" });
		});
	std::cout << count << std::endl;
}

void testPDF() {
	PdfComponent pdf;
	//创建一个页面
	HPDF_Page newPage = pdf.getNewPage();
	//设置页面字体
	HPDF_Page_SetFontAndSize(newPage, pdf.getCnSFont("SimSun"), 20);
	//绘制一点文字
	pdf.drawText("Hello world", 10, 10);
	pdf.drawTextCenter("Good Luck To You");
	//导出到本地
	pdf.saveDocToFile("./public/pdf/1.pdf");
}
///////////////////////////////////////////////////////////////////////////////////