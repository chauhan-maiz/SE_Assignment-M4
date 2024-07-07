/*4. Write a C++ program to implement a class called Bank Account
that has private member variables for account number and balance.
Include member functions to deposit and withdraw money from the
account.*/

#include<iostream>
using namespace std;
class Bank_Account
{
	int Account_no,Bal,Depo,With;
	
	public:
		
			void get_value()
			{
					cout<<"\n\n\t Enter Account Number: ";
					cin>>Account_no;
				
					cout<<"\n\n\t Enter Account Balance: ";
					cin>>Bal;

			}
			
			friend void print_calcu(Bank_Account A)
			{
				cout<<"\n\n\t Account Number: "<<A.Account_no;
				cout<<"\n\n\t Account Balance="<<A.Bal;
				cout<<"\n\n\t Enter Deposit Money: ";
				cin>>A.Depo;	
				A.Bal=A.Bal+A.Depo;
				cout<<"\n\n\t Account Balance="<<A.Bal;
				cout<<"\n\n\t Enter withdrawal money: ";
				cin>>A.With;
				A.Bal=A.Bal-A.With;
				cout<<"\n\n\t Account Balance="<<A.Bal;
						
			}	
}; 
main()
{
	Bank_Account A;
				
	A.get_value();
	print_calcu(A);
}
