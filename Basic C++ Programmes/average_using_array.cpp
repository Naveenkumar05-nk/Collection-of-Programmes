#include<iostream>

using namespace std;

void avg()
{
	int i,n;
	float result= 0;
	
	int arr[n];
	
	cout<<"Enter the size of the array : ";
	cin>>n;
	
	cout<<"Enter the elements of the array"<<endl;
			
	for(i=0;i<n;i++)
	{
	    cin>>arr[i];
	}
	
	for(i=0;i<n;i++)
	{
		result = result + arr[i];
	}
	
	cout<<"The average = "<<result/n;
	
	}

int main()
{
	avg();
	
	return 0;
}
