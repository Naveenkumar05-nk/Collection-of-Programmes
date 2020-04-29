#include<iostream>

using namespace std;

int pallin(){
	
		
	int remd,x, n,rev = 0;
		
	
	
	cout<<"Enter the number : ";
	cin>>x;
	

	n=x;             //tricky section h prgm ka q ki iss n ki value woh while loop waale n k brabar nahi hone waali yeh alg cheez h

	
	while(x!=0){
		
		remd = x%10;
		
		rev = rev * 10 + remd;
		
		x = x/10;
				
	}
	
	cout<<"Reverse of no is : "<<rev<<endl;
	
	if(n==rev)
	
	  
	  cout<<"Number is pallindrome";

	  else
	  
	  
	  cout<<"the number isn't pallindrome";

	  
	 return 0;		
	
	
}
int main(){
	
	
	int z = pallin();
	
	return 0;
}
