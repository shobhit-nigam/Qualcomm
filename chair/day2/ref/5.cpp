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
	int varx = 100;		int vary = 200;
	int &ref = varx;
	cout << "varx = " << varx << endl;
	cout << "vary = " << vary << endl;
	funca(varx, vary);
	cout << "varx = " << varx << endl;
	cout << "vary = " << vary << endl;
	return 0;
	}
