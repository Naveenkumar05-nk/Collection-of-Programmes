#include<iostream>

using namespace std;

int swap(int ,int){
	
	int a,b;
	
	cout<<"\tbefore swapping"<<endl;
	
	cout<<"Enter the value of a : ";
	cin>>a;
	
	cout<<"Enter the value of b : ";
	cin>>b;
	
	cout<<"\tAfter swapping"<<endl;
	
	a = a + b;
	b = a - b;
	a = a - b;
	
	cout<<"a = "<<a<<"\t\t"<<"b = "<<b;
	
	return 0;
}
int main(){
	
	int x = swap(20,30);
	
	
	
	return 0;
}
