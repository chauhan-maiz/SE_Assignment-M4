//7. illustrates the use of Constructors in multilevel inheritance

#include<iostream>
using namespace std;

class Math
{
	protected:
		int a;
	
	public:
		Math(int x)
		{
			a=x;
		}
		
};
class Arith : public Math
{
	protected:
		int b;
	
	public:
		Arith(int y)
		{
			b=y;
		}
};
class Add : public Arith
{

	
	public:
		void operation()
		{
			cout<<"\n\n\t Addition: "<<a+b;
			cout<<"\n\n\t Subtraction: "<<a-b;
			cout<<"\n\n\t Multiplication: "<<a*b;
			cout<<"\n\n\t Division: "<<a/b;
		}
	
}; 
main()
{
	int w,r;
	cout<<"\n\n\t Enter any Two numbers : ";
	cin>>w>>r;
	
	Math1 a(w);
	Arith b(r);
	Add C;
	C.print();
	
}
