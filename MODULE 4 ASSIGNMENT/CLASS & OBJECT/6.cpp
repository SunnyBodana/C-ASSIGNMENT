/*
	6. Write a C++ program to create a class called Person that has private
	member variables for name, age and country. Implement member
	functions to set and get the values of these variables.
*/

#include <iostream>
using namespace std;

class Person{
	
	private :
		
		string name ;
		double age ; 
		string country;
		
	public :
		
		void setvalue(string n, double ag, string con)
		{
			name = n;
			age = ag;
			country = con;
		}
		
		void getvalue()
		{
			cout<<"\n Name = "<<name;
			cout<<"\n Age = "<<age;
			cout<<"\n Country ="<<country;
		}
};

int main()
{
	Person p1;
	
	p1.setvalue("Sunny",20, "India");
	p1.getvalue();
	
	return 0;
}
