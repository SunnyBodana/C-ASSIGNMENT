//1. Write a program of to swap the two values using template

#include<iostream>
using namespace std;
template <typename T>

void swapping(T &a,T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

int main()
{
	int p=11;
	int q=22;
	cout<<"\n Value Of a Before Swapping = "<<p;
	cout<<"\n Value Of b Before Swapping = "<<q;
	swapping(p,q);
	cout<<"\n Value Of a After Swapping = "<<p;
	cout<<"\n Value Of b After Swapping = "<<q;
	
	float a=48.5;
	float b=60.5;
	cout<<"\n Value Of p Before Swapping = "<<a;
	cout<<"\n Value Of q Before Swapping = "<<b;
	swapping(a,b);
	cout<<"\n Value Of p After Swapping = "<<a;
	cout<<"\n Value Of q After Swapping = "<<b;
	
	char x='A';
	char y='B';
	cout<<"\n Value Of x Before Swapping = "<<x;
	cout<<"\n Value Of y Before Swapping = "<<y;
	swapping(x,y);
	cout<<"\n Value Of x After Swapping = "<<x;
	cout<<"\n Value Of y After Swapping = "<<y;
	return 0;
}
