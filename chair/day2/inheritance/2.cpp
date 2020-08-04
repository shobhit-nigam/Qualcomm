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
		cout << :kernel level configurations";
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
	unix obju;
	objl.cmd();
	objl.security();
	objl.free();
	return 0;	
}
