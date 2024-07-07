//1. find the multiplication values and the cubic values using inline function

#include<iostream>
using namespace std;

class pinline
{
	int a;
	
	public:
		void get_num(int j)
		{
			a=j;
		}
		
		 inline int mul_value()
		 {
		 	return a*a;
		 }
		 inline int cubic_value()
		 {
		 	return a*a*a;
		 }
};
main()
{
	pinline I;
		int a,b;
		cout<<"\n\n\t Enter a Number: ";
	 	cin>>a;
	
	
	I.get_num(a);
	int m=I.mul_value();
	cout<<"\n\n\t Multiplication value is: "<<m;
	int c=I.cubic_value();
	cout<<"\n\n\t Cubic value is: "<<c;
}
