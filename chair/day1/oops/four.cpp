// ERROR code
#include<iostream>
using namespace std;

class penguin {
public:
	int feet = 12;
	int bill;
	int flipper;
	void display(){
		cout << "feet = " << feet << endl;
		cout << "bill = " << bill << endl;
	}
	};

class penguin objx;
class penguin objy;

int main(){
	cout << "objx.feet = " << objx.feet << endl;
	objx.display();
	return 0;
	}

