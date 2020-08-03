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
penguin objy;

int main(){
	float fa = 11.33;
	int ia = 100;
	int ib = 0x64;	

	cout << dec << ia << endl;
	cout << hex << ia << endl;
	cout << oct << ia << endl;
	
	cout << ib << endl;

	return 0;
	}

