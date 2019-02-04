#pragma once
#include "pch.h"
#include "GetNames.h"
#include "Ext.h"
using namespace std;

//получает список имён, находящихся в указанной директории
vector<wstring> NameVector::get_files_names(string folder) {
	vector<wstring> names;
	string sp = folder + "/*.*";	//шаблон поиска
	wstring wsearch_path = Fncs::to_wstring(sp);
	WIN32_FIND_DATA fd;
	HANDLE hFind = FindFirstFile(wsearch_path.c_str(), &fd);
	if (hFind != INVALID_HANDLE_VALUE) {
		do {
			if (!(fd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY))
				names.push_back(fd.cFileName);
		}
		while (FindNextFile(hFind, &fd));
		FindClose(hFind);
	}
	return names;
}
