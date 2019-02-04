#pragma once
#include "pch.h"
using namespace std;

namespace Fncs {
	string to_string(wstring wstr);
	wstring to_wstring(string str);
}

class Extension {
	friend class Moving;
	//�������� ��� ����������
	string get_extension(string FileName);
	//�������� ��� �����
	string get_file_name(string FileName);
	//�������� ��� ����������� ������ ��������
	string get_root_folder_name(string FileName);
	//�������� ������ ��� �������� ��� ������ ������������� ����������
	string new_folder_name(string FileName);
};