#pragma once
#pragma once

#pragma once
#ifndef _DATADETAILSDTO_H_
#define _DATADETAILSDTO_H
#include "../../GlobalInclude.h"

#include OATPP_CODEGEN_BEGIN(DTO)


class DataDetailsDTO : public oatpp::DTO {
	DTO_INIT(DataDetailsDTO, DTO);
	//��id
	API_DTO_FIELD_DEFAULT(String, xid, ZH_WORDS_GETTER("data.details.bs"));
	API_DTO_FIELD_DEFAULT(String, xname, ZH_WORDS_GETTER("data.details.name"));
	API_DTO_FIELD_DEFAULT(String, xdescription, ZH_WORDS_GETTER("data.details.ms"));
	API_DTO_FIELD_DEFAULT(String, xalias, ZH_WORDS_GETTER("data.details.xalias"));
	
//details:
//bs: ��ʶ
//name : ����
//ms : ����
//reado : �Ƿ�ֻ��
//ys : ����ʽ
//picture : ͼ��
//dy : ��ӡ
//sc : �ű�
//type : ��ʽ
//attr : ����
};

#include OATPP_CODEGEN_END(DTO)
#endif