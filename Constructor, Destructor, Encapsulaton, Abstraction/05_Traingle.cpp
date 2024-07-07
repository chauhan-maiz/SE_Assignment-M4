/*5. Write a C++ program to create a class called Triangle that 
has private member variables for the lengths of its three sides. 
Implement member functions to determine if the triangle is 
equilateral, isosceles, or scalene.*/

#include<iostream>
using namespace std;
class triangle
{

	int l1,l2,l3;
	
	public:
		void get_value(int a,int b,int c)
		{
			l1=a;
			l2=b;
			l3=c;	
		}
		void triangle_side()
		{
		
			if(l1==l2 && l2==l3)
				cout<<"\n\n\t Triangle is Equilateral.";
				
			else if(l1==l2 && l2!=l3)
				cout<<"\n\n\t Triangle is isosceles.";
				
			else if(l1!=l2 && l1!=l3 && l2!=l3)
				cout<<"\n\n\t Triangle is scalene.";	
		}
};
main()
{
	triangle T;
	
	int a,b,c;
	
	cout<<"\n\n\t Enter length1: ";
	cin>>a;
	
	cout<<"\n\n\t Enter length2: =";
	cin>>b;
	
	cout<<"\n\n\t Enter length3: ";
	cin>>c;
	
	T.get_value(a,b,c);
	T.triangle_side();

}
