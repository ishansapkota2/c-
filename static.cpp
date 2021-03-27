//static data member
#include <iostream>
using namespace std;

class counter
	{
		private:
			static int c;//default value 0 huncha//class variable ni bhancha//throughout the program access garna milcha//object-independent//outside the class define garnu parcha//
			int a;//garbage value assign bhaako huncha//instance member variable//
		public:
			void input()
				{
					cout<<"Enter the value of a: "<<endl;
						cin>>a;
					cout<<"Enter the value of c: "<<endl;
						cin>>c;	
				}
			
			 void output()
			{
				cout<<"The value of 'a' is: "<<a<<endl;
				cout<<"The value of 'c' is: "<<c<<endl;
			}		
	};
int counter::c=0;
 
 int main()
 {
 	counter c1,c2;
	 c1.input();
	 	c2.input();
	 c1.output();
	 	c2.output();
	return 0;	 	
 }
