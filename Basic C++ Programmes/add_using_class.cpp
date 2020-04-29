#include<iostream>

using namespace std;

class Addition{
     private:
     	
     	int x;
     	int y;
    
	public:
	
	void read();
	int Add();
	void display(); 	

};

void Addition::read(){                       //agr class k bahar kisi func ko access krna h toh use scope resolution 

	
	cout<<"Enter the value of x: ";
	cin>>x;
	cout<<"Enter the value of y: ";
	cin>>y;

}

int Addition::Add(){             //btr yehi rhta h ki return use karre ho toh "int" hi rkho datatype func ka
	
	return (x+y); 
	}

void Addition::display(){
	
	cout<<"x is : "<<x<<endl;
	cout<<"y is : "<<y<<endl;
	
}
int main(){
	 Addition a1;
	 int addn;
	 
	 a1.read();
	 addn = a1.Add();
	 a1.display();
	 
	 cout<<"addition is: "<<addn;
	 
	return 0;
}
