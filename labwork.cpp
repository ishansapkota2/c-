//WAP to create a class Number having a and b as data members. Using friend function find out which one is greater.//

#include <iostream>
using namespace std;

class number
{
	private:
			int a,b;
	public:
			void input()
			{
			cout<<"Enter the value of a: ";
				cin>>a;
			cout<<"Enter the value of b: ";
				cin>>b;		
			}
			
			friend void great(number n1);
			
	};
	
	void great(number n1)
	{
		if(n1.a>n1.b)
			cout<<n1.a<<"is greater."<<endl;
			
		else
			cout<<n1.b<<" is greater."<<endl;
	}
	
	int main()
	{
		number n2;
			n2.input();
			great(n2);
			return 0;	
		
	}
	
