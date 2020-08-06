// DMA

#include<iostream>
using namespace std;

int main()
{
  char name[25];
  int data[1000000];
  int *p = NULL;
  int *q = NULL;    //another way of null pointer in C++11
  p = (int *) malloc(sizeof(int));
  q = new int;
  *p = 100;
  *q = 100;
  cout << "*p = " << *p << endl;
  cout << "*q = " << *q << endl;
  free(p);
  delete q;
  return 0;
}
