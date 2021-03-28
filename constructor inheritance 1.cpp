//Constructor inheritance 1

#include<iostream>
using namespace std;
class A
{
	public:
		A()
		{
			cout<<"Mai Parent class ka constructor hoo"<<endl;
		}
};
class B:public A
{
	public:
		B()
		{
			cout<<"Mai child class ka constructor hoo"<<endl;
	    }
};
int main()
{
	B obj;
	return 0;
}
	
