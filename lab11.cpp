
//WAP TO GENERATE FIBONACCI SERIES USING ++ INCREMENT OPERATOR OVERLOADING//

#include <iostream>
using namespace std;

class fibonacci{
		int f1,f2,f3;
		public:
				fibonacci()
					{
						f1=-1;
						f2=1;
						f3=f1+f2;
					}
				void display()
					{
						cout<<f3<<" ";
						}	
				void operator++()  //operator function
					{
						f1=f2;
						f2=f3;
						f3=f1+f2;
							}		
};

int main()
{
	fibonacci f;
		int n;
		cout<<"Enter the term of fibonacci series: ";
		cin>>n;
		for(int i=0;i<n;i++)
			{
				f.display();
				++f;  //operator function call
			}
}











/*WAP which concatenates 2 string by operator overloading(using dynamic constructor)
#include<iostream>
#include<cstring>
using namespace std;

class sample
{
	char *name;
	int length;
	public:
		sample()
			{
				length=0;
				name=new char[length+1];
			}
		sample(char *p)
			{
				length=strlen(p);
				name=new char[length+1];
				strcpy(name,p);
			}
		void display()
			{
				cout<<name<<endl;
			}
		friend sample operator +(sample &a,sample &b)
			{
				sample temp;
					temp.length=a.length+b.length;
					delete temp.name;
					temp.name=new char[temp.length+1];
					strcpy(temp.name,a.name);
					strcat(temp.name,b.name);
				return temp;
			}
};
int main()
{
	sample s1("NCIT"),s2("College"),s3;
	s1.display();
	s2.display();
	s3=s1+s2;
	s3.display();
	return 0;
}

*/

/*WAP to overload ‘==’ operator to compare if 2 strings are identical or not(dynamically)//

#include <cstring> 
#include <iostream> 
#include <string.h> 
  
using namespace std; 
  

class CompareString { 
  
public: 
    // Classes object of string 
    char str[25]; 
  
    // Parametrized Constructor 
    CompareString(char str1[]) 
    { 
        // Initialize the string to class object 
        strcpy(str, str1); 
    } 
  
   
    int operator==(CompareString s2) 
    { 
        if (strcmp(str, s2.str) == 0) 
            return 1; 
        else
            return 0; 
    } 
  
   
    
  
    
}; 
  
void compare(CompareString s1, CompareString s2) 
{ 
  
    if (s1 == s2) 
        cout << s1.str << " is equal to "
             << s2.str << endl; 
    else { 
        cout << s1.str << " is not equal to "<< s2.str << endl; 
        
    } 
} 
  
// Testcase1 
void testcase1() 
{ 
    // Declaring two strings 
    char str1[] = "Geeks"; 
    char str2[] = "ForGeeks"; 
  
    // Declaring and initializing the class 
    // with above two strings 
    CompareString s1(str1); 
    CompareString s2(str2); 
  
    cout << "Comparing \"" << s1.str << "\" and \""
         << s2.str << "\"" << endl; 
  
    compare(s1, s2); 
} 
  

// Driver code 
int main() 
{ 
    testcase1(); 
   
  
    return 0; 
} 
	
*/

/*Create a class called Length that has data members meter and centimeter.
//Overload + operator to add two objects of class Length. (For example L3 = L1 + L2).
//Also facilitate the operations like L4 = L1 + 5 and L5 = 5 + L4 where L1, L2, L3, 
//L4 and L5 are objects of class Length.


#include <iostream>
using namespace std;

class length{
	int meter, centimeter;
	public:
		length(){
		}
		length(int a,int b)
		{
			meter=a;
			centimeter=b;

		}
		void display()
		{
			cout<<"The length is "<<meter<<" m and "<<centimeter<<"cm"<<endl;
		}
		
		friend length operator+(length, length);
};

length operator+(length x,length y)
	{
		length temp;
			temp.centimeter= x.centimeter+y.centimeter;
				temp.meter= x.meter+y.meter+(temp.centimeter/100);
					
						temp.centimeter= temp.centimeter%100;
						
		return temp;
	}

int main()
	{
		length l1(2,50),l2(2,50),l3,l4,l5;
		cout<<"The first length is: ";
			l1.display();
		cout<<"The second length is: ";
			l2.display();
		l3=l1+l2;
		cout<<"The total time is: ";
			l3.display();		
		return 0;		
	}
*/

/*WAP to overload < operator.

#include <iostream>
using namespace std;

class sample{
	int n;
	public:
			sample()
				{	
					n=0;
				}
			
			sample(int x)
				{
					n=x;
				}
			void display()
				{
					cout<<n<<endl;
				
				}
			bool operator <(sample s)
				{
					if(n<s.n)
						return(true);
					else 
						return(false);	
						
				}
		
};

int main()
{
	sample s1,s2(5),s3(6);
	s1.display();
	s2.display();
	s3.display();
	if(s1<s2)		//operator function call
		cout<<"s1<s2"<<endl;
	else
		cout<<"s1 is not less than s2.";
	return 0;		
}

*/










