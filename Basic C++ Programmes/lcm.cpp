#include<iostream>

using namespace std;

int lcm(int x,int y){
	
	int max;
	int m = x*y;
	if(x>y){
		
		max = x - y;
		
	}
	else{
		max = y - x;
	}
	
	int l = (m/max);
	
	cout<<"LCM = "<<l;
	
	
}
int main(){
	
	int n1,n2;
	
	cout<<"Enter the first no. : ";
	cin>>n1;
	
	
	cout<<"Enter the second no. : ";
	cin>>n2;
	
	int d = lcm(n1,n2);
	
	return 0;
}
