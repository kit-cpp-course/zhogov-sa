#pragma once
#include "pch.h"
using namespace std;

namespace Fncs {
	string to_string(wstring wstr);
	wstring to_wstring(string str);
}

class Extension {
	friend class Moving;
	//получает имя расширения
	string get_extension(string FileName);
	//получает имя файла
	string get_file_name(string FileName);
	//получает имя содержащего объект каталога
	string get_root_folder_name(string FileName);
	//образует полное имя каталога для файлов определенного расширения
	string new_folder_name(string FileName);
};