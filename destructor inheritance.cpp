//Destructor inheritance

#include<iostream>
using namespace std;
class A
{
	private:
		int a;
	public:
		A(int k)
		{
			a=k;
			cout<<"A="<<a<<endl;
		}
		
		~A()
		{
			cout<<"Parent class Destructor"<<endl;
		}
};
class B:public A
{
	private:
		int b;
	public:
		B(int x,int y):A(x)
		{
			b=y;
			cout<<"B="<<b<<endl;
		}
		~B()
		{
			cout<<"Child class Destructor"<<endl;
		}
};
int main()
{
	B obj(5,6);
}
