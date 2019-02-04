#pragma once
#include "pch.h"
#include "Moving.h"
#include "GetNames.h"
#include "Ext.h"
using namespace std;

//каталогизация всех файлов
void Moving::move_dem(int argc, char * argv[]) {
	for (int i = 1; i < argc; ++i)
		move_all(argv[i]);
}

//перемещение файлов по соотв. каталогам
void Moving::move_all(string dir) {
	string c;
	NameVector NVec;
	vector<wstring> Ext = NVec.get_files_names(dir);
	size_t vector_size = Ext.size();
	for (size_t i = 0; i < vector_size; ++i) {
			c = dir + "\\" + Fncs::to_string(Ext[i]);
			move_to_folder(c, Fncs::to_string(Ext[i]));
		}
}

//создание каталога и/или перемещение файла
void Moving::move_to_folder(string Name, string NewName) {
	Extension MakeNew;
	string tmp = MakeNew.new_folder_name(Name) + "\\" + NewName;
	LPCSTR Ext = tmp.c_str();
	if (!(MoveFileA(Name.c_str(), Ext))) {
		CreateDirectoryA(MakeNew.new_folder_name(Name).c_str(), 0);
	}
	MoveFileA(Name.c_str(), Ext);
}