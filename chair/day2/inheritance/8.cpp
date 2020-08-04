#include<iostream>
using namespace std;

class unix{
public:
	unix()
	{
		cout << "contructor of unix" << endl;
	}
	void cmd()
	{
		cout << "awesome command line" << endl;
		enterprise();
		return;
	}
	void security()
	{
		cout << "three level permissions" << endl;
		return;
	}
private:
	void enterprise()
	{
		cout << "enterprise level secrets" << endl;
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
		cout << "contructor of linux" << endl;
	}
	void free()
	{
		cout << "community versions are free" << endl;
		cmd();
		return;
	}
};

class android : public linux{
public:
	android()
	{
		cout << "contructor of android" << endl;
	}
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
//	obju.cmd();
	objl.cmd();
	return 0;	
}
