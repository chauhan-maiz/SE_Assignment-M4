// Wap to make simple calc.

#include<iostream>
using namespace std;

class calculator
{
	private :
		int n1,n2;
		char choise;
		
	public :
		void get_value()
		{
			cout<<"\n\n\t Enter any two value to make operation: ";
			cin>>n1>>n2;
		}
		
		void get_choise()
		{
			cout<<"\n\n\t---------------Operations---------------";
			cout<<"\n\n\t----------------------------------------";
			
			cout<<"\n\n\t Press '+' to make Addiition";
			cout<<"\n\n\t Press '-' to make subtraction.";
			cout<<"\n\n\t Press '*' to make Multiplication.";
			cout<<"\n\n\t Press '/' to make Division";
			cout<<"\n\n\t Press 'e' to Exit.";
			cout<<"\n\n\t ----------------------------------------";
			
			cout<<"\n\n\t Enter Your Choise: ";
			cin>>choise;
			
		}
		
		void operation()
		{
			if(choise=='+')
				cout<<"\n\n\t Addition: "<<n1+n2;
			else if(choise=='-')
				cout<<"\n\n\t Subtraction: "<<n1-n2;
			else if(choise=='*')
				cout<<"\n\n\t Multiplication: "<<n1*n2;
			else if(choise=='/')
				cout<<"\n\n\t Division: "<<n1/n2;
			else if(choise=='e')
				exit(0);
			else 
				cout<<"\n\n\t Invalid Choise.";
		}
};

main()
{
	calculator o;
	
	o.get_value();
	o.get_choise();
	o.operation();
}
