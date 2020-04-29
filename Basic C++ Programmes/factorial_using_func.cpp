#include<iostream>

using namespace std;

int factorial(){
	int n,f=1;
	
	cout<<"Enter the number : ";
	cin>>n;
	
	while(n>1){
		
		f = f*n;
		n--;
	}
	
	return f;
}
int main(){
	int a;
	a = factorial();
	
	cout<<"Factorial is : "<<a;
		
	return 0;
}
