#pragma once
#include <windows.h>
using namespace std;

class NameVector
{
	friend class Moving;
	vector<wstring> get_files_names(string folder)	//получает список имён, находящихся в указанной директории
	{
		vector<wstring> names;
		string search_path = folder + "/*.*";
		wstring wsearch_path = wstring(search_path.begin(), search_path.end());
		WIN32_FIND_DATA fd;
		HANDLE hFind = FindFirstFile(wsearch_path.c_str(), &fd);
		if (hFind != INVALID_HANDLE_VALUE)
		{
			do
			{
				if (!(fd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY))
					names.push_back(fd.cFileName);
			} while (FindNextFile(hFind, &fd));
			FindClose(hFind);
		}
		return names;
	}
};