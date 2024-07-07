//2. Addition, Subtraction, Division,Multiplication using constructor.

#include<iostream>
using namespace std;

class calc
{
	int a,b;
	
	public:
		calc()
		{
			cout<<"\n\n\t Enter Any Two Numbers: ";
			cin>>a>>b;		
		}	
		void Add()
		{
			cout<<"\n\n\t Addition: "<<a+b;
		}
		void Sub()
		{
			cout<<"\n\n\t Subtraction: "<<a-b;
		}
		void Mul()
		{
			cout<<"\n\n\t Multiplication: "<<a*b;
		}
		void Division()
		{
			cout<<"\n\n\t Division: "<<a/b;
		}
};
main()
{
	calc C;
	
	C.Add();
	C.Sub();
	C.Mul();
	C.Division();
	
}
