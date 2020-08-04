#include<iostream>
using namespace std;

void funca(int (&cr)[5]){
	return;
}

int main(){
	int ar[5] = {7, 9, 10, 23, 4};
	int br[] {7, 9, 10, 23, 4};
	funca(ar);
	return 0;
	}
