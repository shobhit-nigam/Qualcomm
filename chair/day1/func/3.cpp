#include<iostream>
using namespace std;

void funca(){
	cout << "hello" << endl;
}

/*void funca(char la, int lb){
	cout << "hello from a char and an int based function" << endl;
	cout << "la=" << la << "\nlb=" << lb << endl;
}*/

void funca(int la, int lb){
	cout << "hello fron two int based function" << endl;
	cout << "la=" << la << "\nlb=" << lb << endl;
}

int main(){
	funca(11, 22);
	funca('A', 100);
	funca(23.56, 56.78);
	return 0;
	}
