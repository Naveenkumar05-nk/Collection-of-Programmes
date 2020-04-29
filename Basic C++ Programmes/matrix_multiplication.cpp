#include<iostream>

using namespace std;

int matmulti(int r, int c)
{
	int i,j,k,x[100][100],y[100][100],m[100][100];
	
	cout<<"Enter the elemnts of 1st Matrix"<<endl;
	
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
	
	
	cout<<"The Mutliplied Matrix"<<endl;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			for(k=0;k<c;k++){
			
			m[i][j] = x[i][j] * y[i][j] + x[i][k] * y[k][j]; 
		}
		}
		
	}
	
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		
			cout<<m[i][j]<<"\t\t"; 
		}
		
		cout<<endl;
	}
	
}
int main()
{
	int a,b;
	
	cout<<"Enter the number of rows : ";
	cin>>a;
	
	cout<<"Enter the number of columns : ";
	cin>>b;
	
	int z = matmulti(a,b);
	
	return 0;
}
