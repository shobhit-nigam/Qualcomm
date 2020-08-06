#include<iostream>
using namespace std;

class ned
{
public:
  void sword ()
  {
    cout << "ned's sword" << endl;
  }
  void sigil ()
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
  }
  void sigil ()
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
