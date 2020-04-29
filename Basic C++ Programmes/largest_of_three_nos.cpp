#include<iostream>

using namespace std;

int largest(int a,int b ,int c){
	
	if(a>b && b>c){
		
	return a;
	}
	
	if(a<b && b>c){
		
		return b;
		
	}
	
	if(a<b && b<c){
		
		return c;
	}
	
	
	return 0;
}
int main(){
	int x,y,z,d;
	
	cout<<"Enter the value of x : ";
	cin>>x;
	
	
	cout<<"Enter the value of y: ";
	cin>>y;
	
	
	cout<<"Enter the value of z : ";
	cin>>z;
	
	d = largest(x,y,z);
	
	cout<<"The largest is : "<<d;
	

	
	return 0;
}
