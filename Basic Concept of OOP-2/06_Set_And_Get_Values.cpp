/*6.create a class called Person that has private member variables for name, age and country. 
Implement member functions to set and get the values of these variables.*/
  
#include<iostream>
using namespace std;
class person
{
	int age;
	string country,name;
	
	public:
			void set_person()
			{
				cout<<"\n\n\t Enter Your Name: ";
				cin>>name;
				
				cout<<"\n\n\t Enter Your Age=";
				cin>>age;
				
				cout<<"\n\n\t Which country belongs to you: ";
				cin>>country;
			}
			void get_person()
			{
				cout<<"\n\n\t Name: "<<name;
				cout<<"\n\n\t Age: "<<age;
				cout<<"\n\n\t Country: "<<country;
			}
			
};
main()
{
	person P;
	P.set_person();
	P.get_person();
}
