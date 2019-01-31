#pragma once
#include <vector>
#include "GetNames.h"
#include "Ext.h"
using namespace std;

string to_string(wstring wstr)	//конвертация в строку
{
	return string(wstr.begin(), wstr.end());
}
class Moving
{
	//перемещение файлов по соотв. каталогам
	public: static  void move_dem(string dir)
	{
		string c;
		NameVector NVec;
		vector<wstring> Ext = NVec.get_files_names(dir);
		size_t vector_size = Ext.size();
		for (size_t i = 0; i < vector_size; i++)
		{
			c = dir + "\\" + to_string(Ext[i]);
			move_to_folder(c, to_string(Ext[i]));
		}
	}

	//создание каталога и/или перемещение файла
	protected: static void move_to_folder(string Name, string NewName)
	{
		Extension MakeNew;
		string tmp = MakeNew.new_folder_name(Name) + "\\" + NewName;
		LPCSTR Ext = tmp.c_str();
		if (!(MoveFileA(Name.c_str(), Ext)))
		{
			CreateDirectoryA(MakeNew.new_folder_name(Name).c_str(), 0);
		}
		MoveFileA(Name.c_str(), Ext);
	}
};