/*3. create a class called Car that has private member variables for company, model, and year. 
 Implement member functions to get and set these variables*/
 
#include<iostream>
using namespace std;

class car
{
	int year;
	string company,model;
	
	public:
		car()
		{
			cout<<"\n\n\t Enter the Company Name: ";
			cin>>company;
			
			cout<<"\n\n\t Enter Car Model=";
			cin>>model;
			
			cout<<"Enter the Year of Car: ";
			cin>>year;		
		}	
		void print();
};

void car :: print()
{
	cout<<"\n\n\t Car Company: "<<company;
	cout<<"\n\n\t Car Model="<<model;
	cout<<"\n\n\t Year of Car="<<year;
}
main()
{
	car C;

	C.print();		
} 
