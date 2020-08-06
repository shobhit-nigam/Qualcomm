#include<iostream>
using namespace std;

int main()
{
  int varx=10;
  int vary=0;
  int varz=0;
  cin >> vary;
  try{
    if (vary==0){
      throw "DivideByZeroExeption";
    }
    else {
      varz = varx/vary;
      cout << "varz = " << varz << endl;
    }
  }
  catch (const char *ptr){
    cout << ptr << endl;
  }
  return 0;
}
