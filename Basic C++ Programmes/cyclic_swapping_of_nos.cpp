#include<iostream>

using namespace std;

int swap(int *p, int *q, int *r)
{
	int temp;
	
	temp = *p;
	*p = *r;
	*r = *q;
	
	*q = temp;
	
	cout<<"a = "<<*p<<"\t"<<"b = "<<*q<<"\t"<<"c = "<<*r;
}
int main()
{
	int a,b,c;
	
	cout<<"Enter the value of a, b & c : ";
	cin>>a>>b>>c;
	
	cout<<"Values before swapping"<<endl;
	cout<<"a = "<<a<<"\t"<<"b = "<<b<<"\t"<<"c = "<<c<<endl;
	
	cout<<"Values after swapping"<<endl;
	
	int z = swap(&a,&b,&c);
	
	return 0;
}
