#include <iostream>
using namespace std;

class student
{
	private:
		int roll;
		char name[20];
	public: 
		void input();//function declaration//
		void output();		
};

//function definition// 
void student ::input()//"::" yo bhaneko scope resolution operator ho//
	{
		cout<<"Enter the name: ";
			cin>>name;	
		cout<<"Enter your roll number: ";
			cin>>roll;	
	}
	
void student ::output()
	{
		cout<<"The name is: "<<name<<endl;
		cout<<"Roll number is: "<<roll<<endl;
	}
	
int main()
{
	student s;
	s.input();
	s.output();
	return 0;
	}	
