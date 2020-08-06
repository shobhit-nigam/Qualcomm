#include<iostream>
using namespace std;

void funca(){
  return;
}
int main()
{
  int varx = 20;
    // rvalue
    // immeditae adressing mode
    // movx 1000 #20
  int vary = varx;
    // lvalue
  int *ptr = &varx;
  // error
  100 = varx;
  int &ref = varx;
  //error
  int &ref = 100;
  funca() = 20;
  return 0;
}
