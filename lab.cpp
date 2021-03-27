/*Q(1) Write a program using inline function to calculate the square of a number

#include <iostream>
using namespace std;

inline int square(int a );

int main()
 	{
 		int x,sq;
 			cout<<"Enter the integer to be squared: ";
 				cin>>x;
 			 sq= square(x);
			 	cout<<"The square is: "<<sq;
		return 0;		 	
		 }	

inline int square(int a )
{
	return (a*a);
}
*/


/* Q(2) Write a program using inline function to calculate the multiplication and division of two users input no.//

#include <iostream>
using namespace std;

inline int mult(int a, int b)
{
	return (a*b);
}

inline float mult(float c, float d)
{
	return(c/d);
}

int main()
{ 
	int w,x,m;
		float y,z,d;
		cout<<"Enter the numbers to be multiplied : ";
			cin>>w>>x;
		m= mult(w,x);
			cout<<"The product is: "<<m<<endl;
		cout<<"Enter the numbers to be divided: ";
			cin>>y>>z;	
		d= mult(y,z);
			cout<<"The division of the two numbers is: "<<d<<endl;
		return 0;			
}

*/

/*Q (3)Write a program using inline function to calculate the volume of a cube//

#include <iostream>
#include <math.h>
using namespace std;

inline int volume(int a)
	{
		return(pow(a,3));
	}
	
int main()
{
	int x,v;
		cout<<"Enter the length of the cube: ";
			cin>>x;
		v= volume(x);
			cout<<"The volume of the cube is: "<<v;
		return 0;		
	}	

*/

/*Q (4) Write a program to calculate simple interest using default value of r =1.5%. Ask the user for Principal amount and Time [I=PTR/100].//

#include <iostream>
using namespace std;

float si(float , float ,float=1.5);

int main()
	{
		float p,t,r,interest;
		
			cout<<"Enter the principal amount and time: ";
				cin>>p>>t;
			interest = si(p,t);
			cout<<"The interest is: "<<interest;
			return 0;
	}

float si(float prin, float time, float rate)
	{
		return((prin*time*rate)/100);
	}
	
*/	
	
/*Write and test the following computeSphere() function that returns the volume v and surface area s of a sphere with the given radius. 
	//void computeSphere(float &v,float &s,float r)//
		
	#include <iostream>
	#include <math.h>
	#define pi 3.14
	using namespace std;
	
	float computeSphere(float &, float &, float = 2);
	
	int main()
		{
			float volume, area, radius;
		
			computeSphere(volume, area);
				cout<<"The volume is: "<<volume;
				cout<<"The area is: "<<area;
				return 0;		
		}
	
	float computeSphere(float &v, float &s, float r)
		{
			v= (4*pi*pow(r,3))/3;
			s= 4*pi*pow(r,2);
			
		}
	
*/	
	
/*WAP which asks a number and test it for even or odd using enumeration.//


#include<iostream>
using namespace std;
enum divider{a=2};
main()
{
int x;
cout<<"Enter a number"<<endl;
cin>>x;
if(x%a==0){
cout<<x<<" is even";
}
else
cout<<x<<" is odd";
}

*/

/*FUNCTION OVERLOADING 2//

#include <iostream>
using namespace std;

int area(int); //square//
int area(int, int); //rectangle//
double area(double, int); //cylinder//
float area()

*/

/*
#include<iostream>
using namespace std;

enum divider{a=2};
int main(){
    int x;
    
cout<<"Enter a number"<<endl;
cin>>x;
if(x%a==0){
    cout<<x<<" is even";
}
else
cout<<x<<" is odd";
}

*/

/* Create a class Point that represents a three dimensional coordinate system. 
Each object of Point should have coordinates, (x,y,z) and methods to assign 
coordinates to the point objects. Add a method to calculate the distance 
from origin and to print the point in the form of (x,y,z)

#include <iostream>
#include <cmath>
using namespace std;
 
class Point
{
    private:
    int x, y, z;
    float d;
    public:
    void assign()
    {
        cout << "Enter value of x, y, z resp: ";
        cin >> x >> y >> z; 
    }
    void distance()
    {
        cout << "(" << x << "," << y << "," << z << ")" << endl;
        d = sqrt(x*x + y*y + z*z);
        cout << "Distance is: " << d;
    }
};
 
int main()
{
    Point l;
    l.assign();
    l.distance();
    return 0;
}

*/

/*Q 5. AREA AND PERIMETER//

 
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

*/	
	

/*Design a class called Person that contains appropriate members for storing name, age, gender and telephone number.
//Write member functions that can read and display these data.

#include<iostream>
using namespace std;

class Person{
private:
char name[20];
int age;
char phone[10];
char gender[5];
public:
void input(){
cout<<"Enter name: ";
cin.getline(name, 20);
cout<<"Enter age: ";
cin>>age;
cout<<"Enter phone no: ";
cin>>phone;
cout<<"Enter gender: ";
cin>>gender;
}
void output(){
cout<<"Name: "<<name<<endl;
cout<<"Age: "<<age<<endl;
cout<<"Phone number: "<<phone<<endl;
cout<<"Gender: "<<gender<<endl;
}
};

int main(){
Person p;
p.input();
p.output();
return 0;
}
*/
/*
#include <iostream>
using namespace std;

class Rational
{
	private:
		int num,deno;
	public:
		void assign(int ,int);
		void display();
		void invert();	
};

	void Rational::assign(int numerator, int denominator)
		{
			num= numerator;
			deno= denominator;
		}
		
	void Rational::display()
		{
			cout<<"Rational: "<<num<<"/"<<deno<<endl;
			}
			
*/				
