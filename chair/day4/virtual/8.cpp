#include<iostream>
using namespace std;

class ned
{
public:
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
  ned *nptr;
  arya obja;
  nptr = &obja;
  nptr->sword();
  obja.sword();
  obja.sigil();
  return 0;
}
