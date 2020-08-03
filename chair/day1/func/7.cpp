//default values
#include<iostream>
using namespace std;

void funca(int la=77, int lb=88){
	cout << "hello fron two int based function" << endl;
	cout << "la=" << la << "\nlb=" << lb << endl;
}

int main(){
	funca(11, 22);
	cout << "-------" << endl;
	funca(100);
	cout << "-------" << endl;
	funca();
	return 0;
	}
