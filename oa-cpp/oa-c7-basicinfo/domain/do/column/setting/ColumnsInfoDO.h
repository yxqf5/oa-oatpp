#pragma once
#pragma once
/*
 Copyright Zero One Star. All rights reserved.

 @Author: awei
 @Date: 2022/10/25 11:52:32

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
#ifndef _ColumnsInfo_DO_
#define _ColumnsInfo_DO_
#include "../../DoInclude.h"

/**
 * ʾ�����ݿ�ʵ����
 */

//class SampleDO
//{
//	// ���
//	CC_SYNTHESIZE(uint64_t, id, Id);
//	// ����
//	CC_SYNTHESIZE(string, name, Name);
//	// �Ա�
//	CC_SYNTHESIZE(string, sex, Sex);
//	// ����
//	CC_SYNTHESIZE(int, age, Age);
//public:
//	SampleDO() {
//		id = 0;
//		name = "";
//		sex = "";
//		age = -1;
//	}
//};
//

/**
 * CMS Ӧ����Ϣ���ݿ�ʵ����
 */
class ColumnsInfoDO
{
    // ���� ID
    CC_SYNTHESIZE(string, xid, Xid);
    // ����ʱ��
    CC_SYNTHESIZE(string, xcreateTime, XcreateTime);
    // ����
    CC_SYNTHESIZE(string, xsequence, Xsequence);
    // ����ʱ��
    CC_SYNTHESIZE(string, xupdateTime, XupdateTime);
    // �ַ�����
    CC_SYNTHESIZE(int, xdistributeFactor, XdistributeFactor);
    // �����˷���Ȩ��
    CC_SYNTHESIZE(bool, xallPeoplePublish, XallPeoplePublish);
    // �����˲鿴Ȩ��
    CC_SYNTHESIZE(bool, xallPeopleView, XallPeopleView);
    // ��ʾ�����ĵ�
    CC_SYNTHESIZE(bool, xshowAllDocuments, XshowAllDocuments);
    // ��������
    CC_SYNTHESIZE(bool, xanonymousAble, XanonymousAble);
    // Ӧ�ñ���
    CC_SYNTHESIZE(string, xappAlias, XappAlias);
    // Ӧ��ͼ��
    CC_SYNTHESIZE(string, xappIcon, XappIcon);
    // Ӧ����Ϣ����
    CC_SYNTHESIZE(string, xappInfoSeq, XappInfoSeq);
    // ��ע
    CC_SYNTHESIZE(string, xappMemo, XappMemo);
    // Ӧ������
    CC_SYNTHESIZE(string, xappName, XappName);
    // Ӧ������
    CC_SYNTHESIZE(string, xappType, XappType);
    // ���������
    CC_SYNTHESIZE(string, xcreatorIdentity, XcreatorIdentity);
    // ������
    CC_SYNTHESIZE(string, xcreatorPerson, XcreatorPerson);
    // �����߶�����λ����
    CC_SYNTHESIZE(string, xcreatorTopUnitName, XcreatorTopUnitName);
    // �����ߵ�λ����
    CC_SYNTHESIZE(string, xcreatorUnitName, XcreatorUnitName);
    // Ĭ�ϱ༭��
    CC_SYNTHESIZE(string, xdefaultEditForm, XdefaultEditForm);
    // Ĭ���Ķ���
    CC_SYNTHESIZE(string, xdefaultReadForm, XdefaultReadForm);
    // ����
    CC_SYNTHESIZE(string, xdescription, Xdescription);
    // �ĵ�����
    CC_SYNTHESIZE(string, xdocumentType, XdocumentType);
    // ͼ����ɫ
    CC_SYNTHESIZE(string, xiconColor, XiconColor);
    // ����֪ͨ
    CC_SYNTHESIZE(bool, xsendNotify, XsendNotify);

public:
    ColumnsInfoDO() {
        xid = "";
        xcreateTime = "";
        xsequence = "";
        xupdateTime = "";
        xdistributeFactor = 0;
        xallPeoplePublish = false;
        xallPeopleView = false;
        xshowAllDocuments = false;
        xanonymousAble = false;
        xappAlias = "";
        xappIcon = "";
        xappInfoSeq = "";
        xappMemo = "";
        xappName = "";
        xappType = "";
        xcreatorIdentity = "";
        xcreatorPerson = "";
        xcreatorTopUnitName = "";
        xcreatorUnitName = "";
        xdefaultEditForm = "";
        xdefaultReadForm = "";
        xdescription = "";
        xdocumentType = "";
        xiconColor = "";
        xsendNotify = false;
    }
};


//class ColumnsInfoDO
//{
//    // ����
//    CC_SYNTHESIZE(string, xid, Xid);
//    // ����ʱ��
//    CC_SYNTHESIZE(string, xcreateTime, XcreateTime);
//    // ����
//    CC_SYNTHESIZE(string, xsequence, Xsequence);
//    // ����ʱ��
//    CC_SYNTHESIZE(string, xupdateTime, XupdateTime);
//    // �ַ�����
//    CC_SYNTHESIZE(int, xdistributeFactor, XdistributeFactor);
//    // �Ƿ����������˷���
//    CC_SYNTHESIZE(bool, xallPeoplePublish, XallPeoplePublish);
//    // �Ƿ����������˲鿴
//    CC_SYNTHESIZE(bool, xallPeopleView, XallPeopleView);
//    // �Ƿ�������������
//    CC_SYNTHESIZE(bool, xanonymousAble, XanonymousAble);
//    // Ӧ�� ID
//    CC_SYNTHESIZE(string, xappId, XappId);
//    // Ӧ������
//    CC_SYNTHESIZE(string, xappName, XappName);
//    // �Ƿ�������˷���֪ͨ
//    CC_SYNTHESIZE(bool, xblankToAllNotify, XblankToAllNotify);
//    // ��Ŀ����
//    CC_SYNTHESIZE(string, xcategoryAlias, XcategoryAlias);
//    // ��Ŀͼ��
//    CC_SYNTHESIZE(string, xcategoryIcon, XcategoryIcon);
//    // ��Ŀ��ע
//    CC_SYNTHESIZE(string, xcategoryMemo, XcategoryMemo);
//    // ��Ŀ����
//    CC_SYNTHESIZE(string, xcategoryName, XcategoryName);
//    // ��Ŀ����
//    CC_SYNTHESIZE(string, xcategorySeq, XcategorySeq);
//    // ���������
//    CC_SYNTHESIZE(string, xcreatorIdentity, XcreatorIdentity);
//    // ������
//    CC_SYNTHESIZE(string, xcreatorPerson, XcreatorPerson);
//    // �����߶�����λ
//    CC_SYNTHESIZE(string, xcreatorTopUnitName, XcreatorTopUnitName);
//    // �����ߵ�λ
//    CC_SYNTHESIZE(string, xcreatorUnitName, XcreatorUnitName);
//    // Ĭ����ͼ ID
//    CC_SYNTHESIZE(string, xdefaultViewId, XdefaultViewId);
//    // Ĭ����ͼ����
//    CC_SYNTHESIZE(string, xdefaultViewName, XdefaultViewName);
//    // ����
//    CC_SYNTHESIZE(string, xdescription, Xdescription);
//    // �ĵ�����
//    CC_SYNTHESIZE(string, xdocumentType, XdocumentType);
//    // �����ı� ID
//    CC_SYNTHESIZE(string, xformId, XformId);
//    // �����ı�����
//    CC_SYNTHESIZE(string, xformName, XformName);
//    // ������ͼӦ�� ID
//    CC_SYNTHESIZE(string, ximportViewAppId, XimportViewAppId);
//    // ������ͼ ID
//    CC_SYNTHESIZE(string, ximportViewId, XimportViewId);
//    // ������ͼ����
//    CC_SYNTHESIZE(string, ximportViewName, XimportViewName);
//    // ����Ŀ ID
//    CC_SYNTHESIZE(string, xparentId, XparentId);
//    // ͶӰ
//    CC_SYNTHESIZE(string, xprojection, Xprojection);
//    // �Ķ��� ID
//    CC_SYNTHESIZE(string, xreadFormId, XreadFormId);
//    // �Ķ�������
//    CC_SYNTHESIZE(string, xreadFormName, XreadFormName);
//    // �Ƿ���֪ͨ
//    CC_SYNTHESIZE(bool, xsendNotify, XsendNotify);
//    // ������Ӧ�� ID
//    CC_SYNTHESIZE(string, xworkflowAppId, XworkflowAppId);
//    // ������Ӧ������
//    CC_SYNTHESIZE(string, xworkflowAppName, XworkflowAppName);
//    // ��������־
//    CC_SYNTHESIZE(string, xworkflowFlag, XworkflowFlag);
//    // ����������
//    CC_SYNTHESIZE(string, xworkflowName, XworkflowName);
//    // ����������
//    CC_SYNTHESIZE(string, xworkflowType, XworkflowType);
//
//public:
//    // Ĭ�Ϲ��캯��
//    ColumnsInfoDO() {
//        xid = "";
//        xcreateTime = "";
//        xsequence = "";
//        xupdateTime = "";
//        xdistributeFactor = 0;
//        xallPeoplePublish = false;
//        xallPeopleView = false;
//        xanonymousAble = false;
//        xappId = "";
//        xappName = "";
//        xblankToAllNotify = false;
//        xcategoryAlias = "";
//        xcategoryIcon = "";
//        xcategoryMemo = "";
//        xcategoryName = "";
//        xcategorySeq = "";
//        xcreatorIdentity = "";
//        xcreatorPerson = "";
//        xcreatorTopUnitName = "";
//        xcreatorUnitName = "";
//        xdefaultViewId = "";
//        xdefaultViewName = "";
//        xdescription = "";
//        xdocumentType = "";
//        xformId = "";
//        xformName = "";
//        ximportViewAppId = "";
//        ximportViewId = "";
//        ximportViewName = "";
//        xparentId = "";
//        xprojection = "";
//        xreadFormId = "";
//        xreadFormName = "";
//        xsendNotify = false;
//        xworkflowAppId = "";
//        xworkflowAppName = "";
//        xworkflowFlag = "";
//        xworkflowName = "";
//        xworkflowType = "";
//    }
//};


#endif // !_ColumnsInfo_DO_
