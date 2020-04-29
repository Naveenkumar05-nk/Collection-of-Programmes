#include<iostream>

using namespace std;

int Arm()
{
	int a,b,d,remd,t,count = 0;
	 
	
	cout<<"Enter the value of a : ";
	cin>>a;
	
	
	cout<<"Enter the value of b : ";
	cin>>b;
	
        
		  
		for(d=a;d<=b;d++)
       	{
	    
       
        int sum = 0;		  	
		t = d;
		
		while(t>0)
		{
			remd = t % 10;
			
			sum = sum + remd * remd * remd;
			
			t = t/10;
			
					
		}
		


	
	if(d == sum){
		
	cout<<d<<" "<<endl;
	count++;
}
}
	
cout<<"The ans is : "<<count;	
	
	
return 0;

}


int main()
{
	
	int z = Arm();
	
	return 0;
}
