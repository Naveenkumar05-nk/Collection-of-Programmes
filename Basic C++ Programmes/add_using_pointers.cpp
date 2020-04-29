#include<iostream>

using namespace std;

int main(){
	
	int *p = new int;                   //pointer ko dynamically banao toh zyda accha h
	int *q = new int;
	int *r = new int;
	
	cout<<"Enter the value at p: ";
	cin>> *p;
	
	cout<<"Enter the value at q: ";
	cin>> *q;
	
	*r = *p + *q;
	
	cout<<"addition is : "<<*r;
	
	return 0;
}
