/*
 Copyright Zero One Star. All rights reserved.

 @Author: awei
 @Date: 2022/10/25 14:26:52

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
#include "ColumnsInfoDAO.h"
//#include "SampleMapper.h"
#include <sstream>

//定义条件解析宏，减少重复代码
#define SAMPLE_TERAM_PARSE(query, sql) \
SqlParams params; \
sql<<" WHERE 1=1"; \
if (query->name) { \
	sql << " AND `name`=?"; \
	SQLPARAMS_PUSH(params, "s", std::string, query->name.getValue("")); \
} \
if (query->sex) { \
	sql << " AND sex=?"; \
	SQLPARAMS_PUSH(params, "s", std::string, query->sex.getValue("")); \
} \
if (query->age) { \
	sql << " AND age=?"; \
	SQLPARAMS_PUSH(params, "i", int, query->age.getValue(0)); \
}

//uint64_t SampleDAO::count(const SampleQuery::Wrapper& query)
//{
//	stringstream sql;
//	sql << "SELECT COUNT(*) FROM sample";
//	SAMPLE_TERAM_PARSE(query, sql);
//	string sqlStr = sql.str();
//	return sqlSession->executeQueryNumerical(sqlStr, params);
//}
//
//std::list<SampleDO> SampleDAO::selectWithPage(const SampleQuery::Wrapper& query)
//{
//	stringstream sql;
//	sql << "SELECT id,name,sex,age FROM sample";
//	SAMPLE_TERAM_PARSE(query, sql);
//	sql << " LIMIT " << ((query->pageIndex - 1) * query->pageSize) << "," << query->pageSize;
//	SampleMapper mapper;
//	string sqlStr = sql.str();
//	return sqlSession->executeQuery<SampleDO, SampleMapper>(sqlStr, mapper, params);
//}
//
//
//std::list<ColumnsInfoDO> ColumnsInfoDAO::selectByName(const string& name)
//{
//	string sql = "SELECT id,name,sex,age FROM sample WHERE `name` LIKE CONCAT('%',?,'%')";
//	SampleMapper mapper;
//	return sqlSession->executeQuery<SampleDO, SampleMapper>(sql, mapper, "%s", name);
//}

uint64_t ColumnsInfoDAO::count(const ColumnsInfoDO & qObj)
{
	// 使用字符串流构建查询 SQL 语句
	stringstream sql;
	sql << "SELECT COUNT(*) FROM `cms_categoryinfo` WHERE `xcategoryName` = ?";

	// 生成 SQL 字符串
	string sqlStr = sql.str();

	// 执行查询并返回结果
	return sqlSession->executeQueryNumerical(sqlStr, "%s", qObj.getXcategoryName());
}



uint64_t ColumnsInfoDAO::insert(const ColumnsInfoDO& iObj)
{
	//string sql = "INSERT INTO `cms_categoryinfo` (`xcategoryName`, `xcategoryAlias`, `xdescription`,`xcategorySeq`,`xdocumentType`,`xformId`,`xreadFormId`,`xcategoryIcon`) VALUES (?, ?, ?, ?, ?, ?, ?, ?)";
	
	string sql = "INSERT INTO `cms_categoryinfo` (`xid`, `xcategoryName`, `xcategoryAlias`, `xdescription`, `xcategorySeq`, `xdocumentType`, `xformId`, `xreadFormId`, `xcategoryIcon`) VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?)";
	return sqlSession->executeInsert(sql, "%s%s%s%s%s%s%s%s%s",iObj.getXid(), iObj.getXcategoryName(), iObj.getXcategoryAlias(), iObj.getXdescription(), iObj.getXcategorySeq(), iObj.getXdocumentType(), iObj.getXformId(), iObj.getXreadFormId(), iObj.getXcategoryIcon());
}

int ColumnsInfoDAO::update(const ColumnsInfoDO& uObj)
{
	// string sql = "UPDATE `cms_categoryinfo` SET `name`=?, `sex`=?, `age`=? WHERE `id`=?";
	string sql = "UPDATE `cms_categoryinfo` SET `xcategoryName`=?, `xcategoryAlias`=?, `xdescription`=?, `xcategorySeq`=?,`xdocumentType`=?, `xformId`=?, `xreadFormId`=?, `xcategoryIcon`=?  WHERE `xid`=?";
	return sqlSession->executeUpdate(sql, "%s%s%s%s%s%s%s%s%s", uObj.getXcategoryName(),uObj.getXcategoryAlias(),uObj.getXdescription(),uObj.getXcategorySeq(), uObj.getXdocumentType(), uObj.getXformId(), uObj.getXreadFormId(), uObj.getXcategoryIcon(),uObj.getXid());
}

int ColumnsInfoDAO::deleteById(uint64_t id)
{
	string sql = "DELETE FROM `cms_categoryinfo` WHERE `xid`=?";
	return sqlSession->executeUpdate(sql, "%ull", id);
}