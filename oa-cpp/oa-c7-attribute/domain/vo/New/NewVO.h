#pragma once
#pragma once

#ifndef _NewVO_H_
#define _NewVO_H_

#include "../../GlobalInclude.h"

#include OATPP_CODEGEN_BEGIN(DTO)

class NewVO : public oatpp::DTO
{
    DTO_INIT(NewVO, DTO);
    API_DTO_FIELD_DEFAULT(String, xappIcon, ZH_WORDS_GETTER("newdto.get.logo"));
    API_DTO_FIELD_DEFAULT(String, xappName, ZH_WORDS_GETTER("newdto.get.name"));
    API_DTO_FIELD_DEFAULT(String, xappAlias, ZH_WORDS_GETTER("newdto.get.as"));
    API_DTO_FIELD_DEFAULT(String, xdescription, ZH_WORDS_GETTER("newdto.get.ds"));
    API_DTO_FIELD_DEFAULT(String, xsequence, ZH_WORDS_GETTER("newdto.get.sort1"));
    //API_DTO_FIELD_DEFAULT(String, type, ZH_WORDS_GETTER("newdto.get.type"));
    API_DTO_FIELD_DEFAULT(String, xdocumentType, ZH_WORDS_GETTER("newdto.get.document"));
    //API_DTO_FIELD_DEFAULT(String, type, ZH_WORDS_GETTER("newdto.get.type"));
    API_DTO_FIELD_DEFAULT(String, ignore, ZH_WORDS_GETTER("newdto.get.ignore"));
    API_DTO_FIELD_DEFAULT(String, timed, ZH_WORDS_GETTER("newdto.get.timed"));
    API_DTO_FIELD_DEFAULT(String, xappType, ZH_WORDS_GETTER("newdto.get.type"));
    API_DTO_FIELD_DEFAULT(String, xshowAllDocuments, ZH_WORDS_GETTER("newdto.get.column"));
    API_DTO_FIELD_DEFAULT(String, autosave, ZH_WORDS_GETTER("newdto.get.autosave"));
    API_DTO_FIELD_DEFAULT(String, xdefaultEditForm, ZH_WORDS_GETTER("newdto.get.edit"));
    API_DTO_FIELD_DEFAULT(String, xdefaultReadForm, ZH_WORDS_GETTER("newdto.get.read"));


};

//logo: ��Ŀ��ʶ
//name : ��Ŀ����
//as : ��Ŀ����
//ds : ��Ŀ����
//sort1 : ��Ŀ����
//type : ��Ŀ����
//document : �ĵ�����
//ignore : ���Ա���
//check : ���ݸ�
//timed : ��ʱ��ͼ
//column : ��Ŀ��ͼ
//autosave : �Զ�����
//edit : Ĭ�ϱ༭��
//read : Ĭ���Ķ���
class NewJsonVO : public JsonVO<NewVO::Wrapper>
{
    DTO_INIT(NewJsonVO, JsonVO<NewVO::Wrapper>);

};

#include OATPP_CODEGEN_END(DTO)


#endif