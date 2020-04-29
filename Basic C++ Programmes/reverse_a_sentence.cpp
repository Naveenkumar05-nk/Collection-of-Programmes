#include<iostream>

using namespace std;

void rev(char *str)
{
	if(*str=='\0')
     return ;
     
	else
	{
	rev(str+1);
	
	cout<<*str;
	
}
}

int main()
{   

    char s1[65];

	cout<<"Enter the string : ";
	cin.getline(s1,65);
	
	rev(s1);
	
	return 0;
}
