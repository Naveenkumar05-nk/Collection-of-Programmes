#include<iostream>

using namespace std;

int power(){
	
	float a;
	int b;
	
	float m = 1;
	
	cout<<"Enter the value of base : ";
	cin>>a;
	
	cout<<"Enter the value of exponent : ";
	cin>>b;
	
	while(b!=0){
		
		m = m * a;
		b--;
	}
	
	cout<<m;	
	
	return 0;
}
int main(){
	
	
	int z = power();
	
	return 0;
}
