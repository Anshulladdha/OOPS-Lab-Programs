 #include<iostream>
using namespace std;
void fun(void);
int main()
{
	int i=3;
	try
	{
		if(i==3)
		fun();
	}
	catch(int e)
	{
		cout<<"Exception "<<e<<endl;
	}
	
	return 0;
}
void fun()
{
	throw 100;
}
