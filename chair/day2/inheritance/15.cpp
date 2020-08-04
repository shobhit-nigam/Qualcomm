#include<iostream>
using namespace std;

class unix{
public:
	unix()
	{
		cout << "unix constructor" << endl;	
	}
	void cmd()
	{
		cout << "awesome command line in unix" << endl;
		return;
	}
	void cmd(int x)
	{
		cout << "unix command line with one argument" << endl;
		return;
	}
protected:
	void kernel_code()
	{
		cout << "kernel level configurations\n";
		return;
	}
};

class linux : public unix{
public:
	linux()
	{
		cout << "linux constructor" << endl;	
	}
	void free()
	{
		cout << "community versions are free" << endl;
		return;
	}
};

class mobileOS : public unix{
public:
	mobileOS()
	{
		cout << "mobileOS constructor" << endl;	
	}
	void portability()
	{
		cout << "can run across mini devices" << endl;
	}
};

class android : public linux, public mobileOS{
public:
	android()
	{
		cout << "android constructor" << endl;	
	}
	void ui()
	{
		cout << "great GUI in android" << endl;
		return;
	}
};

int main()
{
	android obja;
	return 0;	
}
