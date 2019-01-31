#pragma once
using namespace std;

class Extension
{
	friend class Moving;
	//�������� ��� ����������
	string get_extension(string FileName)
	{
		string ExtName = FileName.substr(FileName.find_last_of(".") + 1);
		return ExtName;
	}
	//�������� ��� ����������� ������ ��������
	string get_root_folder_name(string FileName)
	{
		string FolderName = FileName.substr(0, FileName.find_last_of("\\") + 1);
		return FolderName;
	}
	//�������� ������ ��� �������� ��� ������ ������������� ����������
	string new_folder_name(string FileName)
	{
		return (get_root_folder_name(FileName) + get_extension(FileName));
	}
};