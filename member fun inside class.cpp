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
			cout<<"r="<<r<<endl;
			cout<<"i="<<i<<endl;
		}
			
};

int main()
{
	complex c1,c2,c3;
	c1.setdata(6,7);
	c2.setdata(5,8);
	
	c3.showdata();
	return 0;
}

