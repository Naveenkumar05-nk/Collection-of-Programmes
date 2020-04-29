#include<iostream>

using namespace std;

int prime(){
	
	int i,n;
	
	int p=true;
	
	cout<<"Enter the number : ";
	cin>>n;
	
	for(i=2;i<(n/2);i++){
		
		if(n%i==0){
			
			p=false;
			break;
		}
		
		
	}
	return p;
}
int main(){
	int p1 = prime();
	
	if(p1==false)
	
	cout<<"Isn't a prime number";
	
	else
		
		cout<<"its a prime number";
		
	return 0;
}
