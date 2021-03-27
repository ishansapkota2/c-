/*Create a class person with data members name, age and address.
//Create another class teacher with data members qualification and department.
// Also create another class student with data member program and semester. 
//Both classes are inherited from the class person. Every class has at least 
//one constructor which uses base class constructor. Create member function 
//showdata() in each to  display the information of the class member.

#include <iostream>
#include<cstring>
using namespace std;

class person{
	char name[15];
	int age;
	char address[20];
	
	public:
			person(char n[20],int a,char addr[20])
				{
					strcpy(name,n);
					age=a;
					strcpy(address,addr);
				}
			
			void showdata()
				{
					cout<<"Name: "<<name<<endl;
					cout<<"Age: "<<age<<endl;
					cout<<"Address: "<<address<<endl;		
				}
						
};

class teacher: public person
{
	char qualification [20];
	char department[20];
	public:
			teacher(char n[20],int a, char addr[20],char q[20],char dpt[20]):person(n,a,addr)
				{
					strcpy(qualification,q);
					strcpy(department, dpt);
				}
			void showdata()
				{
					person::showdata();
					cout<<"Qualification: "<<qualification<<endl;
					cout<<"Department: "<<department<<endl;
					}	
};

class student:public person
{
	char program[20];
	char semester[20];
	public:
		student(char n[20],int a, char addr[20],char prog[20],char sem[20]):person(n,a,addr)
				{
					strcpy(program,prog);
					strcpy(semester,sem);
				}
			void showdata()
				{
					person::showdata();
					cout<<"Program: "<<program<<endl;
					cout<<"Semester: "<<semester<<endl;
				}
};

int main()
	{
		cout<<"Teacher's info: "<<endl;
		teacher t("Rameshwor Pun",41,"Kavrepalanchowk","Engineer","Computer Eng.");
		t.showdata();
		cout<<"-----------------------"<<endl;
		cout<<"Student;s info: "<<endl;
		student s("Sapana Giri",18,"Kathmandu","BECE","Second");
		s.showdata();
		return 0;
	}
*/

/*Question number 2//

#include <iostream>
#include <cstring>
using namespace std;

class student{
	protected:
			char name[20];
			int roll;
	public:
			student(char n[20],int r)
				{
					strcpy(name,n);
					roll=r;
						}
			void display()
				{
					cout<<"Name: "<<name<<endl;
					cout<<"Roll: "<<roll<<endl;
									}					
};


class test:virtual public student{
	protected:
			float sub1,sub2;
	public:
		test(char n[20],int r,float m1,float m2):student(n,r)
			{
				sub1=m1;
				sub2=m2;
					}	
		void display()
			{
				cout<<"Marks for subject 1: "<<sub1<<endl;
				cout<<"Marks for subject 2: "<<sub2<<endl;
							}				
};

class sports: virtual public student{
	protected:	
			float score;
	public:
			sports(char n[20],int r,float sc):student(n,r)
				{
					score=sc;
						}	
			void display()
				{
					cout<<"Sports score: "<<score<<endl;
								}				
};

class result:public test, public sports
	{
		float total;
		public:
			result(char n[20],int r, float m1, float m2, float sc):student(n,r),test(n,r,m1,m2),sports(n,r,sc)
				{
					total=m1+m2+sc;
					}	
			void display()
			{
				cout<<"Total marks: "<<total<<endl;
					}		
	};

int main()
{
	result r("Laxman Shrestha",25,81,82,88);
	r.student::display();
	r.test::display();
	r.sports::display();
	r.display();
	return 0;
}

*/

/*Question number 3

#include <iostream>
#include <cstring>
using namespace std;

class staff{
	protected:
			char name[20],addr[20],post[20];
	public:
		staff(char n[20],char a[20],char p[20])
			{
				strcpy(name,n);
				strcpy(addr,a);
				strcpy(post,p);
					}		
		void display()
			{
				cout<<"Name: "<<name<<endl;
				cout<<"Address: "<<addr<<endl;
				cout<<"Post: "<<post<<endl;
			}
						
};

class non_teaching:virtual public staff
	{
		protected:
				char name2[20],addr2[20],post2[20];
		public:
			non_teaching(char n[20],char a[20],char p[20],char n2[20],char a2[20],char p2[20]):staff(n,a,p)
				{
					strcpy(name2,n2);
					strcpy(addr2,a2);
					strcpy(post2,p2);
				}
			void display()
				{
					cout<<"Name: "<<name2<<endl;
					cout<<"Address: "<<addr2<<endl;
					cout<<"Post: "<<post2<<endl;
							}			
	};

class teaching:virtual public staff
{
	protected:
			char name3[20],addr3[20],dept[20];
	public:
		teaching(char n[20],char a[20],char p[20],char n3[20],char a3[20],char dep[20]):staff(n,a,p)
		{
			strcpy(name3,n3);
			strcpy(addr3,a3);
			strcpy(dept,dep);
					}		
					
		void display()
		{
			cout<<"Name: "<<name3<<endl;
			cout<<"Address: "<<addr3<<endl;
			cout<<"Department: "<<dept<<endl;
						}				
};

class admin:public non_teaching,public teaching
{
	protected:
			char name4[20],addr4[20],post4[20];
			float hours;
	public:
			admin(char n[20],char a[20],char p[20],char n2[20],char a2[20],	char p2[20],
					char n3[20],char a3[20],char dep[20],char n4[20],char a4[20],char p4[20],
					float hrs):staff(n,a,p), non_teaching(n,a,p,n2,a2,p2),teaching(n,a,p,n3,a3,dep)
			{
				strcpy(name4,n4);
				strcpy(addr4,a4);
				strcpy(post4,p4);
				hours=hrs;
			}

			void display()
				{
					cout<<"Name: "<<name4<<endl;
					cout<<"Address: "<<addr4<<endl;
					cout<<"Post: "<<post4<<endl;
					cout<<"Working Hours: "<<hours<<endl;
				}


};

int main()
{
	admin a("Hari","Biratnagar","Co-ordinator","Ram","Pokhara","Lecturer","Pushpa",
			"Hetauda","Computer","Sunita","Butwal","Substitute",33.5);
	cout<<"Staff: "<<endl;
		a.staff::display();
		cout<<endl;
	cout<<"Non-Teaching staff: "<<endl;
	a.non_teaching::display();
	cout<<"-----------------"<<endl;
	cout<<"teaching staff: "<<endl;
	a.teaching::display();
	cout<<"---------"<<endl;
	cout<<"Admin: "<<endl;
	a.admin::display();
	return 0;			
}

*/


/*Question no. 4//

#include <iostream>
#include <cstring>
using namespace std;

class person{
	protected:
			char name[15];
			int code;
	public:
			person(char n[15],int c)
				{
					strcpy(name,n);
					code=c;
						}	
			void display()
				{
					cout<<"Name: "<<name<<endl;
					cout<<"Code: "<<code<<endl;
								}				
};

class admin:public virtual person{
	protected:
			float exp;
	public:
			admin(char n[15],int c,float ex):person(n,c)
				{
					exp=ex;
					
						}
			void display()
				{
					cout<<"No. of years of experience: "<<exp<<endl;
									}					
};

class record: public admin{
	protected:
			long int rec;
	public:
			record(char n[15],int c,float s,float ex,long int r):person(n,c),admin(n,c,ex)
				{
					rec=r;
						}		
			void display()
				{
					cout<<"Record no.: "<<rec<<endl;
				}

};			
	
	
int main()
	{
		record p1("Dipesh",7552,100000,3,8181818);
			cout<<"Information: "<<endl;
			p1.record::display();
			p1.person::display();
			
			p1.admin::display();
			return 0;
	}

*/


//Question no.5//

#include <iostream>
#include <cstring>
using namespace std;

class staff{
	protected:
			char code[10],name[15];
	public:
			void getdata()
				{
					cout<<"Enter staff info.: "<<endl;
					cout<<"Enter code: ";
						cin>>code;
					cout<<"Name: ";
						cin>>name;	
						}		
						
			void showdata()
				{
					cout<<"Staff Info.: "<<endl;
					cout<<"Code: "<<code<<endl;
					cout<<"Name: "<<name<<endl;
							}			
};

class teacher:virtual public staff
	{
		protected:
			char sub[10],pub[15];
		public:
			void getdata()	
				{
					cout<<"Enter teacher's info: "<<endl;
					cout<<"Enter subbject: ";
						cin>>sub;
					cout<<"Enter the name of publication: ";
						cin>>pub;	
						}	
			void showdata()
				{
					cout<<"Teacher's info: "<<endl;
					cout<<"Subject: "<<sub<<endl;
					cout<<"Name of the publication: "<<pub<<endl;
								}				
	};


class typist:virtual public staff
{
	protected:
			float speed;
	public:
			void getdata()
				{
					cout<<"Enter typist's speed: ";
						cin>>speed;
						}		
			void showdata()
				{
					cout<<"Typist's speed: "<<speed<<endl;
							}			
};

class officer:virtual public staff
{
	protected:
			char grade[10];
	public:
			void getdata()
				{
					cout<<"Enter the grade of the officer: ";
						cin>>grade;
						
						}		
			void showdata()
				{
					cout<<"Officer's grade: "<<grade<<endl;
							}			
};


class regular:virtual public typist
{
	protected:
			float wager;
	public:
		void getdata()
			{
				cout<<"Enter the wage for regular typist: ";
					cin>>wager;
					}		
		void showdata()
			{
				cout<<"wage for regular typist: "<<wager<<endl;
			}
						
};


class casual:virtual public typist
{
	protected:
			float wagec;
	public:
			void getdata()
				{
					cout<<"Enter wage for casual typist:  ";
						cin>>wagec;
						}		
			void showdata()
				{
					cout<<"Wage for casual typist: "<<wagec<<endl;
				}
};

int main()
	{
		regular r;
		casual c;
		teacher t;
		officer o;
		r.staff::getdata();
		t.teacher::getdata();
		o.officer::getdata();
		c.typist::getdata();
		r.regular::getdata();
		c.casual::getdata();
		
		cout<<"Entered Information: "<<endl;
		cout<<endl;
		r.staff::showdata();
			cout<<endl;
		t.teacher::showdata();
			cout<<endl;
		o.officer::showdata();
			cout<<endl;
		c.typist::showdata();
			cout<<endl;
		r.regular::showdata();
			cout<<endl;
		c.casual::showdata();
		return 0;					
	}









