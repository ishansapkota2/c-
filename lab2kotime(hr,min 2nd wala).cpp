//WAP having data members hour and min and member function to add two time (hr, min) by Returning object as argument.//

#include <iostream>
using namespace std;

class time
	{
		private: 
				int hour, minute;
		public:
				void input()
					{
						cout<<"Enter hour(s) to be added: ";
							cin>>hour;
						cout<<"Enter the minute(s) to be added: ";
							cin>>minute;
							}		
				void output()
					{
						cout<<"The total time is:"<<hour<<" hrs and "<<minute<<" minutes"<<endl;
								}			
				time sum(time t1, time t2)
					{
						time t;
						
							minute = t1.minute + t2.minute;
							hour = t1.hour + t2.hour + (minute/60);
							minute = minute%60;
							return t;
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
