#include<iostream>
using namespace std;

class qti {
public:
	int ia = 100;
	void methoda(){
		cout << "hello from A\n" ;
	}
	void methodb();
	};

void qti::methodb(){
	cout << "hello from B\n" ;
	}

int main(){
	qti objx;
	cout << objx.ia << endl;	
	objx.methoda();
	objx.methodb();
	return 0;
	}
