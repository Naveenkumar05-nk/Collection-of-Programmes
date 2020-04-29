#include<iostream>
#include<cmath>
using namespace std;


int quad(){
	float a,b,c,d,x1,x2;
	
	cout<<"\tEnter the values of a,b and c"<<endl;
    cout<<"a = ";
    cin>>a;
    
    cout<<"b = ";
    cin>>b;
    
    cout<<"c = ";
    cin>>c;
    
    d = b*b-4*a*c;
    
    cout<<"Discriminant d is : "<<d<<endl;
    
    if(d>0){
    	cout<<"Roots are real and distinct"<<endl;
    	x1 = (-b+sqrt(d))/2*a;
    	x2 = (-b-sqrt(d))/2*a;
    	 cout<<"x1 = "<<x1<<"\t"<<"x2 = "<<x2;
    	 
	}
	
	else if(d==0){
		cout<<"Roots are real and equal"<<endl;
    	x1 = (-b+sqrt(d))/2*a;
    	x2 = (-b-sqrt(d))/2*a;
    	 cout<<"x1 = x2 = "<<x1;
    			
	}
    
    else{
    	
    	cout<<"Roots are imaginary";
	}
	   return 0;
	   
	   
}
int main(){
	
	int z = quad();
	
	
	return 0;
}
