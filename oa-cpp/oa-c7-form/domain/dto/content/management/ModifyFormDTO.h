#pragma once
#ifndef _MODIFYFORM_DTO_
#define _MODIFYFORM_DTO_
#include "../../../GlobalInclude.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/*
	�޸���Ŀ���������
	author��niuniu
*/
class ModifyFormDTO : public oatpp::DTO {
	DTO_INIT(ModifyFormDTO, DTO);
	//��id
    //API_DTO_FIELD_DEFAULT(String, xid, ZH_WORDS_GETTER("content.management.field.xid");
    // ����ʱ�� (�����޸ģ�ͨ���ڴ���ʱ����)
    API_DTO_FIELD_DEFAULT(String, xcreateTime, ZH_WORDS_GETTER("content.management.field.xcreateTime"));
    // ���� (���޸�)
    API_DTO_FIELD_DEFAULT(Int32, xsequence, ZH_WORDS_GETTER("content.management.field.xsequence"));
    // ����ʱ�� (ͨ����ϵͳ���ã�����Ҫ����)
    API_DTO_FIELD_DEFAULT(String, xupdateTime, ZH_WORDS_GETTER("content.management.field.xupdateTime"));
    // �ַ����� (���޸�)
    API_DTO_FIELD_DEFAULT(Int32, xdistributeFactor, ZH_WORDS_GETTER("content.management.field.xdistributeFactor"));
    // ���� (���޸�)
    API_DTO_FIELD_DEFAULT(String, xalias, ZH_WORDS_GETTER("content.management.field.xalias"));
    // Ӧ��ID (���޸�)
    API_DTO_FIELD_DEFAULT(String, xappId, ZH_WORDS_GETTER("content.management.field.xappId"));
    // ���� (���޸�)
    API_DTO_FIELD_DEFAULT(String, xdata, ZH_WORDS_GETTER("content.management.field.xdata"));
    // ���� (���޸�)
    API_DTO_FIELD_DEFAULT(String, xdescription, ZH_WORDS_GETTER("content.management.field.xdescription"));
    // �༭�� (���޸�)
    API_DTO_FIELD_DEFAULT(String, xeditor, ZH_WORDS_GETTER("content.management.field.xeditor"));
    // ���� (���޸�)
    API_DTO_FIELD_DEFAULT(String, xname, ZH_WORDS_GETTER("content.management.field.xname"));
    // ���� (���޸�)
    API_DTO_FIELD_DEFAULT(String, xproperties, ZH_WORDS_GETTER("content.management.field.xproperties"));
};

#include OATPP_CODEGEN_END(DTO)
#endif //! _MODIFYFORM_DTO_
