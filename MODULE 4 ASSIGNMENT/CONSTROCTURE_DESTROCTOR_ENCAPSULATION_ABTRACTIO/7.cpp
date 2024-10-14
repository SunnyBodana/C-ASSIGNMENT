/*
	7. Write a C++ program to implement a class called Date that has private
	member variables for day, month, and year. Include member functions to
	set and get these variables, as well as to validate if the date is valid.
*/

#include <iostream>
using namespace std;

class Date{
	
	private :
		
		int day;
		int month;
		int year;
		int count = 0;
		
	public :
		
		void setvalue(int d, int m, int y)
		{
			if((m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12) && (d>=1 && d<=31))
			{
				day= d;
				month = m;
				year = y;
			}
			
			else if(m==2 && y%4==0 && (d>=1 && d<=29))
			{
				day= d;
				month = m;
				year = y;
			}
			
			else if(m==2 && y%4!=0 && (d>=1 && d<=28))
			{
				day= d;
				month = m;
				year = y;
			}
			
			else if((m==4 || m==6 || m==9 || m==11) && (d>=1 && d<=30))
			{
				day= d;
				month = m;
				year = y;
			}
			else
			{
				count++;
			}
		}		
		
		void getvalue()
		{
			if(count == 0)
			{
				cout<<"\n"<<day<<"-"<<month<<"-"<<year;
			}
			else
			{
				cout<<"\n Invalide date.";
			}
		}
};

int main()
{
	int day , month , year;
	
	cout<<"\n Enter the date =";
	cin>>day;
	
	cout<<"\n Enter the month =";
	cin>>month;
	
	cout<<"\n Enter the year =";
	cin>>year;
	
	Date d1;
	d1.setvalue(day,month,year);
	d1.getvalue();
	return 0;
}
