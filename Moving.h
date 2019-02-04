#pragma once
#include "pch.h"
using namespace std;

class Moving {
	
public:		static void move_dem(int argc, char * argv[]);

//перемещение файлов по соотв. каталогам
			static void move_all(string dir);

	//создание каталога и/или перемещение файла
protected:	static void move_to_folder(string Name, string NewName);
};