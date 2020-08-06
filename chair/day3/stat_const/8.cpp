// intializations

#include<iostream>
using namespace std;

class StarClass
{
public:
  static int val;
  int var;
  void setValue(int x, int y)
  {
    val = x;
    var = y;
    return;
  }
  static void display()
  {
    cout << "val = " << val << endl;
    // error because  non static data
//    cout << "var = " << var << endl;
  }
};

int StarClass::val {10};


int main()
{
  StarClass obja{};
  StarClass objb{};
  obja.display();
  objb.display();
  obja.setValue(200, 300);
  obja.display();
  objb.display();
  return 0;
}
