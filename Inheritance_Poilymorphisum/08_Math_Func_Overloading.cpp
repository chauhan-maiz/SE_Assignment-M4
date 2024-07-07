/*8.Mathematic operation like Addition, Subtraction, Multiplication, Division Of two number 
using different parameters and Function Overloading*/

#include<iostream>
using namespace std;

class math
{
	int a,b,c;
	
	public:
		void operation(int x,int y)
		{
			a=x;
			b=y;
			
			cout<<"\n\n\t Adition: "<<a+b;
		}
		
		void operation(int x,float y)
		{
			b=x;
			a=y;
			
			cout<<"\n\n\t Subtraction: "<<a-b;
		}
		
		void operation(float x,int y)
		{
			a=x;
			b=y;

			cout<<"\n\n\t Multiplication: "<<a*b;
		}
		
		void operation(float x,float y)
		{
			a=x;
			b=y;
			
			cout<<"\n\n\t Division: "<<a/b;
		}
}; 
main()
{
	math M;
	
	M.operation(2,2);
	M.operation(8,2.2f);
	M.operation(2.2f,2);
	M.operation(2.2f,2.2f);
}
