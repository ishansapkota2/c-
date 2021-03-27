//call by reference//

#include <iostream> 
using namespace std;

int main()
{
	int studentage=20; //pre-existing variable//
		int &age = studentage; //reference variable//
			cout<<"Student age is: "<<studentage<<endl;
				cout<<"Age is: "<<age<<endl;
		age= age + 10;
			cout<<"After adding 10 to refernce variable: "<<endl;
				cout<<"Student's age is: "<<studentage<<endl;		
					cout<<"Age is: "<<age<<endl;
	return 0;				
		}
