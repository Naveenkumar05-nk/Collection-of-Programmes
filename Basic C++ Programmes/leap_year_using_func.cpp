#include<iostream>

using namespace std;


int leap(){
	
	int n;
	
	
	cout<<"Enter the year : ";
	cin>>n;
	
	
	if(n%4==0){
		
	  cout<<"Its a leap year";
	
	}
	
	else{
		
		cout<<"Its not a leap year";
	}
	

	
	
}
int main(){
	
	
	int a = leap();
		
	return 0;
}
