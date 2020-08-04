#include<iostream>
using namespace std;

class windows{
private:
	int ia;
	int ib;
public:
	windows(){
		cout << "hello from windows" << endl;
	}
	void funca(int a, int b){
		this->ia = a;
		this->ib = b;
		return;
	}
	void display(){
		cout << "ia is = " << this->ia << endl;
		cout << "ib is = " << this->ib << endl;
		return;	
	}
	
	};

int main(){
	windows objw;
	objw.display();
	objw.funca(66, 77);
	objw.display();
	windows objx;
	return 0;
	}
