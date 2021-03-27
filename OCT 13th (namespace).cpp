#include <iostream>
using namespace std;

namespace rectangle 
{
	int width;
	int height;
	void area();//function declaration//
}

//function definition//
void rectangle::area()
{
	cout<<"The area is: "<<width*height<<endl;
}

int main()
{
	rectangle::width = 10;
	rectangle::height = 5;
	rectangle::area();//function call//
	return 0;
}
