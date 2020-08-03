//default values
#include<iostream>
using namespace std;
void funca(){
	cout << "plain funca" << endl;
	return;
	}

void funca(int la=77, int lb=88){
	cout << "hello fron two int based function" << endl;
	cout << "la=" << la << "\nlb=" << lb << endl;
	return;
}

int main(){
	funca(11, 22);
	cout << "-------" << endl;
	funca(100);
	cout << "-------" << endl;
	funca();
	return 0;
	}
