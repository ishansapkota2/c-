//call by value//

#include <iostream>
using namespace std;

int sum(int *a ,int *b );//function declaration//
int main()
{ 
	int a=2, b=3;
	int s=sum(&a, &b); //function call//
	cout<<"Sum is : "<<s;
	return 0;
}

int sum(int *x, int *y) //function definition//
{
	return(*x + *y);
}

