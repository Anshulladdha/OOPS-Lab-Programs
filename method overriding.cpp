#include<iostream>  
using namespace std;
class A
{
	public:
		void fun()
		{
			cout<<"I am from parent"<<endl;
	    }
};
class B:public A
{
	public:
		void fun()            // METHOD OVERRIDING:  when child class having the fuunction name and argumnets same as in parents
		{
			cout<<"I am from child"<<endl;
		}
};
int main()
{
	B obj;
	obj.fun();
	return 0;
}
