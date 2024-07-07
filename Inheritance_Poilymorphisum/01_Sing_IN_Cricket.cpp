/*1.class cricketer is declared. Declare a derived class batsman from cricketer. 
Data member of batsman. Total runs, Average runs and best . Member functions input data, 
calculate average runs, Display data. (Single Inheritance).*/

#include<iostream>
using namespace std;

class cricketer
{
	string c_name,c_type;;
	int c_age;
	

	
	public:
			int c_t_match;
			void get_cric()
			{
				cout<<"\n\n\t Enter the name: ";
				cin>>c_name;
				
				cout<<"\n\n\t Enter the age: ";
				cin>>c_age;
				
				cout<<"\n\tEnter the type: ";
				cin>>c_type;
				
				cout<<"\n\t Enter the total matches: ";
				cin>>c_t_match;
			}
				
			void print_cric()
			{
				cout<<"\n\n\t Cricketer Name: "<<c_name;
				cout<<"\n\n\t Cricketer Age: "<<c_age;
				cout<<"\n\n\t Cricketer Type: "<<c_type;
				cout<<"\n\n\t Cricketer total matches: "<<c_t_match;
			}
			
};

class batsman : public cricketer
{
	int b_runs;
	int b_perf;
	int b_Avr_run;
	
	public :
			void get_bats()
			{
				cout<<"\n\n\t Enter the runs: ";
				cin>>b_runs;
			
				cout<<"\n\n\t Enter the Matches of best perform: ";
				cin>>b_perf;
			}
			void print_bats()
			{
				cout<<"\n\n\t Total rund: "<<b_runs;
				
				int a=b_runs/c_t_match;
				cout<<"\n\n\t Average runs: "<<a;
				cout<<"\n\n\t Performance(matches): "<<b_perf;
			}
};

main()
{
	batsman obj;
	obj.get_cric();
	obj.get_bats();
	obj.print_cric();
	obj.print_bats();	
} 
