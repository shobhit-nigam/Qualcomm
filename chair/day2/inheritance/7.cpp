#include<iostream>
using namespace std;

class unix{
public:
	unix()
	{
		cout << "contructor of unix" << endl;
	}
	~unix()
	{
		cout << "destructor of unix" << endl;
	}
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

class linux : protected unix{
public:
	linux()
	{
		cout << "contructor of linux" << endl;
	}
	~linux()
	{
		cout << "destructor of linux" << endl;
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
	~android()
	{
		cout << "destructor of android" << endl;
	}
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
	android obja;
	return 0;	
}
