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
#include "ColumnsInfoMapper.h"
#include <sstream>

//�������������꣬�����ظ�����
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

std::list<ColumnsInfoDO> ColumnsInfoDAO::QueryById(const ColumnsInfoDO & qObj) {
	
	//string sql="SELECT COUNT(*) FROM `cms_appinfo` WHERE `xid`= ?";
	string sql = "SELECT xid,xappName FROM cms_appinfo WHERE `xid`=? ";
	ColumnsInfoMapper mapper;
	return sqlSession->executeQuery<ColumnsInfoDO,ColumnsInfoMapper>(sql,mapper,"%s",qObj.getXid());
}


uint64_t ColumnsInfoDAO::QueryByName(const ColumnsInfoDO & qObj)
{
	// ʹ���ַ�����������ѯ SQL ���
	stringstream sql;
	sql << "SELECT COUNT(*) FROM `cms_appinfo` WHERE `xappName` = ?";

	// ���� SQL �ַ���
	string sqlStr = sql.str();

	// ִ�в�ѯ�����ؽ��
	return sqlSession->executeQueryNumerical(sqlStr, "%s", qObj.getXappName());
}



uint64_t ColumnsInfoDAO::insert(const ColumnsInfoDO& iObj)
{
	//string sql = "INSERT INTO `cms_appinfo` (`xcategoryName`, `xcategoryAlias`, `xdescription`,`xcategorySeq`,`xdocumentType`,`xformId`,`xreadFormId`,`xcategoryIcon`) VALUES (?, ?, ?, ?, ?, ?, ?, ?)";
	
	
	string sql = "INSERT INTO `cms_appinfo` (`xid`, `xappName`, `xappAlias`, `xdescription`, `xappInfoSeq`, `xappType`, `xdefaultEditForm`, `xdefaultReadForm`, `xappIcon`) VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?)";
	return sqlSession->executeInsert(sql, "%s%s%s%s%s%s%s%s%s",iObj.getXid(), iObj.getXappName(), iObj.getXappAlias(), iObj.getXdescription(), iObj.getXappInfoSeq(), iObj.getXappType(), iObj.getXdefaultEditForm(), iObj.getXdefaultReadForm(), iObj.getXappIcon());
}

int ColumnsInfoDAO::update(const ColumnsInfoDO& uObj)
{
	// string sql = "UPDATE `cms_appinfo` SET `name`=?, `sex`=?, `age`=? WHERE `id`=?";
	string sql = "UPDATE `cms_appinfo` SET  `xappName`=? , `xappAlias`=? , `xdescription`=? , `xappInfoSeq`=? , `xappType`=? , `xdefaultEditForm`=? , `xdefaultReadForm`=? , `xappIcon`=? WHERE `xid`=?";
	return sqlSession->executeUpdate(sql, "%s%s%s%s%s%s%s%s%s", uObj.getXappName(), uObj.getXappAlias(), uObj.getXdescription(), uObj.getXappInfoSeq(), uObj.getXappType(), uObj.getXdefaultEditForm(), uObj.getXdefaultReadForm(), uObj.getXappIcon(), uObj.getXid());
}

int ColumnsInfoDAO::deleteById(uint64_t id)
{
	string sql = "DELETE FROM `cms_appinfo` WHERE `xid`=?";
	return sqlSession->executeUpdate(sql, "%ull", id);
}