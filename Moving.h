#pragma once
#include "pch.h"
using namespace std;

class Moving {
	
public:		static void move_dem(int argc, char * argv[]);

//����������� ������ �� �����. ���������
			static void move_all(string dir);

	//�������� �������� �/��� ����������� �����
protected:	static void move_to_folder(string Name, string NewName);
};