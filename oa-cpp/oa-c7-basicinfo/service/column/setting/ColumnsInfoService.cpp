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

	ZO_STAR_DOMAIN_DTO_TO_DO(data, dto, Xid, id, XcategoryName, name, XcategoryAlias, othername, Xdescription, description, XcategorySeq, sort, XdocumentType, type, XformId, defaultEditForm, XreadFormId, defaultReadForm, XcategoryIcon, image);

	ColumnsInfoDAO dao;
	
	
	return dao.count(data);

}



// 保存数据
uint64_t ColumnsInfoService::saveData(const ColumnsInfoDTO::Wrapper& dto) {
	
	ColumnsInfoDO data;
	//字段匹配         `xcategoryName`, `xcategoryAlias`, `xdescription`,`xcategorySeq`,`xdocumentType`,`xformId`,`xreadFormId`,`xcategoryIcon`
	ZO_STAR_DOMAIN_DTO_TO_DO(data,dto, Xid,id,XcategoryName,name, XcategoryAlias,othername, Xdescription,description, XcategorySeq,sort, XdocumentType,type ,XformId, defaultEditForm ,XreadFormId,defaultReadForm ,XcategoryIcon, image);

	ColumnsInfoDAO dao;
   auto it=	dao.insert(data);
	//auto it = dao.update(data);
   return it;
}


// 修改数据
bool ColumnsInfoService::updateData(const ColumnsInfoDTO::Wrapper& dto) {
	
	ColumnsInfoDO data;

	//ZO_STAR_DOMAIN_DTO_TO_DO(data, dto, Xid, id,XcategoryName, name, XcategoryAlias, othername, Xdescription, description, XcategorySeq, sort, XdocumentType, type, XformId, defaultEditForm, XreadFormId, defaultReadForm, XcategoryIcon, image);
	ZO_STAR_DOMAIN_DTO_TO_DO(data, dto, Xid, id, XcategoryName, name, XcategoryAlias, othername, Xdescription, description, XcategorySeq, sort, XdocumentType, type, XformId, defaultEditForm, XreadFormId, defaultReadForm, XcategoryIcon, image);


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
