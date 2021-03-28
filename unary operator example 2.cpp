#include<iostream>
using namespace std;
class complex
{
	private:
		int a,b;
	public:
		void setdata(int x,int y)
		{
			a=x;
			b=y;
		}
		void showdata()
		{
			cout<<"a="<<a<<"b="<<b<<endl;
		}
		complex operator -()
		{
			complex temp;
			temp.a=-a;
			temp.b=-b;
			return (temp);
		}
};
int main()
{
	
	complex c1,c2;
	c1.setdata(3,4);
	
	c2=-c1;            //UNARYOPERATOR OVERLOADING  c1.operator()
	c2.showdata();
}
