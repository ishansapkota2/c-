//sWAP to create a class counter that has static data member. Write a necessary member function to increment the count everytime the function is called//
#include <iostream>
using namespace std;
/*Name: ISHANRAJ SAPKOTA
	roll No. 191325
	BECE 'DAY' */

class counter
	{
		private:
			static int c;
		public:
			void display()
				{
					c++;
					cout<<"The call to display function: "<<c<<endl;
				}
	};

int counter::c=0;
 
 int main()
 {
 	counter c1,c2,c3;
	 c1.display();
 	c2.display();
	c3.display();
	return 0;	 	
 }
