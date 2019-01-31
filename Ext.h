#pragma once
using namespace std;

class Extension
{
	friend class Moving;
	//получает имя расширения
	string get_extension(string FileName)
	{
		string ExtName = FileName.substr(FileName.find_last_of(".") + 1);
		return ExtName;
	}
	//получает имя содержащего объект каталога
	string get_root_folder_name(string FileName)
	{
		string FolderName = FileName.substr(0, FileName.find_last_of("\\") + 1);
		return FolderName;
	}
	//образует полное имя каталога для файлов определенного расширения
	string new_folder_name(string FileName)
	{
		return (get_root_folder_name(FileName) + get_extension(FileName));
	}
};