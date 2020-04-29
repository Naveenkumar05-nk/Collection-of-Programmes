#include<iostream>

using namespace std;

int largest(int n)
{
	int i;
	int a[n];
	
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	for(i=0;i<n;i++)
	{
		if(a[0]<a[i])
		{
			a[0] = a[i];
		}
	}
	
	cout<<"Largest element in the array is : "<<a[0];
	
	
	return 0;
}

int main()
{
	int a;
	
	cout<<"Enter the size of the array : ";
	cin>>a;
	
	int z = largest(a);
	
	return 0;
}
