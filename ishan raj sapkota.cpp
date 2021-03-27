#include <iostream>
using namespace std;

class sample{
	int r;
	public:
			void input();
			void display();
};
void sample::input(){
	cout<<"Enter the number to be inputted: ";
		cin>>r;
}
void sample::display(){
		cout<<"The number is: "<<r;
}

int main()
	{
		sample i;
		i.input();
		i.display();
		return 0; 
	}
