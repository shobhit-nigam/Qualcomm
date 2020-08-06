// DMA

#include<iostream>
using namespace std;

class apple
{
public:
  apple(){
    cout << "constructor" << endl;
  }
  ~apple(){
    cout << "destructor" << endl;
  }
};

int main()
{
  apple *p = new apple[3];
  delete[] p;
  return 0;
}
