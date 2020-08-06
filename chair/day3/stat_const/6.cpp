// intializations

#include<iostream>
using namespace std;

class StarClass
{
public:
  static int val;
  void setValue(int x)
  {
    val = x;
  }
  void display()
  {
    cout << "val = " << val << endl;
  }
};

int StarClass::val {10};

void funca()
{
  int ia = 0;
  static int ib = 0;
  ++ia;   ++ib;
  cout << "ia = " << ia << endl;
  cout << "ib = " << ib << endl;
  return;
}

int main()
{
//  cout << StarClass::val << endl;
  StarClass obja{};
  StarClass objb{};
  obja.display();
  objb.display();
  obja.setValue(200);
  obja.display();
  objb.display();
  return 0;
}
