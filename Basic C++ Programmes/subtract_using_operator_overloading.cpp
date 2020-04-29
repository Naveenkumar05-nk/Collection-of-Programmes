#include<iostream>

using namespace std;

class Complex{
	
	private:
		
		float img;
		float real;
		
		public:
			
			
			void input(){
				
				cout<<"Enter the real and imaginary part of complex no : "<<endl;
				cin>>real;
				cin>>img;
			}
			
			Complex operator - (Complex c2){               //operator l RHS m jo b likha ho its alwz considered as an argument (like c2)
				
				Complex temp;
				
				temp.real = real - c2.real;
				temp.img = img - c2.img;
				
				return temp;
				
			}
			
			void output(){
				
				if(img < 0)
					 cout<<"The output is "<<real<<img<<"i";
					 else
					 
					 cout<<"The output is "<<real<<" + "<<img<<"i";
					 	
					
				}
			
	
};

int main(){
	
	Complex c1,c2,result;
	
	cout<<"Enter the first complex number : "<<endl;
	c1.input();
	
	
	cout<<"Enter the second complex number : "<<endl;
	c2.input();
	
	result = c1 - c2;    //yeh chalne pr c2 as an arg invoke ho jaayega i.e. - for the complex operator - (complex c2)
	result.output();
	
	return 0;
}
