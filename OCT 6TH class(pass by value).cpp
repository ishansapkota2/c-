//WAP having a member function to add two complex numbers by PASSING OBJECT AS ARGUMENT//

#include <iostream>
using namespace std;

class complex{
	private:
			int real, imaginary;
	public:
			void input()
				{
					cout<<"Enter the real part: ";
						cin>>real;
					cout<<"Enter the imaginary part: ";	
						cin>>imaginary;
				
				}
				
			void output()
			{
				cout<<"The sum is: "<<real<<"+"<<imaginary<<"i"<<endl;
				}	
				
			void sum(complex c1, complex c2)  
			{
				real= c1.real + c2.real;
				imaginary= c1.imaginary + c2.imaginary;
				}	
	};

int main()
{
	complex x,y,z;
		x.input();
			y.input();
		z.sum(x,y);	
		z.output();
	return 0;
}
