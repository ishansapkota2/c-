//WAP to make a friend function which returns the average of 10 number list stored at a member class. //

#include <iostream>
using namespace std;

class member{

	private: 
			int n[10];
	public:
			void input()
				{
					cout<<"Enter the numbers: ";
						for(int i=0;i<10;i++)
							cin>>n[i];
				}
				
			friend void average(member);//friend function declaration//	
			
};

//friend funciton definition//
void average(member n1)
	{
		float sum=0.0, avg;
			 for(int i=0;i<10;i++)
			 	sum = sum+n1.n[i];	
			 	avg = sum/5;
			 		cout<<"average= "<<avg<<endl;
	}

int main()
{
	member n1;
		n1.input();//member function call//
		average(n1);//friend function call//
	return 0;	
}
