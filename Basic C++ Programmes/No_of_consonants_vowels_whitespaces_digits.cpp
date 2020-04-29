#include<iostream>

using namespace std;

void func()
{
	string s1;
	int c = 0,d = 0,e = 0;
	
	cout<<"Enter the string : ";
	cin>>s1;
	
	for(int i=0;i<s1.size();i++)
	{
		if(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u'||s1[i]=='A'||s1[i]=='E'||s1[i]=='O'||s1[i]=='I'||s1[i]=='U')
		{
			c++;
		}
		if((s1[i]>='A'&& s1[i]<='Z')||(s1[i]>='a'&& s1[i]<='z'))
		{
			
			d++;
		}
		if(s1[i]==' ')
		{
			
			e++;
		}
		
	}
	
	cout<<"Vowels = "<<c<<endl;
	cout<<"Consonants = "<<d<<endl;
	cout<<"whitespaces = "<<e;
}
int main()
{
	func();
	
	return 0;
}
