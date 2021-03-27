/* Program to find if a number is Pallindrome or not
----------------------------------------------------*/

#include <iostream.h>
#include <stdio.h>
using namespace std;
int main()
{
	int n,reverse,original,remainder;
		cout<<"The integer to be checked : ";
			cin>>n;
				original =	n;
		while(n!=0)
				{
					remainder = n % 10;
					reverse = reverse*10 + remainder;
					n = n/10;
				 } 
			cout<<" Reverse of the number is: "<<reverse<<endl;
		if(reverse==original)
			cout<<" The number is Pallindrome.";
		else
			cout<<"The number is not Pallindrome.";
	
	return 0;
}
