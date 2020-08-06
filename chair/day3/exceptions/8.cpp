#include<iostream>
using namespace std;

class ned
{
public:
  ned(){
//    cout << "ned constructor" << endl;
  }
  ~ned(){
//    cout << "ned destructor" << endl;
  }
};

class arya : public ned
{
public:
  arya(){
//    cout << "arya constructor" << endl;
  }
  ~arya(){
//    cout << "arya destructor" << endl;
  }
};

int main()
{
  ned objn;
  arya obja;
  try
  {
    try
    {
        throw 100;
    }
    catch(int x)
    {
      cout << "inner int catch" << endl;
      throw;
    }
  }
  catch (int y){
    cout << "outer int catch " << endl;
  }
  catch (arya ob){
    cout << "caught arya object " << endl;
  }
  catch (ned ob){
    cout << "caught ned object " << endl;
  }


  return 0;
}
