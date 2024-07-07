/*6. Write a C++ program to implement a class called Employee 
that has private member variables for name, employee ID, and 
salary. Include member functions to calculate and set salary 
based on employee performance. Using of constructor.*/ 

#include<iostream>
using namespace std;

class Employee
{
	int e_id,e_salary;
	string e_name;	
	
	public:
			Employee(int id,int salary,string name)
			{
				e_id=id;
				e_salary=salary;
				e_name=name;
				
			}
			void calculate_salary()
			{
				int R;
				cout<<"\n\n\t Enter performance rating(out of 5): ";
				cin>>R;
				
				if(R>=4)
				{
					
					e_salary=e_salary*0.15; //15%
				}
				
				else if(R==3)
				{
				
					e_salary=e_salary*0.1; //10%	
				}
				
				
				else if(R==2)
				{
				
					e_salary=e_salary+0.05; //5%	
				}
				
				else if(R==1)
				{
				
					e_salary=e_salary+0.02;	//2%
				}
			}
			void set_salry()
			{
				cout<<"\n\n\t Salary After Performance: "<<e_salary;
			}
			
};
main()
{

	int id,salary;
	string name;
	

	
	cout<<"\n\n\t Enter Employee ID: ";
	cin>>id;
	cout<<"\n\n\t Enter Employee name=";
	cin>>name;	
	cout<<"\n\n\t Enter Employee salary: ";
	cin>>salary;
	

	Employee E(id,salary,name);
	E.calculate_salary();
	E.set_salry();
}
