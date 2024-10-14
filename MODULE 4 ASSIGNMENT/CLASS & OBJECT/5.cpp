/*
	5. Write a C++ program to create a class called Rectangle that has private
	member variables for length and width. Implement member functions to
	calculate the rectangle's area and perimeter.
*/

#include <iostream>
using namespace std;

class Rectangle{
	
	private:
		
		double length;
		double width; 
		
	public :
		
		void setvalue(double l,double w)
		{
			length = l ;
			width = w;
		}
		
		double area()
		{
			return length * width ;
		}
		
		double perimeter()
		{
			return (length + width) * 2;
		}
		
};

int main()
{
	double length , width;
	
	cout<<"\n Enter the value of legnth :";
	cin>>length;
	
	cout<<"\n Enter the value of width :";
	cin>>width;
	
	Rectangle r1;
	r1.setvalue(length,width);
	
	cout<<"\n Area of Rectangle :"<<r1.area();
	cout<<"\n Parimeter of Rectangle :"<<r1.perimeter();
	
	return 0;
}
