#include<iostream>

using namespace std;

int MatAdd(int r, int c)
{
	int x[100][100], y[100][100], p[100][100],i,j;
	
	cout<<"Enter the elements of 1st Matrix"<<endl;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{   
		
			cin>>x[i][j];
		}
	}
	
	
	cout<<"Enter the elements of 2nd Matrix"<<endl;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>y[i][j];
		}
	}
	 
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			
			p[i][j] = x[i][j] + y[i][j];
			
		}
	}
	

	cout<<"The Addition Matrix"<<endl; 
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<p[i][j]<<"\t";
		}
		
		cout<<endl;
	}
	return 0;
}
int main()
{
	int a,b;
	
	cout<<"Enter the number of rows : ";
	cin>>a;
	
	cout<<"Enter the number of columns : ";
	cin>>b;
	
	int z = MatAdd(a,b);
	
	return 0;
}
