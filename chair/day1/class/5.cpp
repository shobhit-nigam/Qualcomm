#include<iostream>
using namespace std;

class qti {
public:
	int list = 100;
	int data;
	void methoda(){
		cout << "hello from A\n" ;
	}
	void methodb(int);
	};

void qti::methodb(int list){
	this->list = list;
	cout << "hello from B\n" ;
	this->methoda();
	}

int main(){
	qti objx, objy;
	int varx;
/*	cout << "objx.list=" << objx.list << endl;
	cout << "objy.list=" << objy.list << endl;
	objx.methodb(99);
	objy.methodb(88);
	cout << "objx.list=" << objx.list << endl;
	cout << "objy.list=" << objy.list << endl;*/
	cout << "objy.data=" << objy.data << endl;
	cout << "varx=" << varx << endl;
	
	return 0;
	}
