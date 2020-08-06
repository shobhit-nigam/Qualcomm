#include<iostream>
using namespace std;

class ned
{
public:
  virtual void sword ()
  {
    cout << "ned's sword" << endl;
  }
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
  void sigil () override
  {
    cout << "wolf cub" << endl;
  }
};

int main()
{
  ned *nptr, objn;
  arya *aptr, obja;
  nptr = &obja;
  aptr = &obja;
  nptr->sword();
  nptr->sigil();
  aptr->sword();
  aptr->sigil();
  return 0;
}
