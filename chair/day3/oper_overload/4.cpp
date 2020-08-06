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
  friend Cricket operator +(const Cricket &, const Cricket &);
};

Cricket operator +(const Cricket &oc, const Cricket &od)
{
  int balls_c=0, balls_d=0, balls_x=0;
  Cricket t(0, 0);
  balls_c = oc.over * 6 + oc.ball;
  balls_d = od.over * 6 + od.ball;
  balls_x = balls_c + balls_d;
  t.over = int(balls_x/6);
  t.ball = balls_x%6;
  return t;
}


int main()
{
  int varx = 10;
  Cricket objc(4, 4);
  Cricket objd(3, 4);
  Cricket total(0, 0);

  objc.display();
  objd.display();
  total = objc + objd;
        //  +(objc, objd)
  total.display();
  return 0;
}
