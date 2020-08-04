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
	friend void covid();
	};

class sars{
private:
	int sa=10;
public:
	int sb = 200;
	friend void covid();
	};


void covid(){
	corona objd;
	sars objs;
	int la;
	la = objd.ca + objs.sa;
	cout << la << endl;
	return;	
	}


int main(){
	corona objc;
	covid();
	return 0;
	}
	
