#include<iostream>

using namespace std;

int main(){
	
	int i=1,n;
	
	cout<<"Enter the number : ";
	cin>>n;
	
	cout<<"The table of "<<n<<" is"<<endl;
	while(i<=10){
		
		cout<<n<<" * "<<i<<" = "<<n * i<<endl;
		i++;
	}
	
	return 0;
}
