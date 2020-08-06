#include<iostream>
using namespace std;

class Windows
{
public:
  int ia;
  Windows()
  {
    cout << "normal constructor" << endl;
  }
  Windows(int val)
  {
    ia = val;
    cout << "normal constructor with 1 argument" << endl;
  }
  Windows(const Windows &obja)
  {
    ia = obja.ia;
    cout << "copy constructor" << endl;
  }
  ~Windows()
  {
    cout << "normal destructor" << endl;
  }
};

int main()
{
  Windows objw;
  Windows objx(200);
  Windows objy(objx);
      // copy initialisation
  return 0;
}
