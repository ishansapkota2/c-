/*WAP to create a class A and class B having a and b as data members respectively. Create a mult() 
function of class A as friend function of class B. Display the multiplication result.

#include <iostream>
using namespace std;

	class B;
	
	class A
		{
			private:
					int a;		
			public:
					void input()
						{
							cout<<"Enter the value of A: ";
								cin>>a;
						}
					
					void mult(B);//member function of class A//	
				
		}; 
		
	class B
		{
			private:
					int b;
				
			public:
					void input()
					 {
					 	cout<<"Enter the value of B: ";
					 		cin>>b;
					 }
			friend void A::mult(B);//friend function declaration//
		};	
		
	void A::mult(B t)//friend function definition//
		{
			cout<<a<<" * "<<t.b<<" :"<<a*t.b<<endl;
		}
		
	int main()
		{
			A a;
			B b;
				a.input();
					b.input();
				a.mult(b);	
			return 0;
		}
		
*/	

#include
#include
class complex{
	protected:
		float real;
		float img;
	public:
		void getcomplex()
			{
				cout<<"\nEnter real and imaginary numbers:";
					cin>>real>>img;
			}
};
class add_complex:public complex
{
	private:
			float real1;
			float img1;
	public:
			void getnew()
				{
					cout<<"\nEnter real and imaginary numbers:";
					cin>>real1>>img1;
				}
			void add()
			{
				float sum_real;
				float sum_img;
					sum_real=real+real1;
					sum_img=img +img1;
				cout<<"Sum:"<
			}
friend class sub_complex;
};
class sub_complex{
		private:
				float real2;
				float img2;
		public:
				void getnew()
					{
						cout<<"\nEnter real and imaginary numbers:";
						cin>>real2>>img2;
					}
void sub(add_complex c1){
	float diff_real;
	float diff_img;
		diff_real=c1.real-real2;
		diff_img=c1.img -img2;
	cout<<"Difference: "<
}
};

void main(){
clrscr();
add_complex c1;
sub_complex c2;
cout<
c1.getcomplex();
cout<
c1.getnew();
c1.add();
cout<
c2.getnew();
c2.sub(c1);
getch();

}	
