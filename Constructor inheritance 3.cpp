//Constructor inheritance 3 

#include<iostream>
using namespace std;
class A
{
	private:
		int a;
	public:
		A()
		{
			cout<<"HI";
		}
		A(int k)
		{
			a=k;
			cout<<"a="<<a<<endl;
		}
};
class B:public A
{
	private:
		int b;
	public:
		B(int x,int y):A(x)    // calling of paraametrized constructor of base class
		{
			b=y;
		    cout<<"b="<<b<<endl;
	    }
};
int main()
{
	B obj(5,8);
	return 0;
}
	
