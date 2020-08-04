#include<iostream>
using namespace std;

void funca(int la, int& lb){
	++la;
	++lb;
	cout << "la = " <<la <<endl;
	cout << "lb = " <<lb <<endl;
	return;
}

int main(){
	const int varx = 100;		int vary = 200;
	const int &ref = varx;
	cout << "varx = " << varx << endl;
	cout << "ref = " << ref << endl;
//	++varx;
	++ref;
	cout << "varx = " << varx << endl;
	cout << "ref = " << ref << endl;
	return 0;
	}
