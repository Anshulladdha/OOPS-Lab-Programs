#include<iostream>
#define pi 3.14
using namespace std;
class fun
{
	public:
		void area(float);    //Area of circle
		void area(int,int);   //Area of rectangle
		void area(float,int,int);     //Area of triangle
};
void fun::area(float i)
{
	cout<<"Area of circle:"<<pi*i*i<<endl;
}
void fun::area(int a,int b)
{
	cout<<"Area of Rectangle:"<<a*b<<endl;
}
void fun::area(float t,int a,int b)
{
	cout<<"Area of Triangle:"<<t*a*b<<endl;
}
int main()
{
	int choice,l,b;
	float r;
	fun obj;
	cout<<"-------------Method Overloading------------"<<endl;
	cout<<"1.Area of circle"<<endl;
	cout<<"2.Area of Rectangle"<<endl;
	cout<<"3.Area of Triangle"<<endl;
	cout<<"4.Exit"<<endl;
	cout<<"Enter your choice:"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1:
			cout<<"Radius ki value de"<<endl;
			cin>>r;
			obj.area(r);
			break;
		case 2:
			cout<<"Length="<<endl;
			cin>>l;
			cout<<"Breadth="<<endl;
			cin>>b;
			obj.area(l,b);
			break;
		case 3:
			cout<<"Breadth="<<endl;
			cin>>b;
			cout<<"Height="<<endl;
			cin>>l;
			obj.area(0.5,l,b);
			break;
		case 4:
		    exit(0);
		    break;
		default:
			cout<<"chal bhaag yahan se"<<endl;
	}
	return 0;
}
