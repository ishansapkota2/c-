/*FUNCTION OVERLOADING

#include <iostream>
using namespace std;

int area(int x)//area of square
	{
		return (x*x);
		
	}
int area(int x,int y) //area of rectangle
	{
		return (x*y);
		}	
		
float area(float radius)  //area of circle
	{
		return (3.14*radius*radius);
			}		
		
int main()
	{
		int l,b;
		float r;
			cout<<"Calculating area of square "<<endl;
			cout<<"Enter the side of a square: ";
				cin>>l;
			cout<<"Area of the square is: "<<area(l)<<endl;
			cout<<"--------------------------"<<endl;
			cout<<"Calculating the area of rectangle "<<endl;
			cout<<"Enter the length and breadth of the rectangle: ";
				cin>>l>>b;
			cout<<"The area of the rectangle is: "<<area(l,b)<<endl;
			cout<<"--------------------------"<<endl;	
			cout<<"Calculating the area of the circle"<<endl;
			cout<<"Enter the radius of the circle: ";
				cin>>r;
			cout<<"The area of the circle is: "<<area(r)<<endl;
			return 0;	
		}	
		
*/

/*OPERATOR OVERLOADING (BINARY OPERATOR WALA EXAMPLE

#include <iostream>
using namespace std;

class complex{
		private:
				int a,b;
		public:
			void setdata(int x,int y)
				{
					a=x;
					b=y;
					}	
			void showdata()
				{
					cout<<a<<" + "<<b<<"i"<<endl;
				}
			
		//	complex add(complex c)
		//	{
		//		complex t;
		//		t.a=a+c.a;
		//		t.b=b+c.b;
		//		return t;
		//	}
		//yesko alternative way chahi tala ko ho 
		
		complex operator +(complex c) //OPERATOR OVERLOADING
			{
				complex t;
				t.a=a+c.a;
				t.b=b+c.b;
				return t;
			}
};


int main()
	{
		complex c1,c2,c3;
		c1.setdata(3,4);
		c1.showdata();
		c2.setdata(5,6);
		c2.showdata();
		
		//c3 = c1.add(c2)); yesko alternative way tala ko ho 
		c3=c1+c2;
		c3.showdata();
		return 0;
	}

*/

/*WAP to read a complex number, increment real and imaginary part then print using 
//unary(++) operator overloading.

#include <iostream>
using namespace std;

class complex
{
	private:
	 		int real,imag;
	 public:
	 		void setdata()
			 	{
			 		cout<<"Enter the real and imaginary part of a complex number: ";
			 			cin>>real>>imag;
						 }		
			 void showdata()
			 	{
			 		cout<<real<<"+"<<imag<<"i"<<endl;
					 }	
			void operator++()
				{
					++real;
					++imag;
						 }		 
					 
};


int main()
	{
		complex c1;
		cout<<"Enter the complex number: "<<endl;
			c1.setdata();
		cout<<"Complex number before increment is: ";
			c1.showdata();	
	
	++c1;
	
	cout<<"Complex number after increment is: ";
	c1.showdata();
	return 0;
	
	}


*/


/*OPERATOR OVERLOADING USING MEMBER FUNCTION//

#include <iostream>
using namespace std;

class example{
	private:
			int x,y,z;
	public:
		void getdata(int a,int b,int c)
			{
				x=a;
				y=b;
				z=c;
				}
		void display()
			{
				cout<<"x: "<<x<<endl;
				cout<<"y: "<<y<<endl;
				cout<<"z: "<<z<<endl;
							}
		
		void operator -()
			{
				x=-x;
				y=-y;
				z=-z;
							}				
};

int main()
{
	example e;
	e.getdata(5,10,15);
	e.display();
	-e;
	cout<<"After operator overloading :"<<endl;
	e.display();
	return 0;

}

*/

/*OPERATOR OVERLOADING USING FRIEND FUNCTION

#include <iostream>
using namespace std;

class example{
	private:
			int x,y,z;
	public:
		void getdata(int a,int b,int c)
			{
				x=a;
				y=b;
				z=c;
				}
		void display()
			{
				cout<<"x: "<<x<<endl;
				cout<<"y: "<<y<<endl;
				cout<<"z: "<<z<<endl;
							}
		
		friend example operator -(example &r)
			{
				example t;
				t.x=-r.x;
				t.y=-r.y;
				t.z=-r.z;
				return t;
							}				
};

int main()
{
	example e,f;
	e.getdata(5,10,15);
	e.display();
	f=-e;  //  it invokes operator function//
	cout<<"After operator overloading :"<<endl;
	f.display();
	return 0;

}

*/

/*OVERLOADING UNARY ++, --, - USING MEMBER FUNCTION

#include <iostream>
using namespace std;

class counter{
	private:
			int count;
	public:
			counter()
				{
					count=5;
				}
			void display()
				{
					cout<<"Count: "<<count<<endl;
				}
			void operator ++(int)
				{
					count++;
					}	
			void operator --()
				{
				count--;
						}	
			void operator -()				
				{
					count=-count;
				}
};


int main()
{
	counter c1,c2,c3;
	c1++;
	--c2;
	-c3;
	c1.display();
	c2.display();
	c3.display();
	
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



/*OVERLOADING BINARY + OPERATOR USING MEMEBER FUNCTION

#include <iostream>
using namespace std;

class complex{
	int real, imag;
	public:
			complex()
			{
			}
			
			complex(int x,int y)
			{
				real=x;
				imag=y;
			}
			void display()
				{
					cout<<real<<"+ "<<imag<<"i"<<endl;
				}
			complex operator +(complex c)
				{
					complex temp;
					temp.real= real + c.real;
					temp.imag= imag+ c.imag;
					}	
};

int main()
{
	complex c1(3,4),c2(4,5),c3;
	c1.display();
	c2.display();
	c3=c1+c2;// overload operator + function is called
	
	cout<<"Added complex number is: "<<endl;
	c3.display();
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

/*WAP TO GENERATE FIBONACCI SERIES USING ++ INCREMENT OPERATOR OVERLOADING//

#include <iostream>
using namespace std;

class fibo{
		int f1,f2,f3;
		public:
				fibo()
					{
						f1=-1;
						f2=1;
						f3=f1+f2;
					}
				void display()
					{
						cout<<f3<<" ";
						}	
				void operator++()  //operator function
					{
						f1=f2;
						f2=f3;
						f3=f1+f2;
							}		
};

int main()
{
	fibo f;
		int n;
		cout<<"Enter the term of fibonacci series: ";
		cin>>n;
		for(int i=0;i<n;i++)
			{
				f.display();
				++f;  //operator function call
			}
}


*/

/*DYNAMIC MEMORY ALLOCATION BY CONSTRUCTOR AND DESTRUCTOR

#include <iostream>
using namespace std;

class sample{
	int *a;
	int n,i;
	public:
			sample(int x)
				{
					n=x;
				a=new int [n];
				}
			void input()
				{
					cout<<"Enter the values: ";
					for(int i=0;i<n;i++)
						{
							cin>>a[i];
						}
				}
			void display()
				{
					cout<<"The values are: "<<endl;
					for(int i=0;i<n;i++)
						{
							cout<<a[i]<<" ";
						}
				}		
			~sample()
				{
					delete a; 
					}	
					
};	

int main()
{
	int num;
	cout<<"Enter the number of values to be passed: ";
		cin>>num;
	sample e(num);
	e.input();
	e.display();
	return 0;	
}
*/
/*

#include <iostream>
#include <cstring>
using namespace std;

class sample{
	char *name;
	int length;
	public:
			sample()
			{
				length=0;
				name=new char[length+1];
			}
			sample(char *p)
				{
					length=strlen(p);
					name=new char[length+1];
					strcpy(name,p);
				}
			void display()
				{
					cout<<name<<endl;
				}
			void join(sample &a, sample &b)
				{
					length=a.length + b.length;
					delete name;
					name= new char[length+1];
					strcpy(name,a.name);
					strcat(name,b.name);
				}
};


int main()
{
	
 	sample name1("NCIT"), name2("Engineering"),name3("College"),s1,s2;
 		s1.join(name1,name2);
 		s2.join(s1,name3);
 	s1.display();
	s2.display();
}
*/



/*WAP which concatenates 2 string by operator overloading(using dynamic constructor)
#include<iostream>
#include<cstring>
using namespace std;

class sample
{
	char *name;
	int length;
	public:
		sample()
			{
				length=0;
				name=new char[length+1];
			}
		sample(char *p)
			{
				length=strlen(p);
				name=new char[length+1];
				strcpy(name,p);
			}
		void display()
			{
				cout<<name<<endl;
			}
		friend sample operator +(sample &a,sample &b)
			{
				sample temp;
				temp.length=a.length+b.length;
				delete temp.name;
				temp.name=new char[temp.length+1];
				strcpy(temp.name,a.name);
				strcat(temp.name,b.name);
				return temp;
			}
};

int main()
{
	sample s1("NCIT"),s2("College"),s3;
		s1.display();
		s2.display();
		s3=s1+s2;
		s3.display();
	return 0;
}

*/

/*OVERLOADING COMPARISON OPERATOR

#include <iostream>
using namespace std;

class sample{
	int n;
	public:
			sample()
				{	
					n=0;
				}
			
			sample(int x)
				{
					n=x;
				}
			void display()
				{
					cout<<n<<endl;
				
				}
			bool operator <(sample s)
				{
					if(n<s.n)
						return(true);
					else 
						return(false);	
						
				}
		
};

int main()
{
	sample s1,s2(5),s3(6);
	s1.display();
	s2.display();
	s3.display();
	if(s1<s2)		//operator function call
		cout<<"s1<s2"<<endl;
	else
		cout<<"s1 is not less than s2.";
	return 0;		
}

*/

//OVERLOAD ASSIGNMENT OPERATOR (eg: '=','+=','-=')

#include <iostream>
using namespace std;

class sample{
	int n;
	public:
		
			
			sample(int x)
				{
					n=x;
				}
			void display()
				{
					cout<<n<<endl;
				
				}
			void operator =(sample s)
				{
					n=s.n;	
						
				}
			void operator +=(sample p)
				{
					n+=p.n;
					}	
		
};

int main()
{
	sample s1(5),s2(6),s3(7);
	s1.display();
	s2.display();
	s3.display();
	s1=s2;
	s2+=s3;
	s1.display();
	s2.display();
	s3.display();
	return 0;
}









