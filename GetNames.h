#pragma once
#include "pch.h"
using namespace std;

class NameVector {
	friend class Moving;
	vector<wstring> get_files_names(string folder);
};