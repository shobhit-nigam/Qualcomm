#include<iostream>
using namespace std;

int main(){
	int varx = 100;
	int *p = &varx;
	int &ref = varx;
	cout << "p = " << p << endl;
	cout << "*p = " << *p << endl;
	cout << "ref = " << ref << endl;
	int vary = 200;
//	error 
//	&ref = vary;
	return 0;
	}
