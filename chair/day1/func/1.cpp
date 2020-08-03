#include<iostream>
using namespace std;

void funca(){
	cout << "hello" << endl;
}

void funca(int la){
	cout << "hello from one varibale function" << endl;
}

void funca(int la, int lb){
	cout << "hello fron two arguments based function" << endl;
}

int main(){
	funca(11);
	return 0;
	}
