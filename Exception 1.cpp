#include<iostream>
using namespace std;
int main()
{
	cout<<"HI Today is Monday"<<endl;
	try
	{
		throw 20.7f ;
		cout<<"I am in Try"<<endl;
	}
	catch(double e)
	{
		cout<<"Exception no "<<e;
	}
	catch(float e)
	{
		cout<<"Exception no"<<e;
	}
	catch(int e)
	{
		cout<<"Exception no"<<e;
	}
	cout<<"Last line of the program"<<endl;	
	return 0;
}
