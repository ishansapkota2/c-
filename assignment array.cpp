/*WAP to vreate a class called employee that has employee name and id. write necessary member function to input data and 
display them. Use array of objects for 5 employees.*/ 

#include <iostream>
using namespace std;

/* Name: ISHAN RAJ SAPKOTA
Roll No.: 191325
BECE 'DAY"*/

class employee
	{
		private:
			char name[20];
				int id;
		public:
				void getdata();//function declaration//
				void showdata();
				
	};
	
	//function definition//
	
	void employee::getdata()
		{
			cout<<"Enter the name of employee: ";
				cin>>name;
			cout<<"Enter the ID of the employee: ";
				cin>>id;	
		
		}
		
	void employee::showdata()
		{
			cout<<"Name: "<<name<<endl;
			cout<<"ID: "<<id<<endl;
		}

	int main()
		{
			employee x[5];
				int i;
			cout<<"Enter the employee's details: "<<endl;
				for(i=0;i<5;i++)
					{
						x[i].getdata();
						}	
			cout<<"The employee's details are:"<<endl;
				for(i=0;i<5;i++)
					{
						x[i].showdata();
								}		
								
			return 0;						
		}
