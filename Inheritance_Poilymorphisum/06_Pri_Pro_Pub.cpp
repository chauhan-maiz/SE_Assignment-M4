//6. show access to Private Public and Protected using Inheritance.



#include<iostream>
using namespace std;

class student
{
	private:
			int roll_no;
			
	
	protected:
			int sub[3];
			int total;	
	
	public:
			string sname;
			
			
			void get_roll_no()
			{
				cout<<"\n\n\t Enter Rollno: ";
				cin>>roll_no;
			}

			void print_roll_no()
			{
				cout<<"\n\n\t Rollno: "<<roll_no;
			}
			
};
class print: public student
{
	public:
		
		void get_marks()
			{
				get_roll_no();
				total=0;
				for(int i=0;i<3;i++)
				{
					cout<<"\n\n\t Enter Subject["<<i+1<<"] Marks: ";
					cin>>sub[i];
					total=total+sub[i];
				}
			}
			
		void get_name()
			{
				cout<<"\n\n\t Enter Name: ";
				cin>>sname;
			}
		void print_data()
		{
		
				print_roll_no();
				cout<<"\n\n\t Name="<<sname;
				for(int i=0;i<3;i++)
				{
					cout<<"\n\n\t Subject["<<i+1<<"] Marks: "<<sub[i];
				}
				cout<<"\n\n\t Total: "<<total;
				
		}
};
main()
{
	print P;
	
	P.get_name();
	P.get_marks();
	P.print_data();
}
