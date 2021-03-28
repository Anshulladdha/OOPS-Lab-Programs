//task 2 simple interest using constructor

#include<iostream>
using namespace std;
class interest
{
	private:
		float principle;
		float rate;
		float time;
	public:
		interest(int p,int r,float t)
		{
			principle=p;
			rate=r;
			time=t;
		}
		interest(interest &t)
		{
			principle=t.principle;
			time=t.time;
			rate=t.rate;
		}
		void display()
		{
			cout<<(principle*rate*time)/100<<endl;
		}
};
int main()
{
	interest i(1000,3,8),k(i);
	k.display();
	i.display();
	return 0;
}

