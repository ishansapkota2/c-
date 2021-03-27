//WAP having data members hour and min and member function to add two time(hr, min) by Passing object as argument .//


#include <iostream>
using namespace std;

class time
	{
		private: 
				int hour, minute;
		public:
				void input()
					{
						cout<<"Enter hour to be added: ";
							cin>>hour;
						cout<<"Enter the minutes to be	added: ";
							cin>>minute;
							}		
				void output()
					{
						cout<<"The total time is:"<<hour<<" hrs and "<<minute<<"minutes"<<endl;
								}			
				void sum(time t1, time t2)
					{
						 minute = t1.minute + t2.minute;
							hour = t1.hour + t2.hour + (minute/60);
							
							minute = minute%60;
						
							
					}
				 								
};

	int main()
	 {
	 	time x,y,z;
	 		x.input();
	 			y.input();
			z.sum(x,y);
			z.output();
		return 0;		 	
	 }
