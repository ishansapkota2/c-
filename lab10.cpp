/*Define a class to hold rectangular co-ordinates, i.e. x and y co-ordinates. 
//Let P1 and P2 be the objects of this class where P1 is initialized to (20, 30). 
//Facilitate the operation P2 = P1++ in such a way that the value in P2 is (21, 31) 
//afterward using friend function.

#include <iostream>
using namespace std;

class rectangle{
	private:
			int x,y;
	public:
			
			
			rectangle()
			{
				x=20;
				y=30;
			}
			void display()
				{
					cout<<"x: "<<x<<endl;
					cout<<"y: "<<y<<endl;
				}
			friend rectangle operator++(rectangle &p1,int)
				{
					rectangle temp;
					temp.x++;
					temp.y++;
					return temp;
				}
};

int main()
{
	rectangle P1,P2;
	cout<<"The initial co-ordinate is: "<<endl;
	P1.display();
	P2=P1++;
	cout<<"The final coordinate is: "<<endl;
	P2.display();	
	return 0;
}

*/






/*Overloading unary operator ++,-- and- using friend function .

#include <iostream>
using namespace std;

class counter{
	int count;
	public:
			counter()
				{
					count=10;
				}
			void showdata()
				{
					cout<<"Count: "<<count<<endl;
					}	
			friend void operator++(counter &a,int )
				{
					a.count++;
						}	
			friend void operator--(counter &b)
				{
					--b.count;
								}
			friend void operator-(counter &c)
				{
					c.count=-c.count;
													}									
};

int main()
	{
		counter c1,c2,c3;
		c1++;
		--c2;
		-c3;
		
		c1.showdata();
		c2.showdata();
		c3.showdata();
		return 0;
	}

*/






/*WAP which concatenates 2 strings by operator overloading//

#include <iostream>
#include <cstring>
using namespace std;

class str{
	char s[20];
	public:
			void getdata()
			{
				cin>>s;
			}
			void showdata()
			{
				cout<<"String is: "<<s<<endl;
			}
			str operator+(str x)
			{
				str temp;
				strcpy(temp.s,s);
				strcat(temp.s,x.s);
				return temp;
			}
};

int main()
{
	str s1,s2,s3;
	cout<<"Enter 1st string: ";
		s1.getdata();
	cout<<"Enter 2nd string: ";
		s2.getdata();
	s3=s1+s2;
	cout<<"Concatenated string: ";
		s3.showdata();
	return 0; 	
}


*/





/*WAP to multiply two complex numbers using overloaded * operator
//Complex c1,c2;
//c1=c1*c2;

#include <iostream>
using namespace std;

class complex{
	int real,imag;
	public:
			complex(){
			}
			complex(int x,int y)
				{
					real=x;
					imag=y;
				}
			void display()
				{
					cout<<real<<"+"<<imag<<"i"<<endl;
					}	
			friend complex operator*(complex, complex);		
};

complex operator*(complex a,complex c)
	{
		complex temp;
		temp.real=a.real*c.real;
		temp.imag=a.imag*c.imag;
		return temp;
	}

int main()
{
	complex c1(2,3),c2(6,7);
		cout<<"The first complex number is: ";
			c1.display();
		cout<<"The second complex number is: ";
			c2.display();
		c1=c1*c2;
		cout<<"The required complex number is: ";
			c1.display();
			return 0;			
}


*/





//WAP to add times using overloaded + operator
//Time t1,t2,t3;
//t3=t1+t2;

#include <iostream>
using namespace std;

class time{
	int hr,min,sec;
	public:
		time(){
		}
		time(int a,int b, int c)
		{
			hr=a;
			min=b;
			sec=c;
		}
		void display()
		{
			cout<< hr<<" hrs"<< min<<" minutes and "<<sec<<" seconds"<<endl;
		}
		
		friend time operator+(time, time);
};

time operator+(time x,time y)
	{
		time temp;
			temp.sec= x.sec+y.sec;
				temp.min= x.min+y.min+(temp.sec/60);
					temp.hr= x.hr+y.hr+(temp.min/60);
						temp.sec= temp.sec%60;
						temp.min= temp.min%60;
		return temp;
	}

int main()
	{
		time t1(1,20,30),t2(2,40,10),t3;
		cout<<"The first time is: ";
			t1.display();
		cout<<"The second time is: ";
			t2.display();
		t3=t1+t2;
		cout<<"The total time is: ";
			t3.display();
		return 0;		
	}






























































