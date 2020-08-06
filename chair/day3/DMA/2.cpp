// DMA

#include<iostream>
using namespace std;

int main()
{
  int *p = NULL;
  int n=0;
  cout << "how many values" << endl;
  cin >> n;
  p = new int[n];
  cout << "enter the values " << endl;
  for (int i=0; i<n; i++){
    cin >> p[i];
  }
  cout << "you have enetered:" << endl;
  for (int i=0; i<n; i++){
    cout << p[i] << endl;
  }
  delete[] p;
  return 0;
}
