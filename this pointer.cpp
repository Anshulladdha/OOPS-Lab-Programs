#include<iostream>
using namespace std;
class box
{
	private:
		int l,b,h,v;
	public:
		void setdimention(int l,int b,int h,int v)  //x,y,z=local variable of this function
		{
			this->l=l;             //l,b,h=instance variable
			this->b=b;           //because compiler  will give prefernce to local variable so duo to nowing conflit unable to set the value in instance variable
			this->h=h;
			this->v=v;
		}
		void showdimension()
		{
			cout<<"length="<<l<<endl;
			cout<<"breadth="<<b<<endl;
			cout<<"height="<<h<<endl;
			cout<<"volume="<<v<<endl;
		}
};
int main()
{
	box smallbox;
	smallbox.setdimention(12,14,16,20);
	smallbox.showdimension();
	return 0;
}
