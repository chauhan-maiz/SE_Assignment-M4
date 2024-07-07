//12.swap the two numbers using friend function without using third variable

#include<iostream>
using namespace std;

class Swapp
{
	int a;
	int b;
	
	public:
		void get_value()
		{
			
			cout<<"\n\n\t Enter the Number: ";
			cin>>a;
			cout<<"\n\n\t Enter the Number: ";
			cin>>b;
			
			cout<<"\n\n\t------------Before swapping--------------------";
			
			cout<<"\n\n\t A: "<<a;
			cout<<"\n\n\t B: "<<b;
		}
		
		friend void swap(Swapp S)
		{

			S.a=S.a+S.b;
			S.b=S.a-S.b;
			S.a=S.a-S.b;
			
			cout<<"\n\n\t-------------After Swappin---------------------";
			
			cout<<"\n\n\t A: "<<S.a;
			cout<<"\n\n\t B: "<<S.b;
		}
};
main()
{
	Swapp S;
	
	S.get_value();
	swap(S);
}
