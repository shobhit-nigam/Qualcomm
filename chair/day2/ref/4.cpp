#include<iostream>
using namespace std;

int main(){
	int varx = 100;
	int &ref = varx;
//	error
	int &refb;
	cout << "varx = " << varx << endl;
	cout << "ref = " << ref << endl;
	++varx;
	cout << "varx = " << varx << endl;
	cout << "ref = " << ref << endl;
	++ref;
	cout << "varx = " << varx << endl;
	cout << "ref = " << ref << endl;
	return 0;
	}
