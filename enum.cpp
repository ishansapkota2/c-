#include <iostream>
using namespace std;

enum days{Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
int main()
{
	days d1, d2;
		d1 = Sunday;
		d2 = Thursday;
			if(d1<d2)//using relational operator
				{
					cout<<"Sunday comes first.";
				}
			else
				{
					cout<<"Thursday comes first.";
				}	 
	return 0;					
}
