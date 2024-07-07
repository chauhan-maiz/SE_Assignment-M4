/*3. Create a class person having members name and age. Derive a class student having 
member percentage. Derive another class teacher having member salary. Write necessary 
member function to initialize,read and write data. Write also Main function 
(Multiple Inheritance)*/

#include<iostream>
using namespace std;

class person
{
	protected:
		int rollno,age;
		string name;
		
		public:
			void get_value_person()
			{
				cout<<"\n\n\t Enter the rollno: ";
				cin>>rollno;
				
				cout<<"\n\n\t Enter the age: ";
				cin>>age;
				
				cout<<"\n\n\t Enter the name: ";
				cin>>name;
			}
};

class student 
{
	protected:
		int sub[3],total,per;
		
		public:
			void get_value_std()
			{
				total=0;
				for(int i=0;i<3;i++)
				{
					cout<<"Enter the sub["<<i+1<< "marks: ";
					cin>>sub[i];
					total=total+sub[i];	
				}
				per=total/3;
				
			}
			
		

};
class teacher : public person,public student
{
	int salary;
	
	public:
			void get_salary_teacher()
			{
				cout<<"\n\nt Enter the salary: ";
				cin>>salary;
			}
			
			void print_data_teacher()
			{
				cout<<"\n\n\t Student Rollno : "<<rollno;
				cout<<"\n\n\t Student Age: "<<age;
				cout<<"\n\n\t Student Name: "<<name;
				for(int i=0;i<3;i++)
				{
					cout<<"\n\n\t Subject["<<i+1<<"] Marks: "<<sub[i];
				}
				cout<<"\n\n\t Total: "<<total;
				cout<<"\n\n\t Per="<<per;
				cout<<"\n\n\t Teacher Salary: "<<salary;
			}
};
main()
{
	teacher S;
	
	S.get_value_person();
	S.get_value_std();
	S.get_salary_teacher();
	S.print_data_teacher();
}
