#include<iostream>

using namespace std;

int add(int &x,int &y){
	
	int z;
	
    z = x + y;
	
	return z;
		
}

int main(){
	int a = 2;
	int b = 3;
	cout<<"addition is : "<<add(a,b);
	
	
	
	return 0;
}
