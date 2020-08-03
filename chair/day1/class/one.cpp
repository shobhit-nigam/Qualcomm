#include<iostream>
using namespace std;

class qti {
public:
	int ia = 100;
	void function(){
		cout << "hello from func\n" ;
	}
	
	};


int main(){
	qti objx;
	cout << objx.ia << endl;	
	objx.function();
//	qti.function();
	return 0;
	}
