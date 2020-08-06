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
    return;
  }
  void operator ++(){
    if (ball == 5)
    {
      ball = 0;
      ++over;
    }
    else
    {
      ++ball;
    }
    return;
  }
};

int main()
{
  int varx = 10;
  Cricket objc(4, 4);
  objc.display();
  ++objc;
  objc.display();
  ++objc;
  objc.display();
  return 0;
}
