﻿#include "pch.h"
#include <iostream>
#include <string>
#include "Moving.h"
#include "GetNames.h"
#include "Ext.h"
using namespace std;

int main()
{
	string dir = "";
	cout << " Enter the route" << endl;
	cin >> dir;
	Moving::move_dem(dir);
	system("pause");
	return 0;
}
