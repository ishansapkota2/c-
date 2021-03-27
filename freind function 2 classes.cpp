/*WAP to create a class abc and another class xyz having a and x as data members respectively. Using friend function for both 
//classes find out which one is greater. */

#include <iostream>
using namespace std;

class abc;//it is needed for pre-function declaration//
class xyz{
	private:
			int x;
	public:
			void input()
				{
					cout<<"Enter the value of class xyz: ";
						cin>>x;
				}
				
			void display()
				{
					cout<<"Value of Class xyz is: "<<x<<endl;
					}	
					
			friend void max(xyz,abc);//friend function declaration//
};

class abc{
	private:
			int a;
	public:
			void input()
				{
					cout<<"Enter the value of class abc: ";
						cin>>a;
				}
			
			void display()
				{
					cout<<"The value of class abc is: "<<a<<endl;
				}
				
			friend void max(xyz, abc);//friend function declaration//	
			
};

void max(xyz p, abc q)//friend function definition//
	{
		if(p.x>q.a)
			cout<<"class xyz data is greater: ";
		
		else 
			cout<<"Class abc data is greater.";	
	}
	
	int main()
		{
			xyz p;
			abc q;
				p.input();
					q.input();
				p.display();
					q.display();
				max(p,q);//value pass garnu parcha i.e p and q//	
			return 0;
		}

