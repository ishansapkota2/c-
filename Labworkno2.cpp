#include <iostream>
using namespace std;

class complex
	{

				private:
						int real,imaginary;
				public:
						void input()
							{
											
							cout<<"Enter the real part: ";
								cin>>real;
							cout<<"Enter the imaginary part:";
								cin>>imaginary;	
						}
			
			
		void output()
			{
				cout<<real<<"+"<<imaginary<<"i"<<endl;
			}
			
		complex sum(complex c1, complex c2)
			{
				complex t;
					real = c1.real + c2.real;
					imaginary = c1.imaginary + c2.imaginary;
				return t;	
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
