#include<iostream>

using namespace std;

int check(){
	
	char x;
	
	cout<<"Enter the character : ";
	cin>>x;
	
	int p = (x=='a'||x=='e'||x=='i'||x=='o'||x=='u');
	
	int q = (x=='A'||x=='E'||x=='I'||x=='O'||x=='U');
		
	if(p||q){
		
		cout<<"Its a vowel";
		
	}
	
	else{
		
		cout<<"Its a consonant";
	}
	
	return 0;
}
int main(){
	
	int c = check();
	
	return 0;
}
