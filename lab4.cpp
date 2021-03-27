/*WAP to add two numbers and display the result. Implement:
Default constructor
Parameterized constructor
Copy constructor 

#include <iostream>
using namespace std;
	
class add{
	int x,y,z;
	public:
			add()
			{
				x=1;
				y=2;
			}
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
}	
	
void add::calculate()
{
	z= x + y;
	}	

void add::display()
{
	cout<<"The sum is: "<<z<<endl;
}

int main()
{
	add a;
	add b(5,6);
	add c(b);
	a.calculate();
	a.display();
	b.calculate();
	b.display();
	c.calculate();
	c.display();
	return 0;
}

*/

/*WAP which calculates the subtraction of two complex numbers.
Default constructor
Parameterised constructor
Copy constructor 


#include <iostream>
using namespace std;
	
class diff{
	int x,y,z;
	public:
			diff()
				{
					x=7;
					y=4;
				}
			diff(int a,int b)
			{
				x=a;
				y=b;
			}
			diff(diff &);
			void calculate();
			void display();
};	

diff::diff(diff &p){
	x = p.x;
	y = p.y;
}	
	
void diff::calculate()
{
	z= x - y;
	}	

void diff::display()
{
	cout<<"The difference is: "<<z<<endl;
}

int main()
{
	diff a;
	diff b(6,5);
	diff c(b);
	a.calculate();
	a.display();
	b.calculate();
	b.display();
	c.calculate();
	c.display();
	return 0;
}
*/ 



/*WAP which reads a complex number, copy that to another. Use copy constructor.

#include <iostream>
using namespace std;

class complex
	{
		int r,i;
		public:
				complex(){
				r=10;
				i=20;
			}
				complex (int a, int b)
					{
						r=a;
						i=b;
					}
				complex (complex &);
				void display();
	};
	
	complex::complex(complex &x)
		{
			r= x.r;
			i= x.i;
		
		}
	
	void complex::display()
		{
			cout<<"The complex number is "<<r<<" + "<<i<<"i"<<endl;
		}

	int main()
		{	
			complex c1;
			complex c2(5,6);
			complex c3(c2);
			c1.display();
			c2.display();
			c3.display();
			return 0;
		}

*/



/*WAP which calculates A where A=p(1+r/100)^t and r is 15 in some case. 
//Use constructor for initialization. 

#include <iostream> 
#include <cmath>
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




/*WAP to print object number whenever we create an object.



#include<iostream>
using namespace std;

class object
{
	static int count;
	public:
			object()
				{				
					count++;
					cout<<"This is the object number: "<<count<<endl;
				}
};

int object::count;

int main()
{
	object obj1,obj2,obj3;
	return 0;
}

*/


/*Define a class to represent a bank account. Include the following members:
Data Members:
	Name of the account holder
	Account number
	Balance Amount in the account
Member Functions:
	Open an account
	Deposit and withdraw money
	Display account information
Write a program to test this class for 10 customers


#include <iostream>
using namespace std;

class bank_account
	{
		string name[30], accountnumber;
		static double balance;
		
		
		public:
				 openaccount()
					{
						cout<< "The name of the account holder is: ";
							cin.getline(name,30);
						cout<<"The account number is: ";
							cin>>accountnumber;
						cout<<"The balance is: ";
							cin>>balance;
					}
				void depositandwithdraw()
					{	
						int deposit,z,withdraw,finalbalance=0;
						cout<<"The amount to be deposited is: ";
							cin>>deposit;
						z= deposit+balance;	
						cout<<"The amount after deposition is: "<<z<<endl;
						cout<<"The amount to be withdrawn is: ";
							cin>>withdraw;
						finalbalance = z-withdraw;
						cout<<"The balance after withdrawing is: "<<finalbalance<<endl;		
						}	
						
				 void display()
					{
						
						cout<<"The account information is:"<<endl;
						cout<<"The name of the accountholder is: "<<name<<endl;
						cout<<"The account number is: "<<accountnumber<<endl;
						cout<<"The balance in the account is: "<<finalbalance<<endl;
					}		
};

double bank::balance = 0.0;
int main()
{
	int n=3;
	bank_account c1[n];
	for (int i=0;i<n;i++)
	{
	c1[i].openaccount();
	c1[i].depositandwithdraw();
	c1[i].display();
	}
	return 0;
}

*/



#include <iostream>
using namespace std;

class bank
	{
		string name;
		string number;
		static double amount;
		public:
				void open();
				void deposit();
				void withdraw();
				void info();
	};
double bank::amount = 0.0;
void bank::open()
	{
		
		cout<<"Enter the information required to open a abank account: "<<endl;
		cout<<"Enter name: ";
		getline(cin,name);
		cout<<"Enter account number: ";
		getline(cin,number);
	}
void bank::deposit()
	{
		float balance;
			cout<<"Enter the amount to be deposited: ";
				cin>>balance;
			amount += balance;
	}
void bank::withdraw()
	{
		float blnc;
			cout<<"Enter the amount to be withdrawn: ";
			cin>>blnc;
		amount -= blnc;
	}
void bank::info()
	{
		cout<<"-----------"<<endl;
		cout<<"Account informations:"<<endl;
		cout<<"Name: "<<name<<endl;
		cout<<"Account no: "<<number<<endl;
		cout<<"Balance: Rs. "<<amount<<endl;
	}
int main()
	{
		int n=1;
		bank b[n];
			for(int i=0;i<n;i++)
			{
				b[i].open();
				b[i].deposit();
				b[i].withdraw();
				b[i].info();
			}
	return 0;
	}








































