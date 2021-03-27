/*Write and Explain example program of casting base class pointer to derived class pointer.
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

/*WAP to implement default constructor and destructor in inheritance.


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
				cout<<"Derived class constuctor."<<endl;
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


/*WAP to implement parameterized constructor passing SAME ARGUMENT for base class and derived class.


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

/*WAP to implement parameterized constructor passing DIFFERENT ARGUMENT for base class and derived class.


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


/*Create a class called Rectangle with member data to represent length, breadth and area.
//Use appropriate member functions to read length and breadth from user to calculate area of
//the rectangle. Next create a derived class called Box from the class Rectangle. 
//Use appropriate member functions to read height and to calculate the volume of the box.


#include <iostream>
using namespace std;

class rectangle{
	protected:
			int length,breadth,a;
	public:
			void input()
			{
				cout<<"The length of the rectangle is: ";
					cin>>length;
				cout<<"The breadth of the rectangle is: ";
					cin>>breadth;	
			}
			void area()
				{
					a = length*breadth;
					cout<<"The area of the rectangle is: "<<a<<endl;
						}		
};

class box: public rectangle{
	protected:
			int height;
	public:
			void inputh()
				{
					cout<<"The height of the rectangle is: ";
						cin>>height;
					}	
			void volume()
				{
					cout<<"The volume of the rectangle is:  "<<length*breadth*height;
						}		
};

int main()
{
	box b1;
	b1.input();
	b1.area();
	b1.inputh();
	b1.volume();
	return 0;
}

*/


/*Write base class that ask the user to enter a complex number and derived class adds 
//the complex number of its own with the base. Finally make third class that is friend 
//of derived and calculate the difference of base complex number and its own complex number.


#include <iostream>
using namespace std;

class base{
	protected:
				int real, imaginary;
	public:
			void input()	
				{
					cout<<"Enter the real part of the base class is: ";
						cin>>real;
					cout<<"Enter the imaginary part of the base class is: ";
						cin>>imaginary;	
							}			
};

 class derived: public base{
 	protected:
 			int r1,i1;
 	public:
 			void input1()
 				{
 					cout<<"-----------------------------------------"<<endl;
 					cout<<"Enter the real part of the derived class is: ";
 						cin>>r1;
 					cout<<"Enter the imaginary part of the derived class is:";
					 	cin>>i1;	
				 }
	 		void add()
			 	{
			 		cout<<"the sum is: "<<real+r1<<" + "<<imaginary+i1<<"i"<<endl;
						 }		
						 
		friend class diff; 
 };

class diff{
	protected:
			int r2,i2;
	public:
			void input2()
				{
					cout<<"-------------------------------------------"<<endl;
					cout<<"Enter the real part of the friend class is: ";
						cin>>r2;
					cout<<"Enter the imaginary part of the friend class is: ";
						cin>>i2;	
						}		
						
			void difference(derived d1)
				{
					cout<<"The difference between the : "<<d1.real-r2<<" + "<<d1.imaginary-i2<<"i";
							}			
};

int main()
	{
		derived d1;
		diff d2;
		d1.input();
		d1.input1();
		d1.add();
		d2.input2();
		d2.difference(d1);
		return 0;
	}

*/




//Write base class that asks the user to enter Time(hr, min, sec) and derived class 
//adds the Time of its own with base. Finally make third class that is friend of derived
// and calculate the difference of base class time and its own time.

#include <iostream>
using namespace std;

class base{
	protected:
		int hr1,min1,sec1;
	public:
		void input1()
			{
				cout<<"The hour of base class is :";
					cin>>hr1;
				cout<<"The minutes of base class is: ";
					cin>>min1;
				cout<<"The seconds of the base class is: ";
					cin>>sec1;		
				}	
				
};

class derived1: public base{
	protected:
			int hr2,min2,sec2,hrsum,minsum,secsum;
	public:
			void input2()
				{
					cout<<"--------------------------------"<<endl;
					cout<<"The hour of the derived class is: ";
						cin>>hr2;
					cout<<"The minutes of the derived class is: ";
						cin>>min2;
					cout<<"The seconds of the derived class is: ";
						cin>>sec2;		
						}		
			void add()
				{
					secsum= sec1+sec2;
					minsum= min1+min2+(secsum/60);
					hrsum= hr1+hr2+(minsum/60);
					secsum= secsum%60;
					minsum= minsum%60;
					cout<<"The sum is: "<<hrsum<<"hour(s) "<<minsum<<" minutes and "<<secsum<<" seconds"<<endl; 
				}
			friend class diff;
};

class diff{
		protected:
				int hr3,min3,sec3,hrdiff,secdiff,mindiff;
		public:
				void input3()
					{
						cout<<"----------------------------------"<<endl;
						cout<<"The hour of the friend class is: ";
							cin>>hr3;
						cout<<"The minutes of the friend class is: ";
							cin>>min3;
						cout<<"The seconds of the friend class is: ";
							cin>>sec3; 		
							}		
				void difference(derived1 d1)
					{
						secdiff= d1.sec1-sec3;
						mindiff= d1.min1-min3-(secdiff/60);
						hrdiff= d1.hr1-hr3-(mindiff/60);
						secdiff=secdiff%60;
						mindiff=mindiff%60;
						cout<<"The difference is: "<<hrdiff<<"hour(s) "<<mindiff<<" minutes and "<<secdiff<<" seconds"<<endl; 					
					}
};

int main()
{
	derived1 d1;
	diff diff1;
	d1.input1();
	d1.input2();
	d1.add();
	diff1.input3();
	diff1.difference(d1);
	return 0;
}




/*WAP to create a class student with 2 data members name and roll. Derive a class marks
//from student that has additional data member sessional1, sessional2 to store sessional
//marks. Derive another class result from marks and add sessional marks. Use appropriate 
// member function to read and display data in the class.


#include <iostream>
using namespace std;

class student{
	protected:
			char name[20],roll[3];
	public:
			void input1()
				{
					cout<<"The name of the student is: ";
						cin.getline(name,20);
					cout<<"The roll number of the student is: ";
						cin>>roll;	
						}
			void display1()
				{
					cout<<"Name: "<<name<<endl;
					cout<<"Roll No.: "<<roll<<endl;
						}		
};

class marks: public student{
	protected:
			int sessional1,sessional2;
			
	public:
			void input2()
				{
					cout<<"The marks obtained in session 1st is: ";
						cin>>sessional1;
					cout<<"The marks obtained in session 2nd is: ";
						cin>>sessional2;	
						}		
			void display2()
				{
					cout<<"Marks (session 1st): "<<sessional1<<endl;
					cout<<"marks (session 2nd): "<<sessional2<<endl;
					
							}			
};

class result: public marks{
	protected:
				int s;
	public:
	void  sum()
		{
			s= sessional1+sessional2;
			cout<<"The total marks obtained is: "<<s;
	
};


int main()	
{
	marks m1;
	result r1;
	m1.input1();
	m1.input2();
	m1.display1();
	m1.display2();
	r1.sum();
	return 0;
}

*/











/*WAP to create a class student with 2 data members name and roll. 
//Derive a class marks from student that has additional data member
// sessional1, sessional2 to store sessional marks. Derive another 
//class result from marks and add sessional marks. Use appropriate 
//member function to read and display data in the class.

#include <iostream>
using namespace std;

class student{
	protected:
				char name[20];
				int roll;
	public:
			void input1()
				{
					cout<<"The name of the student is: ";
						cin.getline(name,20);
					cout<<"The roll nuber of the student is: ";
						cin>>roll;	
							}	
			void display1()
				{
					cout<<"Name: "<<name<<endl;
					cout<<"Roll NO.: "<<roll<<endl;
					
										}						
};

class marks: public student{
	protected:
				int sessional1,sessional2;
	public:
			void input2()
				{
					cout<<"The marks obtained in session 1st is: ";
						cin>>sessional1;
					cout<<"The marks obtained in session 2nd is: ";
						cin>>sessional2;	
							}			
			void display2()
				{
					cout<<"Marks (session 1st): "<<sessional1<<endl;
					cout<<"Marks (session 2nd): "<<sessional2<<endl;
								}				
};

class result: public marks{
	protected:
			int total;
		public:
				void totalmarks()
					{
						total= sessional1 + sessional2;
						cout<<"The total marks obtained is: "<<total;
						}	
};

int main()
	{
		
		result r1;
			r1.input1();
			r1.input2();
			r1.display1();
			r1.display2();
			r1.totalmarks();
			return 0;
		
	}

*/



/*Create a class called Student with two member data to represent name and age of the student
//Use member functions to read and print these data. From this class, derive a class called Boarder 
//with a member data to represent room number. Derive another class called DayScholar from the class 
//student with memberdata to represent address of the student. In both derived classes, use member functions to read and print the respective data.

#include <iostream>
using namespace std;

class student{
	protected:
			char name[20];
			int age;
	public:
			void read()
				{
					cout<<"THe name of the student is: ";
						cin.getline(name,20);
					cout<<"Age of the student is: ";
						cin>>age;	
						}		
			void display()
				{
					cout<<"Name: "<<name<<endl;
					cout<<"Age: "<<age<<endl;
							}			
};

class boarder:public student{
	private:
			int roomno;
		public:
				void getroomno()
					{
						cout<<"Enter room no.";
							cin>>roomno;
						}	
				void putroomno()
					{
						cout<<"Room no. is: "<<roomno<<endl;
							}		
};

class dayscholar: public student{
	private:
			char address[20];
	public:
			void getaddress()
				{
					cout<<"The address of the student is: ";
						cin>>address;
						}		
			void putaddress()
				{
					cout<<"Address: "<<address<<endl;
							}			
};

int main()
	{
		boarder b;
		dayscholar d;
		b.read();
		b.getroomno();
		d.getaddress();
		b.display();
		b.putroomno();
		d.putaddress();
		return 0;
		
	}


*/

























































