#include "pch.h"
#include "Moving.h"
#include "GetNames.h"
#include "Ext.h"
using namespace std;

int main(int argc, char * argv[]) {
	string dir;
	string ProgName;
	if (argc <= 1) {
		cout << "Do not leave the space after the programm's name empty. " << "Available commands:" << endl;
		cout << "X:\\...\\dir will categorizing all files in any directory, where [X] - any disc, [dir] - any dir, [...] - the route to your dir" << endl;
		cout << "(Although there are only one type of command, you can use it multiple times in a row using space char between each)" << endl;
	}
	else
	{
		Moving::move_dem(argc, argv);
	}
	return 0;
}