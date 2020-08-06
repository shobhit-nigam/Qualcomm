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
  }
};

int main()
{
  const StarClass obja{};
  obja.display();
//  obja.val = 100;
  obja.display();
//  obja.setValue(200);
  obja.display();
  return 0;
}
