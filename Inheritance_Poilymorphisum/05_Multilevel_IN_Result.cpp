/*5. Assume that the test results of a batch of students are stored in three different classes. 
Class Students are storing the roll number. Class Test stores the marks obtained in two subjects 
and class result contains the total marks obtained in the test. The class result can inherit the 
details of the marks obtained in the test and roll number of students. (Multilevel Inheritance)*/

#include<iostream>
using namespace std;


class Students
{
	protected:
		int rollno;
	
	public:
		void get_rollno()
		{
			cout<<"\n\n\t Enter Rollno: ";
			cin>>rollno;
		}
}; 

class test : public Students
{
	protected:
		int sub1,sub2;
	
	public:
			void get_marks()
			{
				cout<<"\n\n\t Enter subject1 marks: ";
				cin>>sub1;
				
				cout<<"\n\n\t Enter subject2 marks: ";
				cin>>sub2;
			}
};

class result :public test
{
	int total;
	
		public:
				void total_result()
				{
					total=0;
					total=sub1+sub2;
				}
				void print_data()
				{
					cout<<"\n\n\t Rollno: "<<rollno;
					cout<<"\n\n\t subject1 Marks: "<<sub1;
					cout<<"\n\tsubject2 Marks: "<<sub2;
					cout<<"\n\n\t Total marks: "<<total;
				}
};
main()
{
	result R;
	
	R.get_rollno();
	R.get_marks();
	R.total_result();
	R.print_data();
}
