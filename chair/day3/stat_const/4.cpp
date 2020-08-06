// intializations

#include<iostream>
using namespace std;

class StarClass
{
public:
  int val;
  StarClass(): val{0}
  {
  }
  void setValue(int x)
  {
    val = x;
  }
  void display() const
  {
    cout << "val = " << val << endl;
    // error
    //setValue(300);
  }
  void display(int x)
  {
    cout << "display function with an int parameter" << endl;
    cout << "val = " << val << endl;
  }
};

int main()
{
  StarClass obja{};
  obja.display(200);
//  obja.val = 100;
  obja.display();
  obja.setValue(200);
  obja.display();
  return 0;
}
