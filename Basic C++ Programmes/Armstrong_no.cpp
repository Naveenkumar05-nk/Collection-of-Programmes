#include<iostream>

using namespace std;

int Arm()
{
   int remd,d,n,sum = 0;
   
   cout<<"Enter the number : ";
   cin>>d;
   
   n = d;
   
   while(d>0)
   {
   	remd  = d % 10;
   	
   	sum = sum + remd * remd *remd;
   	
   	d = d/10;
   	
   }
   
   cout<<"The sum of digits of the number is : "<<sum<<endl;
   
   if(n == sum)
   {
   
   	 cout<<"The no is an armstrong number";
   	
}
   
   else
   
 {
	    	
   	cout<<"Its not an armstrong number";

}
   
   	
 return 0;	
}


int main()
{
	
	
	int z = Arm();
	
	return 0;
}
