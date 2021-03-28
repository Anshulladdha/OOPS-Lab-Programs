#include<iostream>
using namespace std;
class complex
{
	private:
		int r,i;                                                                    //encapsulation
	public:
		void setdata(int x, int y)
		{
			r=x;
			i=y;
		}
		void showdata()
		{
			cout<<r<<"+"<<i<<"i"<<endl;
		}		
};

int main()
{
	class complex c1;
	c1.setdata(6,7);
	c1.showdata();
	return 0;
}
