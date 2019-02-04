#pragma once
#include "pch.h"
#include "Ext.h"
using namespace std;


//конвертация в строку
string Fncs::to_string(wstring wstr) {
	return string(wstr.begin(), wstr.end());
}
wstring Fncs::to_wstring(string str) {
	return wstring(str.begin(), str.end());
}

//получает имя расширения
string Extension::get_extension(string FileName) {
	return FileName.substr(FileName.find_last_of(".") + 1);
}
string Extension::get_file_name(string FileName) {
	return FileName.substr(FileName.find_last_of("\\") + 1);
}
//получает имя содержащего объект каталога
string Extension::get_root_folder_name(string FileName) {
	return FileName.substr(0, FileName.find_last_of("\\") + 1);
}
//образует полное имя каталога для файлов определенного расширения
string Extension::new_folder_name(string FileName) {
	return (get_root_folder_name(FileName) + get_extension(FileName));
}
