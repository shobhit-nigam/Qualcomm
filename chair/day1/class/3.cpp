#include<iostream>
using namespace std;

class qti {
public:
	int ia = 100;
	void methoda(){
		cout << "hello from A\n" ;
	}
	void methodb(int);
	};

void qti::methodb(int val){
	ia = val;
	cout << "hello from B\n" ;
	}

int main(){
	qti objx, objy;
	cout << "objx.ia=" << objx.ia << endl;
	cout << "objy.ia=" << objy.ia << endl;
	objx.methodb(99);
	objy.methodb(88);
	cout << "objx.ia=" << objx.ia << endl;
	cout << "objy.ia=" << objy.ia << endl;
	return 0;
	}
