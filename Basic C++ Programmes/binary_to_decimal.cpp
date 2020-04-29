#include<iostream>
#include<cmath>
using namespace std;

int con(long long n)
{
	int x,i=0,dec=0;
	
	while(n!=0)
	{
		x = n%10;
		n = n/10;
		dec = dec + x*pow(2,i);
		i++;
	}
	
	return dec;
}

int main()
{
	long long n;
	
	cout<<"Enter the binary number : ";
	cin>>n;
	
	
	cout<<"decimal form is : "<<con(n);
	
	return 0;
	
}
