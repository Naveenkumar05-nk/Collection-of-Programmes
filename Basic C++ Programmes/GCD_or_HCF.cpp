#include<iostream>

using namespace std;

int main(){
	
	int x1,x2;
	
	cout<<"Enter x1 : ";
	cin>>x1;
	
	cout<<"Enter x2 : ";
	cin>>x2;
	
	while(x1!=x2){
		
		if(x1>x2){
		
			
			x1 = x1 - x2;
	}
		else{
		
			x2  = x2 - x1;
		}
		}
		
		cout<<"The HCF is : "<<x1;
	
	
	return 0;
}


