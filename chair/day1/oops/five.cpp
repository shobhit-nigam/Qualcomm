// ERROR code
#include<iostream>
using namespace std;

class penguin {
private:
	int feet = 12;
	int bill;
	int flipper;
public:
	void display(){
		cout << "feet = " << feet << endl;
		cout << "bill = " << bill << endl;
	}
	};

class penguin objx;
class penguin objy;

int main(){
//	cout << "objx.feet = " << objx.feet << endl;
	objx.display();
	//error
	//display();
	return 0;
	}

