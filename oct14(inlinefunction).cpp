/*INLINE FUNCTION//
#include <iostream>
using namespace std;

inline float lbtokg(float lbs)
{
	return (0.453*lbs);
}

int main()
 	{
 		float lbs,kgs;
 			cout<<"Enter the weight in pounds: ";
 				cin>>lbs;
 			kgs = lbtokg(lbs);
			 	cout<<"The weight in kg is: "<<kgs;
		return 0;		 	
		 }	
*/

/*DEFAULT ARGUMENT//

#include <iostream>
using namespace std;

int add(int ,int , int=0 );//yesma z lai default argument banaayera value pass gareko//no. of default argument = 1//

int main()
	{
		int a,b,c;
			cout<<"Enter numbers :";
				cin>>a>>b>>c;
			cout<<"Sum is: "<<add(a,b,c)<<endl;
			cout<<"Sum is: "<<add(a,b)<<endl;//z lai default argument raakhena bhaney yesma error aucha//
		return 0;	
	}
	
int add(int x, int y, int z)
	{
		return(x+y+z);
		}	
*/		

/*FUNCTION OVERLOADING//

#include <iostream>
using namespace std;

void sum(int a, int b)
	{
		cout<<"For Function 1:- Sum is : "<<(a+b)<<endl;
			}		
			
void sum(int a, float b, int c)
	{
		cout<<"For Function 2:- Sum is: "<<(a+b+c)<<endl;
	}

int main()
 {
 	int x,y;
 	float z;
 	cout<<"The numbers are: ";
 		cin>>x>>y>>z;
 	sum(x,y);//function call for 1st function//
 	sum(x, z, y);//function call for 2nd function//
 	return 0;
 	
	 }	

*/

//FUNCTION OVERLOADING//

#include <iostream>
using namespace std;

int area (int);
	int area(int, int)










			
