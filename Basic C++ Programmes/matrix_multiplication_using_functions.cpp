#include<iostream>

using namespace std;

int InsertMat(int x[][100],int y[][100],int a, int b, int c, int d)
{
	int i,j;
	

	
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			cin>>x[i][j];
			
		}
		
	}
	
	

	
	for(i=0;i<c;i++)
	{
		for(j=0;j<d;j++)
		{
			cin>>y[i][j];
			
		}
		
	}
	
	if(b!=c)
	{
		cout<<"Inavlid!,Enter the values again";
	}
	
	return 0;	
}

int MultiMat(int x[][100], int y[][100], int m[][100], int a, int b, int c, int d)
{
 int i,j,k;
 
 for(i=0;i<a;i++)
 {
 	for(j=0;j<b;j++)
 	{
 		for(k=0;k<d;k++)
 		{
 			
 			m[i][j] = x[i][j] * y[k][j] + x[i][j] * y[k][j];
		 }
	 }
 }

return 0;	
	
}

int displayMat(int x[][100], int m[][100], int y[][100],int a, int b, int c, int d)
{
	int i,j;
	
	for(i=0;i<a;i++)
	{
		for(j=0;j<d;j++)
		{
			cout<<m[i][j]<<"\t\t";
			
			
		}
		
		cout<<endl;
	}
	return 0;
}
int main()
{
	int x[100][100],y[100][100],m[100][100];
	
	int r1,r2,c1,c2;
	
	cout<<"Enter the number of rows in first matrix : ";
	cin>>r1;
	
	cout<<"Enter the number of columns in first matrix: ";
	cin>>c1;
	
	cout<<"Enter the number of rows in second matrix: ";
	cin>>r2;
	
	cout<<"Enter the number of rows in second matrix: ";    ///isko sahi krna h abhi program ko.....
	cin>>c2;
	
	int p = InsertMat(x,y,r1,c1,r2,c2);
	
	int q = MultiMat(x,y,m,r1,c1,r2,c2);
	
	cout<<"The multplied matrix is"<<endl;
	
	int r = displayMat(m,x,y,r1,c1,r2,c2); 
	
	return 0;
}
