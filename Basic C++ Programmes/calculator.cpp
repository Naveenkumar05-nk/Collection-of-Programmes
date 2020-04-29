#include<iostream>

using namespace std;

int calci()
{
	float a,b;
	int i;
	
	cout<<"\t\tCALCULATOR"<<endl;
	
	cout<<"Enter the value of a : ";
	cin>>a;
	
	cout<<"Enter the value of b : ";
	cin>>b;
	
	cout<<"1.Addition\n2.Subtraction\n3.Multiplication\n4.Division"<<endl;
	
	cout<<"Enter the choice among operations : ";
	cin>>i;
	

	switch(i)
	{
	
		case 1:
		if(i==1)
		{
			cout<<"Addition = "<<a+b;
		}
		
		case 2:
		if(i==2)
		{  
	    if(a>b)
		{
				cout<<"Subtraction = "<<a-b;
		}

		if(b>a)
		{
				cout<<"Subtraction = "<<b-a;
		}
	    }
	    
	    case 3:
	    if(i==3)
	    {
	    	cout<<"Multiplication = "<<a*b;
		}
		
		case 4:
		if(i==4)
		{
			cout<<"Division = "<<a/b;
		}
		
	}
		if(i>4){
			
			cout<<"Invalid operation";
		}
		
	return 0;

}
int main()
{
	int z = calci();
	return 0;
}
