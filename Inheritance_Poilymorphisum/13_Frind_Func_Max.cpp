//13.find the max number from given two numbers using friend function

#include<iostream>
using namespace std;

class Max
{
	int a,b;
	
	public:
		void get_value()
		{
			cout<<"\n\n\t Enter the number : ";
			cin>>a;
			
			cout<<"\n\n\tEnter the number : ";
			cin>>b;
		}
		
		friend void find_max(Max M)
		{
			if(M.a>M.b)
				cout<<"\n\n\t a is max";
			else
				cout<<"\n\n\t b is max";
		}
};
main()
{
	Max M;
	
	M.get_value();
	max(M);
	
}
