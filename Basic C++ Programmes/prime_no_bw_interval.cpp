#include<iostream>

using namespace std;

int prime(){
	
	int a,b;

	cout<<"Enter the value of a : ";
	cin>>a;
	
	cout<<"Enter the value of b : ";
	cin>>b;
	
	while(a<b)                //yehi hi yaha trick h
	{
          	int p = 0;		

	for(int i=2;i<=a/2;i++)
	{
		if(a % i == 0)
		{
		
		p = 1;
		break;
	}
}
	
	if(p==0)

	
	cout<< a << " ";
	
	a++;                //yeh basically 'a' ki value hi badhara h jb tk woh finally while k hisaab se 'b' k brabar na ho jaaye 

}

return 0;
}


int main(){
	
	int z = prime();
	return 0;
}
