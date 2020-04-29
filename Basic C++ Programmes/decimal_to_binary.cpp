#include<iostream>

using namespace std;

int con(long long n)
{
	int bin = 0;
	int i=1,remd;
	
	while(n!=0)
	{
		remd = n%2;
		n = n/2;
		
		bin += remd * i;
		
		i = i * 10;
		
	}
	
	cout<<"The binary form is : "<<bin;
	
	return 0;
}
int main()
{
	long long a;
	long long z;
	
	cout<<"Enter the decimal no : ";
	cin>>a;
	
	z = con(a);
	return 0;
}
