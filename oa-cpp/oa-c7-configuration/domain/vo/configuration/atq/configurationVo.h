#pragma once
#ifndef  _CONFIGURATIONVO
#define _CONFIGURATIONVO
#include "../../../GlobalInclude.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * ʾ���������
 */
class configurationVo : public oatpp::DTO
{
	DTO_INIT(configurationVo, DTO);
	//ѡ������
	API_DTO_FIELD(String, xcreatorUnitName, ZH_WORDS_GETTER("configuration.atq.choose.summary"), true, "configuration.atq.choose.edit");
	//�����ʶ
	API_DTO_FIELD(String, xappId, ZH_WORDS_GETTER("configuration.atq.basic.logo"), true, "abababababab");
	//�������
	API_DTO_FIELD(String, xalias, ZH_WORDS_GETTER("configuration.atq.basic.name"), true, "newfile");
	//�ĵ�����
	API_DTO_FIELD(String, xdocumentType, ZH_WORDS_GETTER("configuration.atq.basic.type"), true, "Information");
	//����ʱ�Ƿ�����Ϣ
	API_DTO_FIELD(String, xsendNotify, ZH_WORDS_GETTER("configuration.atq.basic.auto"), true, "yes");
	//ʹ������
	API_DTO_FIELD(String, process, ZH_WORDS_GETTER("configuration.atq.process"), true, "from 1 to 2");
	//�ɼ���Χ
	API_DTO_FIELD(String, range, ZH_WORDS_GETTER("configuration.atq.range"), true, "everyone");
	//������
	API_DTO_FIELD(String, xcreatorPerson, ZH_WORDS_GETTER("configuration.atq.publish"), true, "xiaohe");
	//������
	API_DTO_FIELD(String, xmanagePerson, ZH_WORDS_GETTER("configuration.atq.manage"), true, "xadmin");
};

/**
 * ʾ����ʾJsonVO��������Ӧ���ͻ��˵�Json����
 */
class configurationJsonVo : public JsonVO<configurationVo::Wrapper> {
	DTO_INIT(configurationJsonVo, JsonVO<configurationVo::Wrapper>);
};
#include OATPP_CODEGEN_END(DTO)
#endif // !_ CONFIGURATIONDTO_H_