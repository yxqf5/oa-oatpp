#pragma once


#ifndef _COLUMNSINFO_VO_
#define _COLUMNSINFO_VO_

#include "../../../GlobalInclude.h"
#include "../../../dto/column/setting/ColumnsInfoDTO.h"

#include OATPP_CODEGEN_BEGIN(DTO)

class ColumnsInfoVO : public oatpp::DTO
{
	DTO_INIT(ColumnsInfoVO, DTO);
	// ��ĿΨһ��ֵ
	API_DTO_FIELD(String, id, ZH_WORDS_GETTER("column.field.id"), true, "123123");
	// ��Ŀ����
	API_DTO_FIELD(String, name, ZH_WORDS_GETTER("column.field.name"), true, "yxqf");
	// ��Ŀ����
	API_DTO_FIELD(String, othername, ZH_WORDS_GETTER("column.field.other-name"), false, "234234");
	// ��Ŀ����
	API_DTO_FIELD(String, description, ZH_WORDS_GETTER("column.field.description"), false, "qwerqwer");
	// ��Ŀ����
	API_DTO_FIELD(String, sort, ZH_WORDS_GETTER("column.field.sort"), false, "asdf");
	// ��Ŀ����
	API_DTO_FIELD(String, type, ZH_WORDS_GETTER("column.field.type"), false, "zxcv");
	// Ĭ�ϱ༭��
	API_DTO_FIELD(String, defaultEditForm, ZH_WORDS_GETTER("column.field.default-edit-form"), false, "azxcv");
	// Ĭ���Ķ���
	API_DTO_FIELD(String, defaultReadForm, ZH_WORDS_GETTER("column.field.default-read-form"), false, "aytui");
	// ��Ŀͼ��
	API_DTO_FIELD(String, image, ZH_WORDS_GETTER("column.field.image"), false, "image");

	//// ����ʱ��
	//API_DTO_FIELD(String, xcreateTime, ZH_WORDS_GETTER("cms_appinfo.field.xcreate-time"), true, "2024-01-01T00:00:00Z");
	//// ������ʾ״̬������
	//API_DTO_FIELD(String, xsequence, ZH_WORDS_GETTER("cms_appinfo.field.xsequence"), false, "1.0.0");
	//// ������ʱ��
	//API_DTO_FIELD(String, xupdateTime, ZH_WORDS_GETTER("cms_appinfo.field.xupdate-time"), false, "2024-01-01T00:00:00Z");
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

};


/**
 * ����һ����Ŀ��Ϣ��ʾJsonVO����������Ӧ���ͻ���
 */
class ColumnsInfoJsonVO : public JsonVO<ColumnsInfoDTO::Wrapper>
{
	DTO_INIT(ColumnsInfoJsonVO, JsonVO<ColumnsInfoDTO::Wrapper>);
};


#include OATPP_CODEGEN_END(DTO)

#endif //!_COLUMNSINFO_VO_
