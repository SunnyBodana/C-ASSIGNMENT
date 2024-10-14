//1. WAP to create simple calculator using class

#include <iostream>
using namespace std;

class calculator{
	
	public:
		
		void addition()
		{
			int num1 , num2 , result;
			cout<<"\nEnter the first number:";
			cin>>num1;
			
			cout<<"\nEnter the second number:";
			cin>>num2;
			
			result = num1 + num2;
			
			cout<<"\nAddition of num1 and num2 = "<<result;
		}
		
		void subtraction()
		{
			int num1, num2, result;
			cout<<"\nEnter the first number:";
			cin>>num1;
			
			cout<<"\nEnter the second number:";
			cin>>num2;
			
			result = num1 - num2;
			
			cout<<"\nSubtraction of num1 and num2 = "<<result;
		}
		
		void multiplication()
		{
			int num1, num2 , result;
			cout<<"\nEnter the first number:";
			cin>>num1;
			
			cout<<"\nEnter the second number:";
			cin>>num2;
			
			result = num1 * num2;
			
			cout<<"\nMultiplication of num1 and num2 ="<<result;
		}
		
		void division()
		{
			int num1 , num2, result;
			cout<<"\nEnter the first number:";
			cin>>num1;
			
			cout<<"\nEnter the second number:";
			cin>>num2;
			
			result = num1 / num2;
			
			cout<<"\nDivision of num1 and num2 ="<<result;
		}
};

int main()
{
	calculator c1;
	
	c1.addition();
	c1.division();
	c1.multiplication();
	c1.subtraction();
	
	return 0;
}
