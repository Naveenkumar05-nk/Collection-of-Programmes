#include<iostream>

using namespace std;

int prime(int n)
{
	int i,j;
		
	for(i=2;i<=n;i++)
	{
		bool flag = true;
		
	for(j=2;j<=(i/2);j++)
	{
		if(i%j==0)
		{
			flag = false;
			break;
		}
	}
		if(flag==true)
		{
			cout<<i<<" ";
			
		}
}

int isSum(int a[])
{
	
}
	return 0;

}
int main()
{
	int a;
	
	cout<<"Enter the number : ";
	cin>>a; 
	
	int z = prime(a);
	
return 0;	
}
