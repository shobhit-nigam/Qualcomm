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
	int ia;		
	int ib;
//	linux() = default;
	linux(int x, int y)
	{	
		this->ia = x;	this->ib = y;
		cout << "constructor of linux" << endl;
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
	android(int a, int b): linux(a, b)
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
//	linux objl(3, 4);
	android obja(10, 20);
	return 0;	
}
