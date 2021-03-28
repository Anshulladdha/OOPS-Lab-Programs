#include<iostream>
using namespace std;
void swap_v(int,int);
void swap_a(int*,int*);
void swap_r(int&,int&);
int main()
{
	int  a=10,b=20;
	cout<<"Before swap using call by value a="<<a<<endl;
	cout<<"Before swap using call by value b="<<b<<endl;
	swap_v(a,b);
	cout<<"After swap using call by value a="<<a<<endl;
	cout<<"After swap using call by value b="<<b<<endl;
	a=10;
	b=20;
	cout<<"Before swap using call by Address a="<<a<<endl;
	cout<<"Before swap using call by Address b="<<b<<endl;
	swap_v(a,b);
	cout<<"After swap using call by Address a="<<a<<endl;
	cout<<"After swap using call by Address b="<<b<<endl;
	return 0;
}

void swap_v(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
}
void swap_a(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	
}

