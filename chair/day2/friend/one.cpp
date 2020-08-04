#include<iostream>
using namespace std;

class corona{
private:
	int ca=100;
public:
	int cb = 200;
	void funca(){
		cout << "accessing private data from func A" << endl;
		cout << "ca = " << this->ca << endl;
		cout << "cb = " << this->cb << endl;
		return;
	}
	};

void covid(){
	corona objd;
	objd.funca();
	// error
	cout << objd.ca << endl;
	return;	
	}


int main(){
	corona objc;
	covid();
	return 0;
	}
	
