#include<iostream>

using namespace std;


int main()
{
	int *p,n,i;
	
	int a[n];
	
	cout<<"Enter the size of the array : ";
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		
		cin>>a[i];
	}
	
	p= &a[0];
	
	for(i=0;i<n;i++)
	{
		cout<<*p;
		p++;              //yeh yaha pointer bana diya h array aur isko use krke hum array ko access kr skte h
	}
	
	return 0;
}
