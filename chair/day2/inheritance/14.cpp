#include<iostream>
using namespace std;

class unix{
public:
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
	void free()
	{
		cout << "community versions are free" << endl;
		return;
	}
};

class mobileOS{
public:
	void portability()
	{
		cout << "can run across mini devices" << endl;
	}
	void free()
	{
		cout << "some RTOSs are free" << endl;
	}
};

class android : public linux, public mobileOS{
public:
	void ui()
	{
		cout << "great GUI in android" << endl;
		return;
	}
};

int main()
{
	unix obju;
	linux objl;
	android obja;
	obja.ui();
	obja.free();
	obja.portability();
	return 0;	
}
