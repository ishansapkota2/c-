/*WAP to add two complex numbers. Demonstrate:
Default copy constructors
Hybrid copy constructors
Constructors with default argument


#include <iostream>
using namespace std;

class complex{
	int r,i;
	public:
		   complex(){
		   }
		   complex(complex & ,int);
		   complex(int,int=5 );
		   void calculate(complex , complex);	
			void display();
};

complex::complex(int a, int b)
	{
		r=a;
		i=b;
	}
	
complex::complex(complex &c2, int z)
	{
		r = c2.r;
		i = z;
		}	

	void complex::calculate(complex c3, complex c4)
		{
			r= c3.r + c4.r;
			i= c3.i + c4.i;
		}
	
void complex::display()
{	
	cout<<"The complex number is: "<<r<<" + "<<i<<"i"<<endl;
	}	
			
int main()
{
	
	complex c2(5,7);
	complex c3(c2,8);
	complex c4(10);
	complex c5;	
	c5.calculate(c3,c4);
	c5.display();	
	return 0;
}
*/



/*WAP to overload a constructor of class sum which adds values given by user 

#include <iostream>
using namespace std;

class add{
	int w,x,y;
	public:
			add();
			add(int, int=10);
			add(add &,int );
			void calculate();
			void display();
};

add::add(int a,int b)
	{
		x = a;
		y = b;
	}
add::add(add &c1,int z)
	{
		x = c1.x; 
		y = z;
	}

void add::calculate()
	{
		w =x +y;
	}
	
void add::display()
	{
		cout<<"The addition is: "<<w<<endl;
		}	


int main()
	{
		add c1(5);
		add c2(c1, 6);
		c1.calculate();
		c1.display();
		c2.calculate();
		c2.display();
	
		return 0;
	}
*/


/*WAP to count the object number as object is being created and destroyed.
// Demonstrate object is destroyed in reverse direction of creation.


#include<iostream>
using namespace std;

class object
{
	static int count;
	public:
			object();
			~object();	
			void display();
};
object::object()
				{				
					count++;
					cout<<"This is the object number: "<<count<<endl;
				}
int object::count;

object::~object()
	{
		 

 		cout<<"object is destroyed:"<<count<<endl;
		count--;
	}
	

int main()
{
	object obj1,obj2,obj3;
	
	return 0;
}
*/



/*Create a class Mountain with data members name, height, location, a constructor that
 initializes the members to the values passed to it as parameters, a function called
  CmpHeight() to compare two objects and DisplayInf() to display the information of 
  Mountain. In main, create two objects of class mountain and print the information 
  of the mountain which is greatest height.



#include<iostream>
#include<string>
using namespace std;

class mountain
	{
		float height;
		string name, location;
		public:
				mountain()
					{	                
						height=8848;
						name="Mt. Everest";
						location="Solukhumbu";
					}                                 
				mountain(float a, string b, string c)
					{
						height=a;
						name=b;
						location=c;
					}
				void cmpheight(mountain m1, mountain m2)
					{
						if(m1.height>m2.height)
							{
								height=m1.height;
								name=m1.name;
								location=m1.location;
							}
						else
							{
								height=m2.height;
								name=m2.name;
								location=m2.location;
							}
					}
				void displayinf()
					{
						cout<<"The taller mountain is:"<<endl;
						cout<<"Name:"<<name<<endl;
						cout<<"Height:"<<height<<endl;
						cout<<"Location:"<<location<<endl;
					}
	};

int main()
{
	mountain m1;
	mountain m2(8500,"Annapurna","Gandaki"),m3;
	m3.cmpheight(m1,m2);
	m3.displayinf();
	return 0;

}

*/

/*

#include <iostream>
using namespace std;

class tollbooth{
	unsigned int car;
	double money;
	
	public:	
			tollbooth()
			{
				car = 0;
				money = 0.0;
			} 
			void payingcar();
			void nonpayingcar();
			void display();
};


	void tollbooth::payingcar()
		{
			car++;
			money+= 5;
		}
		
	void tollbooth::nonpayingcar()
		{
			car++;
			}	
			
	void tollbooth::display()
		{
			cout<<"Total cars: "<<car<<endl;
			cout<<"Total money: "<<money<<endl;
				}		

	int main()
		{
			tollbooth a;
			int choice;
			while(1)
			{
			
			cout<<"~~~MENU~~~"<<endl;
			cout<<"PRESS 1 for paying car "<<endl;
				cout<<"PRESS 2 for non-paying car "<<endl;
			cout<<"PRESS 3 to exit "<<endl;
				cout<<"Enter your choice: "<<endl;
			cin>>choice;
				switch(choice)
					{
					 case 1: a.payingcar();
					 		 a.display();	
							 break;
					 case 2: a.nonpayingcar();
					 		 a.display();
							 break;
							 
					 case 3: exit(0);
					 default: cout<<"ENter a valid choice. ";	 
				}			 
			}
			return 0;
		}
*/

/*

#include<iostream>
using namespace std;

class tollbooth{
unsigned int payingcars, cartotal;
double totalmoney;
public:
tollbooth();
void payingcar();
void nopaycar();
void display();
};
tollbooth::tollbooth()
{
payingcars=0;
totalmoney=0;
cartotal=0;
}
void tollbooth::payingcar()
{
cartotal++;
payingcars++;
totalmoney+=5;
}
void tollbooth::nopaycar()
{
cartotal++;
}
void tollbooth::display()
{
cout<<"Total acquired money:"<<totalmoney<<endl;
cout<<"Total cars:"<<cartotal<<endl;
cout<<"Paying cars:"<<payingcars<<endl;
}
int main()
{
tollbooth cars;
char ch;
cout<<"Press 'e' for exit:"<<endl;
do
{
cout<<"Paying car or non-paying car? (p,n):";
cin>>ch;
if(ch=='p')
cars.payingcar();
else if(ch=='n')
cars.nopaycar();
else continue;
}
while(ch!='e');
cars.display();
return 0;
}

*/

/*WAP to give an example of message passing.

#include <iostream>
using namespace std;

class student
	{
		int roll;
		public:
				void getdata(int x)
					{
						roll = x;
					}
				void display()
					{
						cout<<"Roll number = "<<roll;
					}
	};
	
	int main()
		{
			student s;
			s.getdata(1);
			s.display();
			return 0; 
	}
			

*/
























// WAP to create an array and find sum of numbers given by user through dynamic
// memory allocation.(new/delete operators).

#include <iostream>
using namespace std;
 int main()
  {
  	int n,sum=0,i;
  	int *p;
  	
  	cout<<"Enter the number of integers to be added: ";
  	cin>>n;
  	
  	p = new int[n];
  	
  	for(i=0;i<n;i++)
  		{
  			cout<<"Enter the number: ";
  			cin>>p[i];
		  }
		  
	for(i=0;i<n;i++)
		{
			sum=sum+p[i];
			  }	  
	cout<<"The sum is: "<<sum;
	delete[]p;
	return 0;		  
  }



































































