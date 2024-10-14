/*
2. Define a class to represent a bank account. Include the following members:
-> Data Member:
	-Name of the depositor
	-Account Number
	-Type of Account
	-Balance amount in the account
-> Member Functions:
	-To assign values
	-To deposited an amount
	-To withdraw an amount after checking balance
	-To display name and balance
*/
#include<iostream>
using namespace std;

class Bank_account{
	
	private:
		
		string name ;
		double ac_no;
		string ac_type;
		double balance;
		
	public :
	
		void setvalue(string n,double a,string a_type,double bal)
		{
			name = n;
			ac_no = a;
			ac_type = a_type;
			balance = bal;
		}	
		
		void deposit(double amount)
		{
			cout<<"\n"<<amount<<"Rs credited";
			balance = balance + amount ;		
		}		
		
		void withdraw(double amount)
		{
			if(balance>amount)
			{
				cout<<"\n"<<amount<<"Rs debited";
				balance = balance - amount;
			}
			else
			{
				cout<<"\n Your account balance is ="<<balance;
				cout<<"\n You can not withdraw "<<amount;
			}
		}
		
		void getvalue()
		{
			cout<<"\n Name of depositor = "<<name;
			cout<<"\n Account Number ="<<ac_no;
			cout<<"\n Account type = "<<ac_type;
			cout<<"\n Current balance ="<<balance;
		}
};

int main()
{
	Bank_account b1;
	b1.setvalue("sunny",992423,"Saving account",25000);
	b1.deposit(20000);
	b1.withdraw(25000);
	b1.getvalue();
}
