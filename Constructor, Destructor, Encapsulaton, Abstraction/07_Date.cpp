/*7. Write a C++ program to implement a class called Date that
has private member variables for day, month, and year. Include
member functions to set and get these variables, as well as to
validate if the date is valid.*/

#include<iostream>
using namespace std;

class Date
{
	int day,month,year, temp;
	
	public:
			void get_value()
			{
				cout<<"\n\n\t Enter the days: ";
				cin>>day;
				
				cout<<"\n\n\t Enter the Month: ";
				cin>>month;
				
				cout<<"\n\n\t Enter the Year: ";
				cin>>year;
			}
			void cheack_valid()
			{
				temp=0;
				if(day>=1 && day<=31)
				{
					if(month>=1 && month<=12)
					{
						temp++;	
					}
				}
				
			}
				
			void print_Date()
			{
				if(temp==1)
					cout<<"\n\n\t Date: "<<day<<"-"<<month<<"-"<<year<<" is valid..";	
				else
					cout<<"\n\n\t Date: "<<day<<"-"<<month<<"-"<<year<<" is not valid..";
			}				
			
};
main()
{
	Date D;
	D.get_value();
	D.cheack_valid();
	D.print_Date();
} 
