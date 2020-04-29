#include<iostream>

using namespace std;

int main(){
	
	int i,n,f = 1;
	
	cout<<"Enter the number : ";
	cin>>n;
	
	
	while(n>1){
		
		
		
		f = f * n;
		
		n--;
		 
		
	}
	
	cout<<"the factorial is :  "<<f;
	
	return 0;
}
