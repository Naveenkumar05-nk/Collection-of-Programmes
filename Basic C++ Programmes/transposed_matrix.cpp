#include<iostream>

using namespace std;

int transpose(int r, int c)
{
	int i,j,x[100][100],t[100][100];
	
	cout<<"Enter the elements of Matrix"<<endl;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>x[i][j];
		}
	}
	
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
				
			t[j][i] = x[i][j];
		
		}
	}
	
	cout<<"Tranposed Matrix"<<endl;
	
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			
			cout<<t[i][j]<<" ";
		
		}
		
		cout<<endl;
	}
		
		return 0;
}
int main()
{
	int a, b;
	
	cout<<"Enter the number of rows : ";
	cin>>a;
	
	
	cout<<"Enter the number of columns : ";
	cin>>b;
	
	int z = transpose(a,b);
	     
	return 0;
}
