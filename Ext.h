#pragma once
using namespace std;

string get_extension(string FileName)	//получает имя расширения
{
	string ExtName = FileName.substr(FileName.find_last_of(".") + 1);
	return ExtName;
}

string get_root_folder_name(string FileName)	//получает имя содержащего объект каталога
{
	string FolderName = FileName.substr(0, FileName.find_last_of("\\") + 1);
	return FolderName;
}

string new_folder_name(string FileName)		//образует полное имя каталога для файлов определенного расширения
{
	return (get_root_folder_name(FileName) + get_extension(FileName));
}