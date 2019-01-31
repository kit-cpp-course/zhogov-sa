#pragma once
#include <vector>
#include "GetNames.h"
#include "Ext.h"
using namespace std;


void move_to_folder(string Name, string NewName);

string to_string(wstring wstr)	//конвертация в строку
{
	return string(wstr.begin(), wstr.end());
}

void move_dem(string dir)	//перемещение файлов по соотв. каталогам
{
	string c;
	vector<wstring> Ext = get_files_names(dir);
	size_t vector_size = Ext.size();
	for (size_t i = 0; i < vector_size; i++)
	{
		c = dir + "\\" + to_string(Ext[i]);
		move_to_folder(c, to_string(Ext[i]));
	}
}

void move_to_folder(string Name, string NewName)	//создание каталога и/или перемещение файла
{
	string tmp = new_folder_name(Name) + "\\" + NewName;
	LPCSTR Ext = tmp.c_str();
	if (!(MoveFileA(Name.c_str(), Ext)))
	{
		CreateDirectoryA(new_folder_name(Name).c_str(), 0);
	}
	MoveFileA(Name.c_str(), Ext);
}