#include "ColumnsInfoService.h"
#include "../../../dao/column/setting/ColumnsInfoDAO.h"

// 分页查询所有数据
//SamplePageDTO::Wrapper ColumnsInfoService::listAll(const SampleQuery::Wrapper& query) {
//
//}
// 
// 

bool ColumnsInfoService::QueryData(const ColumnsInfoDTO::Wrapper& dto) {
	ColumnsInfoDO data;

	//ZO_STAR_DOMAIN_DTO_TO_DO(data, dto, Xid, id, XcategoryName, name, XcategoryAlias, othername, Xdescription, description, XcategorySeq, sort, XdocumentType, type, XformId, defaultEditForm, XreadFormId, defaultReadForm, XcategoryIcon, image);
	ZO_STAR_DOMAIN_DTO_TO_DO(data, dto, Xid, id, XappName, name, XappAlias, othername, Xdescription, description, XappInfoSeq, sort, XappType, type, XdefaultEditForm, defaultEditForm, XdefaultReadForm, defaultReadForm, XappIcon, image);

	ColumnsInfoDAO dao;
	
	
	return dao.QueryByName(data);

}


ColumnsInfoDTO::Wrapper ColumnsInfoService::QueryDataById(const ColumnsInfoDTO::Wrapper& dto) {
	ColumnsInfoDO data;

	//ZO_STAR_DOMAIN_DTO_TO_DO(data, dto, Xid, id, XcategoryName, name, XcategoryAlias, othername, Xdescription, description, XcategorySeq, sort, XdocumentType, type, XformId, defaultEditForm, XreadFormId, defaultReadForm, XcategoryIcon, image);
	ZO_STAR_DOMAIN_DTO_TO_DO(data, dto, Xid, id, XappName, name, XappAlias, othername, Xdescription, description, XappInfoSeq, sort, XappType, type, XdefaultEditForm, defaultEditForm, XdefaultReadForm, defaultReadForm, XappIcon, image);

	ColumnsInfoDAO dao;

	auto res = ColumnsInfoDTO::createShared();
	ColumnsInfoDO it=*dao.QueryById(data).begin();
	std::cout <<"it.getXid()= " << it.getXid() << "   it.getXappName()=" << it.getXappName() << std::endl;

	//for(auto i: it){
	//}
	ZO_STAR_DOMAIN_FILED_DO_TO_DTO(res,it,id,Xid,name,XappName);
	res->name = it.getXappName();


return res;

}


// 保存数据
uint64_t ColumnsInfoService::saveData(const ColumnsInfoDTO::Wrapper& dto) {
	
	ColumnsInfoDO data;
	//字段匹配         `XcategoryName`, `XcategoryAlias`, `Xdescription`,`XcategorySeq`,`XdocumentType`,`XformId`,`XreadFormId`,`XcategoryIcon`
	ZO_STAR_DOMAIN_DTO_TO_DO(data,dto, Xid,id,XappName,name, XappAlias,othername, Xdescription,description, XappInfoSeq,sort, XappType,type ,XdefaultEditForm, defaultEditForm ,XdefaultReadForm,defaultReadForm , XappIcon, image);
	string sql = "INSERT INTO `cms_appinfo` (`Xid`, ``, ``, ``, ``, ``, ``, ``, ``) VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?)";
	ColumnsInfoDAO dao;
   auto it=	dao.insert(data);
	//auto it = dao.update(data);
   return it;
}


// 修改数据
bool ColumnsInfoService::updateData(const ColumnsInfoDTO::Wrapper& dto) {
	
	ColumnsInfoDO data;

	//ZO_STAR_DOMAIN_DTO_TO_DO(data, dto, Xid, id,XcategoryName, name, XcategoryAlias, othername, Xdescription, description, XcategorySeq, sort, XdocumentType, type, XformId, defaultEditForm, XreadFormId, defaultReadForm, XcategoryIcon, image);
	//ZO_STAR_DOMAIN_DTO_TO_DO(data, dto, Xid, id, XcategoryName, name, XcategoryAlias, othername, Xdescription, description, XcategorySeq, sort, XdocumentType, type, XformId, defaultEditForm, XreadFormId, defaultReadForm, XcategoryIcon, image);
	ZO_STAR_DOMAIN_DTO_TO_DO(data, dto, Xid, id, XappName, name, XappAlias, othername, Xdescription, description, XappInfoSeq, sort, XappType, type, XdefaultEditForm, defaultEditForm, XdefaultReadForm, defaultReadForm, XappIcon, image);



	ColumnsInfoDAO dao;
	return dao.update(data);	
}

// 通过ID删除数据
bool ColumnsInfoService::removeData(uint64_t id) {

	ColumnsInfoDO data;

	//ZO_STAR_DOMAIN_DTO_TO_DO(data,dto,Name,name);
	
	ColumnsInfoDAO dao;


	return dao.deleteById(id);


}
