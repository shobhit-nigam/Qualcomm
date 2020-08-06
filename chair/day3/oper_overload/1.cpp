#include<iostream>
using namespace std;

class Cricket
{
  int over = 0;
  int ball = 0;
public:
  Cricket (int o, int b)
  {
    over = o;
    ball = b;
  }
  void display()
  {
    cout << over << " overs and " << ball << " balls " << endl;
  }
};

int main()
{
  int varx = 10;
  Cricket objc(4, 4);
//  error here
//  ++objc;
  cout << "varx = " << varx << endl;
  ++varx;   ++varx;
  cout << "varx = " << varx << endl;
}
