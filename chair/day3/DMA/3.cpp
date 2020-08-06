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
  apple *p = new apple;
  apple *q;
  q = (apple *) malloc(sizeof(apple));
  free(q);
  delete p;
  return 0;
}
