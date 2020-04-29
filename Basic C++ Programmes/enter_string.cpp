#include<iostream>

using namespace std;

int main(){
	
	char str[10];
	
	
	cout<<"Enter a string : ";                //subscripting nii likhna string lete waqt using "cin"
	cin.getline(str,20);
	
	//you can also use "cin>>str;" at the place of cin.getline	

	
	
	cout<<"String is : "<<str;
	
	return 0;
}
