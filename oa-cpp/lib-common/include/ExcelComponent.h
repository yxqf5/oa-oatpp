#pragma once
/*
 Copyright Zero One Star. All rights reserved.
 
 @Author: awei
 @Date: 2022/10/24 15:33:44
 
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
#ifndef _EXCELCOMPONENT_H_
#define _EXCELCOMPONENT_H_
#include <xlnt/xlnt.hpp>
#include <string>
#include <vector>
/**
 * Excel���
 * ע�⣺xlntֻ֧��xlsx�ļ���ʽ
 */
class ExcelComponent
{

private:
	xlnt::workbook wb;
	xlnt::worksheet sheet;
	// �и�
	double rowHeight = 20;
	// �п�
	double colWidth = 20;
	// ����Sheet
	void createSheet(const std::string& sheetname);
	// ����д������
	void writeLineByLine(const std::vector<std::vector<std::string>>& source);
	// ���ж�ȡ����
	static void readLineByLine(xlnt::worksheet* source, std::vector<std::vector<std::string>>* target);
public:
	ExcelComponent();
	// �����и�
	void setRowHeight(double rowHeight);
	// �����п�
	void setColWidth(double colWidth);
	// ��չ�����
	void clearWorkbook();
	// ����ָ��Excel�ļ����ڴ�
	void loadFile(const std::string& filename);

	//************************************
	// Method:    writeVectorToFile
	// FullName:  ExcelComponent::writeVectorToFile
	// Access:    public 
	// Returns:   void
	// Parameter: const std::string& filename �ļ����Ƶ�ȫ·����ע���ļ�·���ָ���ʹ��/
	// Parameter: const std::string& sheetname �������ݱ��浽��ҳǩ����
	// Parameter: const std::vector<std::vector<std::string>>& data �������������
	// Description: �������ݵ�ָ��ҳǩ�������浽�ļ���
	//************************************
	void writeVectorToFile(const std::string& filename, const std::string& sheetname, const std::vector<std::vector<std::string>>& data);

	//************************************
	// Method:      writeVectorToBuff
	// FullName:    ExcelComponent::writeVectorToBuff
	// Access:      public 
	// Returns:     std::vector<std::uint8_t> ���ػ��������������ʹ��reinterpret_castת����const char*���磺const char* charData = reinterpret_cast<const char*>(data.data());
	// Parameter:   const std::string& sheetname �������ݱ��浽��ҳǩ����
	// Parameter:   const std::vector<std::vector<std::string>>& data �������������
	// Description: �������ݵ�ָ��ҳǩ�������浽�������з��㴫��
	//************************************
	std::vector<std::uint8_t> writeVectorToBuff(const std::string& sheetname, const std::vector<std::vector<std::string>>& data);
	
	//************************************
	// Method:    readIntoVector
	// FullName:  ExcelComponent::readIntoVector
	// Access:    public static
	// Returns:   std::vector<std::vector<std::string>> ָ��ҳǩ���ݵĶ�άvector
	// Parameter: const std::string & filename �ļ����Ƶ�ȫ·����ע���ļ�·���ָ���ʹ��/
	// Parameter: const std::string & sheetname ҳǩ����
	// Description: ��ȡָ���ļ�ָ��ҳǩ������
	//************************************
	static std::vector<std::vector<std::string>> readIntoVector(const std::string& filename, const std::string& sheetname);
	
	//************************************
	// Method:      readIntoVector
	// FullName:    ExcelComponent::readIntoVector
	// Access:      public static
	// Returns:     std::vector<std::vector<std::string>> ָ��ҳǩ���ݵĶ�άvector
	// Parameter:   const char* data ��������
	// Parameter:   size_t size ���ݴ�С
	// Parameter:   const std::string & sheetname ҳǩ����
	// Description: ��ȡ�ڴ�������ָ��ҳǩ������
	//************************************
	static std::vector<std::vector<std::string>> readIntoVector(const char* data, size_t size, const std::string& sheetname);
};
#endif // _EXCELCOMPONENT_H_
