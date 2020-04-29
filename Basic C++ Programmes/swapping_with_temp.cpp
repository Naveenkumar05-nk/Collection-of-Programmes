#include<iostream>

using namespace std;

int swap(){
	
	int a,b,temp;
	
	cout<<"\tBefore swapping"<<endl;
	
	cout<<"a = ";
	cin>>a;
	
	
	cout<<"b = ";
	cin>>b;
	
	cout<<"\tAfter swapping"<<endl;
	
	temp = a;
	a = b;
	b = temp;
	
	cout<<"a = "<<a<<"\t\t"<<"b = "<<b;
	
	
	return 0;
}
int main(){
	
	int x = swap();
	
	
	return 0;
}
