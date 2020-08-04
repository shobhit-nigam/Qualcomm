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

class linux : public unix{
public:
	void free()
	{
		cout << "community versions are free" << endl;
		this->kernel_code();
		return;
	}
};

int main()
{
	linux objl;
	unix obju;
	objl.cmd();
	objl.security();
	objl.free();
//	obju.kernel_code();
	return 0;	
}
