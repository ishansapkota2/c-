#include <iostream>
using namespace std;

class add
{
	private:
		int a,b;
	public:
	add(); //constructor declaration//	
	void calculate();
	void display();
};
	add::add()//constructor definition//
		{
			x=5;
			y=6;
		}
		
	void add::calculate()
		{
			z=x+y;
			}
			
	void add::display()
		{
			cout<<z;
			}		
int main()
{
	add x;
	x.calculate();
	x.display();
	return 0;	
}
