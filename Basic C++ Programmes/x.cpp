#include<iostream>


using namespace std;


int con(long long n)
{
	int remd;
	
	
	while(n!=0)
	{
	    remd = n%2;
		
		n = n/2;
        		
        return remd; 		
}

}


int reverse(int remd)
{
	int rev = 0;
			
while(remd!=0)
{	
	int rd = remd%10;
	
	rev = rev * 10 + rd;
	
	remd = remd/10;
}

	
	cout<<"The binary form is : "<<rev;



return 0;	
	
}

int main()
{
	long long a;
	long long z;
	int b;
	
	z = con(a);
	
	b=reverse();
	 
	
	return 0;
}
