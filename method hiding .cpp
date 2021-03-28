#include<iostream>
using namespace std;
class car
{
	public:
		void fun()
		{
			cout<<"hello kitty"<<endl;
		}
};
class dodo:public car
{
	int A;
	public:
		void fun(int a)
		{
			cout<<"A="<<a<<endl;
		}
};
int main()
{
	dodo obj;
	obj.fun(3);
	//obj.fun();
	return 0;
}
