/*DEFAULT CONSTRUCTOR (Zero Constructor parameter)

#include <iostream>
using namespace std;

class add
 {
	int x,y,z;
	public:
			add();//constructor declaration//
			void calculate();				
			void display();
	
};

//constructor definition//

add::add(){
	x = 5;
	y = 6; 
}

void add::calculate()
{
	z= x + y;
}

void add::display(){
	cout<<"The sum is: "<<z;
}

int main()
{
	add a;//object banney bittikai constructor ko value initialize huncha//
	a.calculate();
	a.display();
	return 0;
	
}

*/


/*PARAMETERIZED CONSTRUCTOR//


#include <iostream>
using namespace std;

class add
 {
	int x,y,z;
	public:
			add(int, int);//constructor declaration//
			void calculate();				
			void display();
	
};

//constructor definition//

add::add(int a, int b){
	x = a;
	y = b; 
}

void add::calculate()
{
	z= x + y;
}

void add::display(){
	cout<<"The sum is: "<<z;
}

int main()
{
	add a(5,6);
	a.calculate();
	a.display();
	return 0;
	
}

*/

/*CONSTRUCTOR OVERLOADING//


#include <iostream>
using namespace std;

class add
 {
	int x,y,z;
	public:
			add();
			add(int, int);//constructor declaration//
			void calculate();				
			void display();
	
};

//constructor definition//

add::add(int a, int b)//parameterized constructor//
{
	x = a;
	y = b; 
}

add::add() // default cosntructor//
{
	x=10;
	y=5;
}
void add::calculate()
{
	z= x + y;
}

void add::display(){
	cout<<"The sum is: "<<z<<endl;
}

int main()
{
	add a(5,6),b;
	a.calculate();
	a.display();
	b.calculate();
	b.display();
	return 0;
	
}


*/

/*DEFAULT ARGUMENT//

#include <iostream>
using namespace std;

class add
 {
	int x,y,z;
	public:
			add();
			add(int, int=3);//constructor declaration//
			void calculate();				
			void display();
	
};

//constructor definition//

add::add(int a, int b)//parameterized constructor//
{
	x = a;
	y = b; 
}

add::add() // default cosntructor//
{
	x=10;
	y=5;
}
void add::calculate()
{
	z= x + y;
}

void add::display(){
	cout<<"The sum is: "<<z<<endl;
}

int main()
{
	add a=5,b;
	a.calculate();
	a.display();
	b.calculate();
	b.display();
	return 0;	
}

*/


/*DEFAULT ARGUMENT KO 2nd//
#include <iostream>
using namespace std;

class add
 {
	int x,y,z;
	public:
			add();
			add(int, int=3);//constructor declaration//
			void calculate();				
			void display();
	
};

//constructor definition//

add::add(int a, int b)//parameterized constructor//
{
	x = a;
	y = b; 
}

add::add() // default cosntructor//
{
	x=10;
	y=5;
}
void add::calculate()
{
	z= x + y;
}

void add::display(){
	cout<<"The sum is: "<<z<<endl;
}

int main()
{
	add a=5,b(6,4),c;
	a.calculate();
	a.display();
	b.calculate();
	b.display();
	c.calculate();
	c.display();
	return 0;	
}

*/








/*
#include <iostream>
using namespace std;

class complex{
			
	public:
		int r,i;
		complex();
		complex(int , int);
		void calculate();
		void display();
};

complex::complex(int real, int imag)
	{
		r= real;
		i= imag;
	}

void complex::calculate(complex c1, complex c2)
{
	
		r = c1.r + c2.r;
		i = c1.i + c2.i;
}
void display(){
cout<<r<<"+"<<i<<" i";
}

int main()
{
	complex c1(3,2);
	complex c2(5,4);
	complex c3;
	c3.calculate(c1,c2);
	c3.display();
	return 0;
}

*/


/*WAP to add two complex numbers using constructor to intialize the object. Implement:
DEFAULT CONSTRUCTOR
PARAMETERIZED CONSTRUCTOR

#include <iostream>
using namespace std;

class complex{

   //inside class//
public: 
        int real, imaginary; 
    complex() 
    { 
    } 
   
    complex(int r, int i) 
    { 
        real = r; 
        imaginary = i; 
    } 
   
    complex calculate(complex c1, complex c2) 
    { 
        complex t; 

        t.real = c1.real + c2.real; 
   
        t.imaginary = c1.imaginary + c2.imaginary; 
   
        return t; 
    } 
    
}; 
   
int main() 
{ 
  
  
    complex c1(5,4);   
    complex c2(8,6); 
    complex c3; 

    c3 = c3.calculate(c1, c2); 
  
    cout<<"Sum of complex number : "<< c3.real <<" + "<<c3.imaginary<< "i";
	return 0; 
} 
*/


//Outside the class//
/*
#include <iostream>
using namespace std;

class complex{
	int real,imaginary;
	public:
			complex();
			complex(int, int);
			void add(complex, complex);
			void display();
};

complex::complex()
{
	real= 5;
	imaginary= 4;
}
	
complex::complex(int x, int y)	
	{
		real= x;
		imaginary= y;
	}

void complex::add(complex a,complex b)
	{
		real= a.real + b.real;
		imaginary= a.imaginary + b.imaginary;
		}	
	
void complex::display()
{
    cout<<"Sum of complex number : "<< real <<" + "<<imaginary<< "i"<<endl;
	}	
	

int main()
{
	complex c1;
	complex c2(8,6);
	complex c3;
		c3.add(c1,c2);
		c3.display();
	return 0;
	}	
*/

/*COPY CONSTRUCTOR//

//1st question//

#include <iostream>
using namespace std;
	
class add{
	int x,y,z;
	public:
			add();
			add(int a,int b)
			{
				x=a;
				y=b;
			}
			add(add &);
			void calculate();
			void display();
};	

add::add(add &p){
	x = p.x;
	y = p.y;
	cout<<"the value of x and y for new object is:"<<x<<" "<<y<<endl;
}	
	
void add::calculate()
{
	z= x + y;
	}	

void add::display()
{
	cout<<z<<endl;
}

int main()
{
	add a(5,6);
	add b(a);
	a.calculate();
	a.display();
	b.calculate();
	b.display();
	return 0;


}

*/


/*2nd Question//
#include <iostream>
using namespace std;

class complex{
	int real,imag;
	public:
		complex();//default constructor//
		complex(int, int);//parameterized constructor//
		complex(complex &);//copy constructor//
		void display();
		
};

complex::complex(){
	real = 1;
	imag = 2;
}

complex::complex(int x, int y)
{
	real = x;
	imag = y;
}

complex::complex(complex &c1)
{
	real = c1.real;
	imag = c1.imag;
}

void complex::display()
{
	cout<<real<<" +"<<imag<<"i"<<endl;
}

int main()
{
	complex c1;
	complex c2(10,20);
	complex c3(c1);
	c1.display();
	c2.display();
	c3.display();
	c1=c2;
	c1.display();
	return 0;
}

*/

/*HYBRID COPY CONSTRUCTOR//
#include <iostream>
using namespace std;

class complex{
	int real,imag;
	public:
		complex();//default constructor//
		complex(int, int);//parameterized constructor//
		complex(complex &,int );//hybrid constructor//
		void display();
		
};

complex::complex(){
	real = 1;
	imag = 2;
}

complex::complex(int x, int y)
{
	real = x;
	imag = y;
}

complex::complex(complex &c1,int b)
{
	real = c1.real;
	imag = b;
}

void complex::display()
{
	cout<<real<<" +"<<imag<<"i"<<endl;
}

int main()
{
	complex c1;
	complex c2(10,20);
	complex c3(c1,6);
	c1.display();
	c2.display();
	c3.display();
	return 0;
}

*/

/*DESTRUCTOR//

#include<iostream>

 using namespace std;



class abc

 {

 int x;

 public:

 abc();

 ~abc();

 void display();



};

 abc::abc()

 {

 x=9;

 }

 abc::~abc()

 {

 cout<<"object is destroyed:"<<endl;

 }

 void abc::display()

 {

 cout<<x<<endl;

 }
 
 int main()

 {

 abc a;

 a.display();

 return 0;

 }

*/


/*WAP which calculates A where A=p(1+r/100)^t and r is 15 in some case. Use constructor
// for initialization. 

#include <iostream> 
#include <math.h>
using namespace std; 
class compdint { 
    float A,p,r,t; 
    
	public:
		compdint(){
		}
		compdint(float ,float ,float=15);
		
		void calculate();
			
		void output();
			
};

compdint::compdint(float prin, float time, float rate)
	{
		p = prin;
		t = time;
		r = rate;
	}
	
	void compdint::calculate()
	{	
		A = p*(pow((1+r/100),t));
	}
	
	void compdint::output()
		{
			cout<<"The amount is "<<A;
		}
			
	int main()
		{
			
			compdint c;
			compdint d(1000,5);
			d.calculate();
			d.output();
			return 0;
		}			
 */
 
 /*WAP which prints the object number whenever we create an object.//
 
#include <iostream>
using namespace std;

class counter
	{
		private: 
			static int count;
		public:
				counter()
					{
						count++;
						cout<<"This is the object number: "<<cout<<endl;	
					}
	};
	
	int counter::count;
	
	int main()
		{
			counter obj1;
			counter obj2;
			return 0;
		}
*/

/*MESSAGE PASSING//

#include <iostream>
using namespace std;

class student
	{
		int roll;
		public:	
			void getdata(int x)
				{
					roll= x;
				}
			void display()
				{
					cout<<"The roll number is: "<<roll;
				}

};

int main()
	{
		student s;
		s.getdata(1);//object passing the message
		s.display();
		return 0;
	}
*/


//NEW and DELETE operator//

#include <iostream>
using namespace std;

int main()
{
	int *p = new(int);//dynamic memory
	cout<<"Enter number: ";
	cin>>*p;
	cout<<"*p= "<<*p;
	delete p;
	return 0;//dynamic memory deallocation
}





#include <iostream>
using namespace std;

int main()
{
	 int i,n,sum-0;
	 int *p;
	 cout<<"ENter size of the array: ";
	 cin>>n;
	 p = new int[n];
	 	for(i=0;i<n;i++)
	 		{
	 		cout<<"enter numbers: ";
	 		cin>>p[i];
	 		
			 }
			 
		for(i=0;i<n;i++)
		{
			sum = sum+ p[i];
			 }	 
	 	


















 




