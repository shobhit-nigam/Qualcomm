#include<iostream>
using namespace std;

float divide(int la, int lb){
  if (lb==0){
    throw "DivideByZeroExeption";
  }
  return la/lb;
}


int main()
{
  int varx=10;
  int vary=0;
  int varz=0;
  cin >> vary;
  try{
    varz = divide(varx, vary);
    cout << "result is " << varz << endl;
  }
  catch (const char *ptr){
    cout << ptr << endl;
  }
  return 0;
}
