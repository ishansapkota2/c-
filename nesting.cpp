#include <iostream>
using namespace std;
class student 
{
	private:
		char name [20];
		int roll;
	public:
		void input();
		void output();	
};


	void student::input()
	{
		cout<<"Name: ";
			cin>>name;
		cout<<"Roll No.: ";
			cin>>roll;
	}
	
	void student::output()
	{
		cout<<"Name: "<<name<<endl;
		cout<<"Roll No.: "<<roll<<endl;
		
	}
	
	int main()
	{
		student s1[3];
			int i;
				cout<<"Enter the details- "<<endl;
					for(i=0;i<3;i++)
						{
							s1[i].input();
						}
				cout<<"The details of the student are: "<<endl;
					for(i=0;i<3;i++)
						{
							s1[i].output();
						}	
		return 0;
	}
