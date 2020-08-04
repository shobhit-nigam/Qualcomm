#include<iostream>
using namespace std;
// DRY Don't Repeat Yourself

class unix{
public:
	void cmd()
	{
		cout << "awesome command line" << endl;
		return;
	}
	void security()
	{
		cout << "three level permissions" << endl;
		return;
	}
};

class linux : public unix{
public:
	void free()
	{
		cout << "community versions are free" << endl;
		return;
	}
};

int main()
{
	linux objl;
	objl.cmd();
	objl.security();
	objl.free();
	return 0;	
}
