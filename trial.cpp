#include<iostream>
using namespace std;

int addr(int *a, int *b){
	*a=*b=5;
	return *a+*b;
}

int main(){
	cout<<"Trial";
	int *a;
	*a=2;
	int *b;
	*b=3;
	cout<<addr(a,b)<<a<<b;
	return 0;
}
