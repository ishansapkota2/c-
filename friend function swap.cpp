//WAP to swap the contents private data of 2 different classes using friend function. //

#include <iostream>
using namespace std;

class data2;
class data1	
	{
		private:
				int a;
		public:
				void input()
					{
						cout<<"Enter the value of a: ";
							cin>>a;
					}
				void display()
				 	{
				 		cout<<"The value of a is "<<a<<endl;
					 }	
		friend void swap(data1 x1, data2 x2);		
	};
	
class data2
	{
		private:
				int b;
		public:
				void input()
					{
						cout<<"Enter the value of b: ";
							cin>>b;
					}	
					
				void display()
					{
						cout<<"The value of b is "<<b<<endl;
							}		
		friend void swap(data1 x1, data2 x2);					
	};	
	
	void swap(data1 x1, data2 x2)
		{
			int temp;
			temp = x1.a;
			x1.a = x2.b;
			x2.b = temp;
				cout<<"The value of a is :"<<x1.a<<endl;
				cout<<"The value of b is :"<<x2.b<<endl;
		}
		
	int main()
	{
		data1 x11;
		data2 x22;
			x11.input();
			x22.input();
				cout<<"Before swapping: "<<endl;
			x11.display();
			x22.display();
				cout<<"After swapping: "<<endl;
			swap(x11,x22);
		return 0;			
	}	
