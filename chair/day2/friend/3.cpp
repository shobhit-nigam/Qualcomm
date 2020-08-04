#include<iostream>
using namespace std;
// forward declaration
class sars;

class corona{
private:
	int ca=100;
public:
	int cb = 200;
	friend class sars;
	};

class sars{
private:
	int sa=10;
public:
	int sb = 200;
	void funcs(corona &objd)
	{
		cout << "ca = " << objd.ca << endl;
		return;
	}
	};


int main(){
	corona objc;
	sars objs;
	objs.funcs(objc);
	return 0;
	}
	
