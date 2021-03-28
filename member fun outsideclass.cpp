#include<iostream>
using namespace std;
class complex
{
	private:
		int r,i;
	public:
		void setdata(int x, int y)
		{
			r=x;
			i=y;
		}
		void showdata()
		{
			cout<<r<<"+"<<i<<"i";
		}
			
};

int main()
{
	complex c1;
	c1.setdata(6,7);
	c1.showdata();
	return 0;
}
//can we declare member function outside the class? yes or no, comment on it?
//yes,using scope resolution operator

