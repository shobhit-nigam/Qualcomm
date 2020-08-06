#include<iostream>
using namespace std;

class Windows
{
public:
  int ia;
  int ib;
  int *p;
  Windows()
  {
    cout << "normal constructor" << endl;
    p = new int;
  }
  void funca(int val, int var)
  {
    ia = val;
    ib = var;
    p = &ia;
    cout << "in func a, setting values" << endl;
  }
  Windows(const Windows &obja)
  {
    ia = obja.ia;
    ib = obja.ib;
    p = new int;
    p = &ia;
    cout << "copy constructor" << endl;
  }
  void display(){
    cout << " ia = " << ia << endl;
    return;
  }
  ~Windows()
  {
    cout << "normal destructor" << endl;
  }
};

int main()
{
  Windows objx;
  objx.funca(100, 200);
  Windows objy = objx;
  objx.display();
  objy.display();
  cout << objx.p << endl;
  cout << objy.p << endl;
  cout << "via pointers: "<< endl;
  cout << *objx.p << endl;
  cout << *objy.p << endl;
  ++objx.ia;
  objy.ia = 300;
  objx.display();
  objy.display();
  cout << "via pointers: "<< endl;
  cout << *objx.p << endl;
  cout << *objy.p << endl;
  return 0;
}
