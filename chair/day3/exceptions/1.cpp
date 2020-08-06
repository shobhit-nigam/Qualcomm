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
      throw vary;
    }
    else {
      varz = varx/vary;
      cout << "varz = " << varz << endl;
    }
  }
  catch (int x){
    cout << "exception here and value of denominator is " << x << endl;

  }
  return 0;
}
