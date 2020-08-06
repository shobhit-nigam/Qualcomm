#include<iostream>
using namespace std;

int main()
{
  int ar[4] = {3, -1, 2, 0};
  int varx = 0;
  for (int i=0; i<4; i++)
  {
    varx = ar[i];
    try{
      if (varx==0){
        cout << "i = " << i << endl;
        throw "DivideByZeroExeption";
      }
      else if(varx<0){
        cout << "i = " << i << endl;
        throw varx;
      }
      else {
        cout << "i = " << i << endl;
        throw 'A';
//        cout << "no exceptions\n" << endl;
      }
    }
    catch (const char *ptr){
      cout << "string thrown\n" << endl;
    }
    catch (int x){
      cout << "integer thrown\n" << endl;
    }
    catch(...){
      cout << "general exception handler\n" << endl;
    }
  }
  return 0;
}
