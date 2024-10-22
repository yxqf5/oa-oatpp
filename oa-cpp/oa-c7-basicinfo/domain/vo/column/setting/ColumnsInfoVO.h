#pragma once


#ifndef _COLUMNSINFOVO_
#define _COLUMNSINFOVO_

#include "../../../GlobalInclude.h"
//#include "../../../dto/column/setting/ColumnsInfoDTO.h"

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

};


/**
 * ����һ����Ŀ��Ϣ��ʾJsonVO����������Ӧ���ͻ���
 */
class ColumnsInfoJsonVO : public JsonVO<ColumnsInfoDTO::Wrapper>
{
	DTO_INIT(ColumnsInfoJsonVO, JsonVO<ColumnsInfoDTO::Wrapper>);
};


#include OATPP_CODEGEN_END(DTO)

#endif //!_COLUMNSINFOVO1_
