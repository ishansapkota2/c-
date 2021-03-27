/*WAP to have 2 classes. base class has 3 data members(x,y,z) as private, protected and public 
//respectively and member functions to input() and display() those data members. Derive a class where 
//derived class has its own data member(w) and member function to add the data members.


#include <iostream>
using namespace std;

class base
{
	private: 
			int x;
	protected:
			int y;
	public:
			int z;
			void input()
				{
					cout<<"The value of x is: ";
						cin>>x;
					cout<<"The value of y is: ";
						cin>>y;
					cout<<"The value of z is: ";	
						cin>>z;
						}		
			void display()
				{
					cout<<"x: "<<x<<endl;
					cout<<"y: "<<y<<endl;
					cout<<"z: "<<z<<endl;
				}
};

class derived: public base
{
	int w;
	public:
			void inputw()
				{
					cout<<"The value of w is: ";
					cin>>w;
				 } 
			void add()
				{
					cout<<"The sum of the integers is: "<<w+y+z;
				}
			
};

int main()
	{
		derived d1;
		d1.input();
		d1.display();
		d1.inputw();
		d1.add();
		return  0;
	}
	
*/

/*WAP having two base classes(student, marks) and one derived class(final). Student class takes 
//student name , age, roll no and displays them. Marks class takes subject name and subject marks 
// and displays them. Final class takes semester of student and displays it.


#include <iostream>
using namespace std;

class student{
	char name[20];
	int age,roll;
		public:
			void inputinfo()
				{
					cout<<"The name of the student is: ";
						cin>>name;
					cout<<"The age of the student is: ";
						cin>>age;
					cout<<"The roll number of the student is: ";
						cin>>roll;		
				}
			void displayinfo()
				{
					cout<<"Name: "<<name<<endl;
					cout<<"Age: "<<age<<endl;
					cout<<"Roll No.: "<<roll<<endl;
					}	
};

class marks{
	char subject_name[20],subject_marks[3];
		public:
				
				void inputsubject()
					{
						cout<<"The name of the subject: ";
								cin>>subject_name;
							cout<<"Marks obtained: ";	
								cin>>subject_marks;
									
					}
				void displaysubject()
					{
						
								cout<<"The name of the subject is: "<<subject_name<<endl;
								
								cout<<"Marks: "<<subject_marks<<endl;
								
						
					
					}	
};
 
class semester: public student, public marks{
	int sem;
	public:
			void inputsem()
				{
					cout<<"CUrrently, the semester which the student is studying is: ";
						cin>>sem;
				}
			void displaysem()
				{
					cout<<"The semester is: "<<sem<<endl;
					}	
};

int main()
	{
		semester s;
		s.inputinfo();
		s.displayinfo();
		s.inputsubject();
		s.displaysubject();
		s.inputsem();
		s.displaysem();
		return 0;
	}

*/




/*WAP having a base class to assign two variables. Derive 3 classes for calculating sum,
// subtraction and multiplication of the base class data member. 

#include <iostream>
using namespace std;

class B
	{
		protected:
					int x,y;
		public:
				void assign()
					{
						x = 20;
						y = 10;
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



/*WAP having base class to input name and roll number of student and display them.
// Another class to input marks of two terms of a subject and display them. Another
 // class to calculate total of two term marks of student and display them. 


#include <iostream>
using namespace std;

class student
	{
		protected:
				char name[30];
				int roll;
		public:
				void inputinfo()
					{
						cout<<"Enter the name of the student: ";
							cin.getline(name,20);
						cout<<"Enter the roll number of the student: ";
							cin>>roll;	
					}
				
				void displayinfo()
					{
						cout<<"Name: "<<name<<endl;
						cout<<"Roll No.: "<<roll<<endl;
						}	
				
	};

class marks: public student 
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
	
class results: public marks
	{
		int total;
			public:
					void output()
						{
							total= m1 + m2;
							cout<<"Total marks for OOP is: "<<total<<endl;
							
						}
	};	
	
	
int main()
{
	results s;
	s.inputinfo();
	s.getmarks();
	
	cout<<"*--------------------*"<<endl;
	cout<<"Student's record is: "<<endl;
	s.displayinfo();
	s.showmarks();
	s.output();
	return 0;
}
*/



/*WAP to create a class student taking name and roll no and displaying them. 
//Create a class sports for getting score in sports. Another class marks derived 
//from student to get marks of two terms of a subject and display them. Finally a 
//class result from marks and sports to add two terms marks and display them.


#include <iostream>
using namespace std;

class student
	{
		protected:
				char name[30];
				int roll;
		public:
				void inputinfo()
					{
						cout<<"Enter the name of the student: ";
							cin.getline(name,30);
						cout<<"Enter the roll number of the student: ";
							cin>>roll;	
					}
				
				void outputinfo()
					{
						cout<<"Name: "<<name<<endl;
						cout<<"Roll No.: "<<roll<<endl;
						}	
				
	};

class sports 
	{
		protected:
					int score;
		public:
				void inputscore()
					{
						cout<<"Enter the score obtained in sports is: ";
							cin>>score;
								}			
	};	

class marks: public student 
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
	
class results: public marks, public sports  
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
	s.inputinfo();
	s.getmarks();
	s.inputscore();
	cout<<"*--------------------*"<<endl;
	cout<<"Student's record is: "<<endl;
	s.outputinfo();
	s.showmarks();
	s.output();
	return 0;
}

*/


/*WAP to implement virtual base class.

#include <iostream>
using namespace std;

class B{
	protected:
		char name[20];
		int roll;	
};

class D1:virtual public B{};
class D2:virtual public B{};

class D:public D1, public D2{
	public:
			void getdata()
				{
					cout<<"Enter the name: ";
						cin.getline(name,20);
					cout<<"Enter roll number: ";
						cin>>roll;	
					}	
};

int main()
	{
		D d1;
		d1.getdata();
		return 0;
	}

*/




/*WAP to create an abstract class shape. Derive rectangle and triangle class from it.

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


/* WAP to create a class person(abstract class). Derive two classes faculty and student from the class person.

#include <iostream>
using namespace std;

class person{
	protected:
			char name[20], faculty_name[20];
};

class faculty: virtual public person{
	public:
			void facultyname()
				{
					cout<<"THe name of the faculty is:";
						cin.getline(faculty_name,20);
				}
			void displayfaculty()
				{
					cout<<"Faculty: "<<faculty_name<<endl;
				
					}	
};

class student: virtual public person{
	public:
			void inputinfo()
				{
					cout<<"The name of the student is: ";
						cin.getline(name,20);
				}
			void displayinfo()
				{
					cout<<"Name: "<<name<<endl;
					}	
};

int main()
{
	faculty f;
	student s;
	s.inputinfo();
	f.facultyname();
	cout<<"-----------------"<<endl;
	cout<<"STUDENT'S INFO:"<<endl;
	cout<<"-----------------"<<endl;
	s.displayinfo();
	f.displayfaculty();
	return 0;
	
}


*/



/*WAP having a base class to assign two variables. 
//Derive 3 classes for calculating sum, subtraction
// and multiplication of the base class data member.

#include <iostream>
using namespace std;

class B{
	protected:
			int x,y;
	public:
			void assign()
				{
					x=30;
					y=20;
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
				void difference()
					{
						cout<<"The difference is: "<<x-y<<endl;
					}
		};	

class derived3: public B{
	public:
			void product()
				{
					cout<<"The prduct is: "<<x*y<<endl;
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
				d2.difference();
					d3.assign();
					d3.product();
		return 0;			
	}


*/













































