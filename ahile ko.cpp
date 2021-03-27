/*Write a program to represent a Circle. Include member functions 
to perform the following task: 
Calculate area of the circle 
Calculate perimeter of the circle */ 

#include <iostream>
#define pi 3.14
using namespace std;

class Circle{
	private:
			float radius;
			float area,perimeter;
	public:
			void input()
				{
					cout<<"The radius of the circle is: ";
						cin>>radius;
						}
				void Area()
				{
					area = pi*radius*radius;
								}				
			void Perimeter()
				{
					perimeter = 2*pi*radius;
				}					
			void output()
				{
					cout<<area<<" is the area and "<<perimeter<<" is the perimeter of the circle.";
							}			
							
		
};


int main()
{
	Circle a;
		a.input();
		a.Area();
		a.Perimeter();
		a.output();
	return 0;	
}

