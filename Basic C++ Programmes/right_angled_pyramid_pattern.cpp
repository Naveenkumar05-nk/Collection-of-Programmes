#include<iostream>

using namespace std;

int pyramid(int n)
{
	int i,j;
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<"*";
			
		}
		
		cout<<endl;
	}
	
	return 0;
}
int main()
{

int x;

cout<<"Enter the value of x : ";
cin>>x;

int z = pyramid(x);

return 0;

}
