//private inheritance

#include<iostream>
using namespace std;
class Parent
{
	public:
		void display()
		{
			cout<<"I am parents"<<endl;
		}
};
class child:private Parent
{
	public:
		void show()
		{
			cout<<"I am child"<<endl;
			display();
		}
};
int main()
{
	child A;
	A.show();
	return 0;
}
