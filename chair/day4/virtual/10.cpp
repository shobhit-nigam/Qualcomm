#include<iostream>
using namespace std;

class ned
{
public:
  ned()
  {
    cout << "ned's constructor" << endl;
  }
  // pure virtual function
  virtual void sword () = 0;
  virtual void sigil ()
  {
    cout << "wolf" << endl;
  }
};

class arya : public ned
{
public:
  arya()
  {
    cout << "arya's constructor" << endl;
  }
  void sword ()
  {
    cout << "needle" << endl;
    return;
  }
  void sigil ()
  {
    cout << "wolf cub" << endl;
  }
};

int main()
{
//  ned *nptr;
  arya obja;
  obja.sword();
  obja.sigil();
  return 0;
}
