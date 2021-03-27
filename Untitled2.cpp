#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int a=0,b=1,c,n,i=0;
		cout<<"Enter the number of terms to be displayed in FIBONACCI series: ";/*
		ISHAN RAJ SAPKOTA
		BECE II 'DAY'
		191325
		*/	
		cin>>n;
	for(c=0;c<n;c++)
		{
				if(c<=1)
					i=c;
				else
					{
						i=a+b;
						a=b;
						b=i;	
					}	
			cout<<i<<" ";
		}
		
return 0;
}
		
	
		
