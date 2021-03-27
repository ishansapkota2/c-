//WAP to create a class that has two c\variables out of which one is static. Write a necessary member function to input data and display them//
#include <iostream>
using namespace std;
/* Name: ISHAN RAJ SAPKOTA
Roll No.: 191325
BECE 'DAY"*/

class counter
	{
		private:
			static int c;//default value 0 huncha//class variable ni bhancha//throughout the program access garna milcha//object-independent//outside the class define garnu parcha//
			int a;//garbage value assign bhaako huncha//instance member variable//
		public:
			void input()
				{
					cout<<"Enter the value of a: "<<endl;
						cin>>a;
					cout<<"Enter the value of c: "<<endl;
						cin>>c;	
				}
			
			 void display()
			{
				cout<<"The value of 'a' is: "<<a<<endl;
				cout<<"The value of 'c' is: "<<c<<endl;
			}		
	};
int counter::c=0;
 
 int main()
 {
 	counter c1,c2;
	 c1.input();
	 	c2.input();
	 c1.display();
	 	c2.display();
	return 0;	 	
 }
