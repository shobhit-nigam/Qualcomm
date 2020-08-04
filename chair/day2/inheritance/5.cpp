#include<iostream>
using namespace std;

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

class linux : private unix{
public:
	void free()
	{
		cout << "community versions are free" << endl;
		cmd();
		return;
	}
};

class android : public linux{
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
	obju.cmd();
	objl.free();
//	objl.cmd();
	return 0;	
}
