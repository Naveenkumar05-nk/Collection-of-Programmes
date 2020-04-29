#include<iostream>

using namespace std;


int main(){
	
	int sum = 0;
	
	int n;
	
	cout<<"Enter the number to be summed till : ";
	cin>>n;
	
	while(n!=0){
		
		sum = sum + n;
		n--;
	}
	
	cout<<"Sum is : "<<sum;
	
	return 0;
}
