//Multiple Inheritance

#include<iostream>
#include<math.h>
using namespace std;
class A
{
	protected:
		int a,b,c;
	public:
		void get()
		{
			cin>>a>>b;
		}
		void cal()
		{
			c=a+b;
			cout<<"Added values are: "<<c<<endl;
		}
};
class B
{
	protected:
	    int s=2;
	public:
		void calcu()
		{
			cout<<"square of number: "<<s*s<<endl;
		}
};
class C :public A,public B
{
	public: 
		void calc()
		{
			int c;
			c=pow(a,3)+pow(b,3);         // we cannot take a ,b because class a is not inheritates in class b
			cout<<"sum of cubes "<<c<<endl;
		}
};
int main()
{
	C obj;
	obj.get();
	obj.cal();
	obj.calcu();
	obj.calc();
	
}
