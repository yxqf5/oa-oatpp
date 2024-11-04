#pragma once


/*
Copyright Zero One Star. All rights reserved.

@Author: awei
@Date: $DATE$ $HOUR$:$MINUTE$:$SECOND$

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
#ifndef _COLUMNSINFODTO_
#define _COLUMNSINFODTO_

#include "../../../GlobalInclude.h"

#include OATPP_CODEGEN_BEGIN(DTO)

class ColumnsInfoDTO : public oatpp::DTO
{
	DTO_INIT(ColumnsInfoDTO, DTO);
	// ��ĿΨһ��ֵ
	API_DTO_FIELD(String, id, ZH_WORDS_GETTER("column.field.id"),true,"123123");
	// ��Ŀ����
	API_DTO_FIELD(String, name, ZH_WORDS_GETTER("column.field.name"),true,"yxqf");
	// ��Ŀ����
	API_DTO_FIELD(String, othername, ZH_WORDS_GETTER("column.field.other-name"),false,"234234");
	// ��Ŀ����
	API_DTO_FIELD(String, description, ZH_WORDS_GETTER("column.field.description"),false,"qwerqwer");
	// ��Ŀ����
	API_DTO_FIELD(String, sort, ZH_WORDS_GETTER("column.field.sort"),false,"asdf");
	// ��Ŀ����
	API_DTO_FIELD(String, type, ZH_WORDS_GETTER("column.field.type"),false,"zxcv");
	// Ĭ�ϱ༭��
	API_DTO_FIELD(String, defaultEditForm, ZH_WORDS_GETTER("column.field.default-edit-form"),false,"azxcv");
	// Ĭ���Ķ���
	API_DTO_FIELD(String, defaultReadForm, ZH_WORDS_GETTER("column.field.default-read-form"),false,"aytui");
	// ��Ŀͼ��
	API_DTO_FIELD(String, image, ZH_WORDS_GETTER("column.field.image"),false,"image");



	////Time
	//// ����ʱ��
	//API_DTO_FIELD(String, xcreateTime, ZH_WORDS_GETTER("cms_appinfo.field.xcreate-time"), true, "2024-01-01T00:00:00Z");
	//// ������ʱ��
	//API_DTO_FIELD(String, xupdateTime, ZH_WORDS_GETTER("cms_appinfo.field.xupdate-time"), false, "2024-01-01T00:00:00Z");


	//// ������ʾ״̬������
	//API_DTO_FIELD(String, xsequence, ZH_WORDS_GETTER("cms_appinfo.field.xsequence"), false, "1.0.0");
	//// �ַ�����
	//API_DTO_FIELD(Int32, xdistributeFactor, ZH_WORDS_GETTER("cms_appinfo.field.xdistribute-factor"), false, 0);
	//// �Ƿ����������˷�������
	//API_DTO_FIELD(Boolean, xallPeoplePublish, ZH_WORDS_GETTER("cms_appinfo.field.xall-people-publish"), false, false);
	//// �Ƿ����������˲鿴����
	//API_DTO_FIELD(Boolean, xallPeopleView, ZH_WORDS_GETTER("cms_appinfo.field.xall-people-view"), false, false);
	//// �Ƿ���ʾ�����ĵ�
	//API_DTO_FIELD(Boolean, xshowAllDocuments, ZH_WORDS_GETTER("cms_appinfo.field.xshow-all-documents"), false, false);
	//// �Ƿ�������������
	//API_DTO_FIELD(Boolean, xanonymousAble, ZH_WORDS_GETTER("cms_appinfo.field.xanonymous-able"), false, false);
	//// Ӧ�ó���ı�ע
	//API_DTO_FIELD(String, xappMemo, ZH_WORDS_GETTER("cms_appinfo.field.xapp-memo"), false, "Ӧ�ñ�ע");
	//// �����ߵ���ݱ�ʶ
	//API_DTO_FIELD(String, xcreatorIdentity, ZH_WORDS_GETTER("cms_appinfo.field.xcreator-identity"), false, "�û�ID");
	//// �����ߵ�����
	//API_DTO_FIELD(String, xcreatorPerson, ZH_WORDS_GETTER("cms_appinfo.field.xcreator-person"), false, "����������");
	//// ���������ڵĶ�����λ����
	//API_DTO_FIELD(String, xcreatorTopUnitName, ZH_WORDS_GETTER("cms_appinfo.field.xcreator-top-unit-name"), false, "������λ");
	//// ���������ڵĵ�λ����
	//API_DTO_FIELD(String, xcreatorUnitName, ZH_WORDS_GETTER("cms_appinfo.field.xcreator-unit-name"), false, "��λ����");	
	//// �ĵ�����
	//API_DTO_FIELD(String, xdocumentType, ZH_WORDS_GETTER("cms_appinfo.field.xdocument-type"), false, "�ĵ�����");
	//// Ӧ�ó���ͼ�����ɫ
	//API_DTO_FIELD(String, xiconColor, ZH_WORDS_GETTER("cms_appinfo.field.xicon-color"), false, "ͼ����ɫ");
	//// �Ƿ���֪ͨ
	//API_DTO_FIELD(Boolean, xsendNotify, ZH_WORDS_GETTER("cms_appinfo.field.xsend-notify"), false, false);


	//xid
	//API_DTO_FIELD(String, xid, ZH_WORDS_GETTER("cms_appinfo.field.xid"), true, "app123");
	// Ӧ�ó���ı���
	//API_DTO_FIELD(String, xappAlias, ZH_WORDS_GETTER("cms_appinfo.field.xapp-alias"), false, "Ӧ�ñ���");
	// Ӧ�ó����ͼ��
	//API_DTO_FIELD(String, xappIcon, ZH_WORDS_GETTER("cms_appinfo.field.xapp-icon"), false, "ͼ������");
	// Ӧ�ó������Ϣ����
	//API_DTO_FIELD(String, xappInfoSeq, ZH_WORDS_GETTER("cms_appinfo.field.xapp-info-seq"), false, "��Ϣ����");
	// Ӧ�ó��������
	//API_DTO_FIELD(String, xappName, ZH_WORDS_GETTER("cms_appinfo.field.xapp-name"), true, "�ҵ�Ӧ��");
	// Ӧ�ó��������
	//API_DTO_FIELD(String, xappType, ZH_WORDS_GETTER("cms_appinfo.field.xapp-type"), false, "WebӦ��");
	// Ĭ�ϵı༭����ʶ
	//API_DTO_FIELD(String, xdefaultEditForm, ZH_WORDS_GETTER("cms_appinfo.field.xdefault-edit-form"), false, "�༭����ʶ");
	// Ĭ�ϵ��Ķ�����ʶ
	//API_DTO_FIELD(String, xdefaultReadForm, ZH_WORDS_GETTER("cms_appinfo.field.xdefault-read-form"), false, "�Ķ�����ʶ");
	// Ӧ�ó����������Ϣ
	//API_DTO_FIELD(String, xdescription, ZH_WORDS_GETTER("cms_appinfo.field.xdescription"), false, "Ӧ������");

};

#include OATPP_CODEGEN_END(DTO)

#endif // !_COLUMNSINFODTO_
