//4. display Student Mark sheet using Multiple inheritance

#include<iostream>
using namespace std;

class Student
{
	protected:
		int rollno;
		string name;
	
	public:
		void get_student()
		{
			cout<<"\n\n\t Enter Student rollno: ";
			cin>>rollno;
			
			cout<<"\n\tEnter Student Name: ";
			cin>>name;
		}
};
class marks
{
	protected:
		int sub[5],total,per;
		
	public:
		void get_value_marks()
		{
			total=0;
			for(int i=0;i<5;i++)
			{
				cout<<"\n\n\t Enter Subject["<<i+1<<"] Marks: ";
				cin>>sub[i]
				total=total+sub[i];
			}
			per=total/5
		}
		
		
};

class result:public Student,public marks
{
	
	public:
		
		void print_result()
		{
			cout<<"\n\n\t Roll No: "<<rollno;
			cout<<"\n\n\t Name: "<<name;
			for(int i=0;i<5;i++)
			{
				cout<<"\n\n\t Subject["<<i+1<<"] Marks: "<<sub[i];
			}
			cout<<"\n\n\t Total Marks: "<<total;
			cout<<"\n\n\t Percentage: "<<per;
		}
};
main()
{
	result M;
	
	M.get_value_student();
	M.get_value_marks();
	m.print_result();
}
