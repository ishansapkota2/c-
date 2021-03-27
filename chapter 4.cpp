/*DERIVED CLASS with PUBLIC access specifier
#include <iostream>
using namespace std;

class B
	{
		private:
				int x;
		protected:
				int y;
		public:
				int z;
			void getdata()
					{
						cout<<"Enter x,y,z: ";
						cin>>x;
						cin>>y;
						cin>>z;	
					}		
			void showdata()
				{
					cout<<"x = "<<x<<endl;
					cout<<"y = "<<y<<endl;
					cout<<"z = "<<z<<endl;
							}			
				
	};
	
class D : public B
	{
		private:
				int k;
		public:
			void getk()
				{
					cout<<"Enter the value of k: ";
					cin>>k;
						}
			void output()
			{
				int s;
				s = y + z + k;
				cout<<"The sum is: "<<s;	
					}					
		
		};	
int main()
	{
		D d1;
		d1.getdata();
		d1.getk();
		d1.showdata();
		d1.output();
		return 0;
   	 }

*/


/*PRIVATE INHERITAANCE//

#include <iostream>
using namespace std;

class B{
	private:
			int x;
	protected:
			int y;
	public:
			void getdata();
			void showdata();				
};

class D:private B
	{
		private:
				int z;
		public:
				void input();
				void output();		
	};
	
void B::getdata()
	{
		cout<<"Enter the value of x: ";
			cin>>x;
		cout<<"Enter the value of y: ";
			cin>>y;
		}	
void B::showdata()
	{
		cout<<"x= "<<x<<endl;
		cout<<"y= "<<y<<endl;
			}		
			
void D::input()
	{
		getdata();
		cout<<"ENter the value of z: ";
		cin>>z;
				}			
			
void D::output()
	{
		int f;
		f = y + z;
		cout<<"y + z ="<<f;
				}		
			
int main()
	{
		D d1;
		//d1.getdata();//its is an error because it is a private data
		d1.input();//it runs
		//d1.showdata();//error
		d1.output();
		}	

*/

/*SINGLE INHERITANCE//

#include <iostream>
using namespace std;

class B{
	int a;
	public:
			int b;
			void setab();
			int geta();
		
};

class D:public B{
	int c;
	public:
			void mul();
			void display();
};

void B::setab()
	{
		cout<<"Enter the value of a: ";
			cin>>a;
		cout<<"Enter the value of b: ";
			cin>>b;	
	}

int B::geta()
	{
		return a;	
	}

void D::mul()
	{
		c = geta()*b;
	}

void D::display()
	{
		cout<<"The value of a: "<<geta()<<endl;
		cout<<"THe value of b: "<<b<<endl;
		cout<<"The value of c: "<<c;
	}
	
int main()
	{
		D d1;
			d1.setab();

			d1.mul();
			d1.display();
			return 0;
			
		}	

*/

/*MULTIPLE INHERITANCE//

#include <iostream>
using namespace std;

class base1
	{
		protected: 
					int m;
		public:
				void getm(int x)
					{
						m = x;
					}			
	};

class base2
	{
		protected:
					int n;
		public:
				void getn(int y)
					{
						n = y;
					}			
		
	};

class derived:public base1, public base2
	{
		public:
				void display()
					{
						cout<<"m: "<<m<<endl;
						cout<<"n: "<<n<<endl;
						cout<<"m + n: "<<m+n<<endl;
					}
				
	};

int main()
{
	derived d1;
	d1.getm(12);
	d1.getn(20);
	d1.display();
	return 0;
}
*/


/*HIERARCHICAL INHERITANCE

#include <iostream>
using namespace std;

class B
	{
		protected:
					int x,y;
		public:
				void assign()
					{
						x = 15;
						y = 9;
						}			
	};
	
class derived1: public B
	{
		public:
				void sum()
					{
						cout<<"The sum is: "<<x+y<<endl;
					}
		};	

class derived2: public B
	{
		public:
				void diff()
					{
						cout<<"The difference is: "<<x-y<<endl;
					}
			
	};
	
class derived3: public B
	{
		public:
				void mul()
					{
						cout<<"The product is: "<<x*y<<endl;
					}
		};	

int main()
	{
		derived1 d1;
		derived2 d2;
		derived3 d3;
		d1.assign();
		d1.sum();
			d2.assign();
			d2.diff();
				d3.assign();
				d3.mul();
		return 0;
	}
*/

/*MULTI LEVEL INHERITANCE//

#include <iostream>
using namespace std;

class base
{
	protected:
				int a,b;
	public:
			void assign()
				{
					a = 10;
					b = 12;
					}			
};

class derived1: public base
	{
		protected:
					int s;
		public:
				void sum()
					{
						s = a + b;
						cout<<"a + b: "<<a+b<<endl;
					}			
	};
	
class derived2: public derived1
	{
		public:
				void result()	
					{
						cout<<"The value of s after multiplying by 2 is: "<<2*s<<endl;
					}
	
	};

int main()
	{
		derived2 d2;
		d2.assign();
		d2.sum();
		d2.result();
		return 0;
	}

*/

/*HYBRID INHERITANCE//

#include <iostream>
using namespace std;

class student
	{
		protected:
				char name[30];
				int roll;
		public:
				void getdata()
					{
						cout<<"Enter the name of the student: ";
							cin>>name;
						cout<<"Enter the roll number of the student: ";
							cin>>roll;	
					}
				
				void showdata()
					{
						cout<<"Name: "<<name<<endl;
						cout<<"Roll No.: "<<roll<<endl;
						}	
				
	};

class sports //ma'am le deko example ko B2
	{
		protected:
					int score;
		public:
				void getscore()
					{
						cout<<"Enter the score obtained: ";
							cin>>score;
								}			
	};	

class marks: public student //maa'am le deko example ko D1
	{
		protected:
					int m1,m2;
		public:
				void getmarks()
					{
						cout<<"Enter 1st term marks of OOP: ";
							cin>>m1;
						cout<<"Enter 2nd term marks of OOP: ";
							cin>>m2;	
								}	
				void showmarks()
					{
						cout<<"The  marks for 1st term of OOP is: "<<m1<<endl;
						cout<<"The marks for 2nd term of OOP is: "<<m2<<endl;
											}						
	};
	
class results: public marks, public sports  //ma'am le deko example ko D2
	{
		int total;
			public:
					void output()
						{
							total= m1 + m2;
							cout<<"Total marks for OOP is: "<<total<<endl;
							cout<<"THe score for sports is: "<<score<<endl;
						}
	};	
int main()
{
	results s;
	s.getdata();
	s.getmarks();
	s.getscore();
	cout<<"*--------------------*"<<endl;
	cout<<"Student's record is: "<<endl;
	s.showdata();
	s.showmarks();
	s.output();
	return 0;
}

*/


/*MULTI PATH INHERITANCE//

#include <iostream>
using namespace std;

class B{
	protected:
			int data;
};

class D1:virtual public B
	{
		
	};

class D2:virtual public B
	{
			
	};

class C: public D1, public D2{
	public:
			void showdata()
				{
					data = 10;
					cout<<"Data is: "<<data;
				}
				
};


int main()
	{
		C c1;
		c1.showdata();
		return 0;
	}


*/

/*ABSTRACT CLASS

#include <iostream>
using namespace std;

class shape  //abstract class
{
	protected:
			int width;
			int height;
	public:
			virtual int getarea()=0;  //pure virtual function
			void setwidth(int w)			
				{
					width = w;
				}
			void setheight(int h)
				{
					height = h;
					}				
};

class rectangle: public shape
{
	public:
			int getarea()
				{
					return (width*height);
					}	
};

class triangle: public shape
{
	public:	
			int getarea()
				{
					return (width*height)/2;
				}
};		

int main()
{
	rectangle r;
		triangle t;
	r.setwidth(5);
	r.setheight(2);
	cout<<"Area of the rectangle is: "<<r.getarea()<<endl;
		t.setwidth(4);
		t.setheight(6);
		cout<<"Area of the triangle is: "<<t.getarea()<<endl;
	return 0;	
}

*/


/*CASTING BASE CLASS POINTER TO DERIVED CLASS POINTER

#include <iostream>
using namespace std;

class B
{
	public:
			int b;
			void show()
				{
					cout<<"b: "<<b<<endl;
						}		
};

class D: public B
{
	public:
			int d;
			void show()	
				{
					cout<<"b:"<<b<<endl;
					cout<<"d: "<<d<<endl;
				}
};

int main()
{
	//for base class
	B *bptr;  // base class pointer//
	B base;   //object of base class
	bptr=&base; //passing the address//
	bptr->b=100;
	cout<<"BPTR points to the object of base class: "<<endl;
	bptr->show();
	
	//for derived class 
	D derived;
	bptr=&derived; //pointer of base class passing value in address of object of derived class//
	bptr->b=200;
	
	//yo error huncha because bptr le base class ko data member ra member function lai matra point garna 
	//milcha
	//bptr->d=600;
	//bptr->show();
	//return 0;
	

	D *dptr;
	dptr=&derived;
	dptr->d=500;
	cout<<"---------------------------------------------"<<endl;
	cout<<"DPTR points to the object of derived class: "<<endl;
	dptr->show();
	
	cout<<"-----------------------------"<<endl;
	cout<<"Using pointer type casting"<<endl;
	((D*)bptr)->d=1000; //casting bptr to class D 
	((D*)bptr)->show();
	return 0;
}

*/


/*AMBIGUITY IN SINGLE INHERITANCE

#include <iostream>
using namespace std;

class A{
	public:
			void display()
				{
					cout<<"This is class A."<<endl;
				}
};

class B:public A{
	public:
			void display()
				{
					cout<<"This is class B."<<endl;
				}
};	

int main()
	{
		B b;
		b.A::display();
		b.B::display();
		return 0;
	}

*/


/*AMBIGUITY IN MULTIPLE INHERITANCE

#include <iostream>
using namespace std;

class A{
	public:
		virtual void display()
				{
					cout<<"This is class A."<<endl;
				}
};

class B{
	public:
			void display()
				{
					cout<<"This is class B."<<endl;
				}
};	

class D: public A, public B{
	public:
			void display()
				{
					A::display();
					B::display();
				}
};
int main()
	{
		
		D d;
		
		d.display();
		return 0;
	}

*/

/*CONSTRUCTOR AND DESTRUCTOR IN INHERITANCE//

#include <iostream>
using namespace std;

class B
{
	public:
			B()
			{
				cout<<"Base class constructor."<<endl;
				}	
			~B()
				{
					cout<<"Base class destructor."<<endl;
					}	
};

class D:public B
{
	public:
			D()
			{
				cout<<"Derived class ocnstuctor."<<endl;
			}
			~D()
			{
				cout<<"Derived class constructor."<<endl;
			}
};


int main()
{
	D d;
	return 0;
}

*/


/*PARAMETERIZED CONSTRUCTOR PASSING SAME ARGUMENT FOR BASE AND DERIVED CLASS//

#include <iostream>
using namespace std;

class B{
	int x;
	public:	
			B(int n)
				{
					x=n;
					cout<<"Base class constructor."<<endl;
					cout<<"Value of x is: "<<x<<endl;
				}
};

class D:public B{
	int y;
	public:
			D(int m):B(m)
				{
					y=m;
					cout<<"Derived class constructor."<<endl;
					cout<<"Value of y is: "<<y<<endl;
				}
};

int main()
{
	D d(20);
	return 0;
}

*/

/*PARAMETERIZED CONSTRUCTOR PASSING DIFFERENT ARGUMENT FOR BASE AND DERIVED CLASS//

#include <iostream>
using namespace std;

class B{
	int x;
	public:	
			B(int n)
				{
					x=n;
					cout<<"Base class constructor."<<endl;
					cout<<"Value of x is: "<<x<<endl;
				}
};

class D:public B{
	int y;
	public:
			D(int m,int n):B(n)
				{
					y=m;
					cout<<"Derived class constructor."<<endl;
					cout<<"Value of y is: "<<y<<endl;
				}
};

int main()
{
	D d(20,10);
	return 0;
}

*/


//HAS-A rule
#include <iostream>
using namespace std;

class A{
	int x;
	public:
		A()
			{
				x=5;
			}
		void displayx()
			{
				cout<<"x: "<<x<<endl;
				}	
};

class B{
	int y;
	A a;
	public:
			B()
			{
				y=50;
			}
			void displayy()
			{
				a.displayx();
				cout<<"y: "<<y<<endl;
			}
};

int main()
	{
		B b;
		b.displayy();
		return 0;
	}























