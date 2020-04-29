#include<iostream>

using namespace std;

void fullpyramid()
{
	int i,j,k,n;
	
	cout<<"Enter the number : ";
	cin>>n;
	
	
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=i;j--)
		{
			cout<<" ";
		}
		
		for(k=1;k<=2*i-1;k++)
		{
			cout<<"*";
			
		}
		
		cout<<endl;
	}
	
}
int main()
{
	fullpyramid();              //int m store nahi kr skte calling k waqt q ki fn ka type void aur jb kuch return hi nahi hoga toh store kya karenge int m
	
	return 0;
}
