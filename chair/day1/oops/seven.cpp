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
	printf("fa=%f\n", fa);
	printf("ia=%d\n", ia);
	
	cout << "fa=%f" << fa << endl;
	cout << "ia=%d" << ia << endl;
	
	cout << "fa=" << fa << endl;
	cout << "ia=" << ia << endl;

	objx.display();
	return 0;
	}

