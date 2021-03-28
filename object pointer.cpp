#include<iostream>
using namespace std;
class box
{
	private:
		int l,b,h ,vol;
	public:
		void setdimention(int x,int y,int z,int p)
		{
			l=x;
			b=y;
			h=z;
			vol=p;
		}
		void showdimension()
		{
			cout<<"length="<<l<<endl;
			cout<<"breadth="<<b<<endl;
			cout<<"height="<<h<<endl;
			cout<<"volume="<<vol<<endl;
		}
};
int main()
{
	box *p, smallbox;
	p=&smallbox;   //object pointer
	p->setdimention(12,14,16,20);
	p->showdimension();
	return 0;
}
