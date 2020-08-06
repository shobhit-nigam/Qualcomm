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
  friend Cricket operator +(const Cricket &, const Cricket &);
  friend Cricket operator +(const Cricket &, const int &);
  friend Cricket operator ++(const Cricket &);
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

Cricket operator +(const Cricket &oc, const int &balls_d)
{
  int balls_c=0, balls_x=0;
  Cricket t(0, 0);
  balls_c = oc.over * 6 + oc.ball;
  balls_x = balls_c + balls_d;
  t.over = int(balls_x/6);
  t.ball = balls_x%6;
  return t;
}

void operator ++(Cricket & oc)
{
  oc = oc + 1;
  return ;
}

int main()
{
  int varx = 10;
  Cricket objc(4, 4);
  Cricket objd(3, 4);
  Cricket obje(2, 5);
  Cricket total(0, 0);

  objc.display();
  objd.display();
  ++objc;
  total = objc + 4;
  // error
  // objc++;
  total.display();
  total = objc + objd;
        //  +(objc, objd)
  total.display();
  total = objc + objd + obje;
  total.display();
  return 0;
}
