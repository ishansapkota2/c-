/*DERIVED CLASS with PUBLIC access specifier
#include <iostream>
using namespace std;

class B
	{
		private:
				int x;
		protected:
				int y;
		public:
				int z;
			void getdata()
					{
						cout<<"Enter x,y,z: ";
						cin>>x;
						cin>>y;
						cin>>z;	
					}		
			void showdata()
				{
					cout<<"x = "<<x<<endl;
					cout<<"y = "<<y<<endl;
					cout<<"z = "<<z<<endl;
							}			
				
	};
	
class D : public B
	{
		private:
				int k;
		public:
			void getk()
				{
					cout<<"Enter the value of k: ";
					cin>>k;
						}
			void output()
			{
				int s;
				s = y + z + k;
				cout<<"The sum of y,z and k is : "<<s;	
					}					
		
		};	
int main()
	{
		D d1;
		d1.getdata();
		d1.getk();
		d1.showdata();
		d1.output();
		return 0;
   	 }


*/





//PRIVATE INHERITAANCE//

#include <iostream>
using namespace std;

class B{
	private:
			int x;
	protected:
			int y;
	public:
			void getdata();
			void showdata();				
};

class D:private B
	{
		private:
				int z;
		public:
				void input();
				void output();		
	};
	
void B::getdata()
	{
		cout<<"Enter the value of x: ";
			cin>>x;
		cout<<"Enter the value of y: ";
			cin>>y;
		}	
void B::showdata()
	{
		cout<<"x= "<<x<<endl;
		cout<<"y= "<<y<<endl;
			}		
			
void D::input()
	{
		getdata();
		cout<<"ENter the value of z: ";
		cin>>z;
				}			
			
void D::output()
	{
		int f;
		f = y + z;
		cout<<"y + z ="<<f;
				}		
			
int main()
	{
		D d1;
		//d1.getdata();//its is an error because it is a private data
		d1.input();//it runs
		//d1.showdata();//error
		d1.output();
		}	







/*PROTECTED INHERITANCE//

#include <iostream>
using namespace std;

class B{
	private: 
			int x;
	protected:
			int y;	
	public:

			void getdata();
			void showdata();		
};

class D:protected B
	{
		private:
				int z;
		public:
				void input();
				void output();		
	};
	
void B::getdata()
	{
		cout<<"Enter the value of x: ";
			cin>>x;
		cout<<"Enter the value of y: ";
			cin>>y;
			
	}

void B::showdata()
	{
		cout<<"x= "<<x<<endl;
		cout<<"y= "<<y<<endl;
		
	}


void D::input()
	{
		getdata();
		int z;
		cout<<"The value of z: ";
			cin>>z;
	}

void D::output()
	{
		int sum;
			sum =y + z;
			cout<<"The sum is: "<<sum;
	}

int main()
	{
		D d1;	
		d1.input();
		d1.output();
		return 0;
	}
*/

