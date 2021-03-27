//WAP to store the name, roll, batch amd college of 5 students, wherer all students are of "2076" batch from "NCIT".//

#include <iostream>
using namespace std;
/*Name: Ishan Raj Sapkota
  Roll No. : 191325
  BECE 'DAY' */
  
class student{
	private:
			char name[10];
				int roll;
			static int batch;
			static char college[10];
	public: 
			void input()
			 	{
			 		cout<<"Enter the name of the student: ";
			 			cin>>name;
			 		cout<<"Enter the roll number of the student: ";
					 	cin>>roll;	
				 }
			 void display()
				{
					cout<<"The name of the student is: "<<name<<endl;
					cout<<"The roll number of the student is: "<<roll<<endl;
					cout<<"The batch of the student is: "<<batch<<endl;
					cout<<"The college of the student is: "<<college<<endl; 
				 }	 
	
};

int student::batch=2076;
char student::college[10]={"NCIT"};
int main()
	{
		student s[5];
		int i;
		cout<<"Enter student details"<<endl;
			for(i=0;i<5;i++)
				{
					s[i].input();
				}
			for(i=0;i<5;i++)
				{
					s[i].display();
					}	
		return 0;
	}
