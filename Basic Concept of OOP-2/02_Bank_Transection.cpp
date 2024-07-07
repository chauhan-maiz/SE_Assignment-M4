// Bank trasaction.
#include<iostream>
using namespace std;

class bank_account
{
	private :
		int account_no,bal_amt;
		string depo_name,account_type;
		
	public :
		void get_value()
		{
			cout<<"\n\n\t Enter Depositor Name: ";
			cin>>depo_name;
			
			cout<<"\n\n\t Enter Account Number: ";
			cin>>account_no;
			
			cout<<"\n\n\t Enter Account type: ";
			cin>>account_type;
			
			cout<<"\n\n\t Enter Balance Amount: ";
			cin>>bal_amt;
		}
		
		void deposite_amount()
		{
			int depo_amt;
			cout<<"\n\n\t Enter amount to deposite: ";
			cin>>depo_amt;
			bal_amt=bal_amt+depo_amt;
		}
		
		void Withdraw_amt()
		{
			int wamt;
			cout<<"\n\n\t Your Balance Amount: "<<bal_amt;
			
			cout<<"\n\n\t Enter Amount to Withdraw: ";
			cin>>wamt;
			if(bal_amt>wamt)
				bal_amt=bal_amt-wamt;
			else
				cout<<"\n\n\t Insufficient Balance.";
		}
		
		void print_details()
		{
			cout<<"\n\n\t Depositor Name: "<<depo_name;
			cout<<"\n\n\t Balance Amount: "<<bal_amt;
		}
};

main()
{
	bank_account d;
	
	d.get_value();
	d.deposite_amount();
	d.Withdraw_amt();
	d.print_details();
}
