//WAP to create a class student that has name and roll number. Write a necessary member function to input data and display them.//
					//INSIDE OF FUNCTION//



#include <iostream>
using namespace std;
/* Name: ISHAN RAJ SAPKOTA
Roll No.: 191325
BECE 'DAY"*/
class student
{
	private:
		int roll;
		char name[20];
	public: 
		void input()
				{
				cout<<"Enter the name: ";
					cin>>name;	
				cout<<"Enter your roll number: ";
					cin>>roll;	
					
		}
		void output()
			{
		
			cout<<"Name is: "<<name<<endl;
			cout<<"Roll no. is: "<<roll<<endl;
			
	
			}
		

};
	
				
int main()
{
	student s;
	s.input();
	s.output();
	return 0;
	}	
