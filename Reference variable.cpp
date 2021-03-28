#include<iostream>
using namespace std;
int main()
{
	int x=10;
	int &ref=x;
	ref=20;
	cout<<"The value of x="<<x<<endl;
	x=30;
	cout<<"Reference variable value"<<ref<<endl;
	return 0;
} 
