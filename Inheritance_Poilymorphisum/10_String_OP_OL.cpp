//10.concatenate the two strings using Operator Overloading 

#include<iostream>
using namespace std;

class concat
{
	//concat &obj;
	string a;	
	
	
	public:
		concat(string q)
		{
			a=q;
		}
		
		concat operator +(concat &obj)
		{
			concat c(obj);
			
			c.a=a+obj.a;
			return c;
		}
		void print()
		{
			cout<<"\n\n\t"<<a;
		}

};
main()
{
	concat C1("Maiz"),C2("Chauhan");
	cout<<"\n\n\t-----------string-1-------------\n\n";
	C1.print();
	cout<<"\n\n\t-----------string-2-------------\n\n";
	C2.print(); 
	concat C3=C1+C2;
	cout<<"\n\n\t-----------string-3-------------\n\n";
	C3.print();
}
