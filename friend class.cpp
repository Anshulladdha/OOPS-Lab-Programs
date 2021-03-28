#include<iostream>
using namespace std;
class X
{
	private:
		X()
		{
			cout<<"constructor of x"<<endl;
		}
		friend class Y;	
};
class Y
{
	public:
		Y()
		{
			X obj;
		    cout<<"constructor of y"<<endl;	
		}
};
int main()
{
	Y obj;
	return 0;
}

