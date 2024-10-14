/*
	4. Write a C++ program to implement a class called Bank Account that has
	private member variables for account number and balance. Include
	member functions to deposit and withdraw money from the account.
*/

#include <iostream>
using namespace std;

class Bank_account{
	
	private :
		
		double account_number;
		double balance;
		
	public :
		
		void setvalue(double acc_no, double bal)
		{
			account_number = acc_no;
			balance = bal;
		}
		
		void deposit(double amount)
		{
			cout<<amount<<"Rs.credited"<<endl;
			balance = balance + amount ;
		}
		
		void withdraw(double amount)
		{
			if(balance > amount)
			{
				cout<<amount<<"Rs.debited";
				balance = balance-amount ;
			}
			else
			{
				cout<<"\n Your account balance is ="<<balance;
				cout<<"\n You can not withdraw :"<<amount;
			}
		}
		
		void getvalue()
		{
			cout<<"\n Bank account no ="<<account_number;
			cout<<"\n Current Balance = "<<balance;
		}
};

int main()
{
	Bank_account b1;
	b1.setvalue(25052,20000);
	b1.deposit(20000);
	b1.withdraw(35000);
	b1.getvalue();
	
	return 0;
}

