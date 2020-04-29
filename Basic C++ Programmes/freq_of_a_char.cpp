#include<iostream>

using namespace std;

void freq()
{
	string s1;
	
	int count = 0;
	
	char ch;
	
	cout<<"Enter the string : ";
	cin>>s1;
	
	cout<<"Enter the character to be searched : ";
	cin>>ch;
	
	for(int i=0;i<s1.size();i++)
	{
		if(s1[i] == ch)
		{
			
			count++;
		}
		
	
	}
		cout<<count;
	
}
int main()
{
	freq();
	
	
	return 0;
}
