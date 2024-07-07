/*8. Write a C++ program to implement a class called Student that has 
private member variables for name, class, roll number, and marks. 
Include member functions to calculate the grade based on the marks and 
display the student's information. Accept address from each student 
implement using of aggregation*/

#include<iostream>
using namespace std;
class address
{
	public:
		string adr,city;
		
		address(string adr,string city)
		{
			this->adr=adr;
			this->city=city;
		}
};
class student
{
	private :
		address *j;
	public:
		int rollno;
		string name;
		int a[5],clas,total;
		
		student(int rollno,string name,int clas,address *j)
		{
			this->rollno=rollno;
			this->name=name;
			this->clas=clas;
			this->j=j;
		}
		void marks()
		{
			int i;
			total=0;
			for(i=0;i<5;i++)
			{
				cout<<"\n\n\t Enter sub["<<i+1<<"]marks: ";
				cin>>a[i];
				total=total+a[i];
			}
		}
		void print()
		{
			cout<<"\n\n\t rollno: "<<rollno;
			cout<<"\n\n\t Name: "<<name;
			cout<<"\n\n\t class: "<<clas;
				for(int i=0;i<5;i++)
			{
				cout<<"\n\n\t sub["<<i+1<<"]marks: "<<a[i];
			}
		
			cout<<"\n\n\t address: "<<j->adr;
			cout<<"\n\n\t city: "<<j->city;
			}
			
			void grade()
			{
					
			if(total>90)
				cout<<"\n\n\t Grade A";
				
			else if(total<70)
				cout<<"\n\n\t Grade B";
			
			else if(total<50)
				cout<<"\n\n\t Grade c";
				
			}
				
};
main()
{
	address A("kasba","modasa");
	student S(13,"Maiz",12,&A);
	S.marks();
	S.print();
	S.grade();
}
