#include<iostream>
using namespace std;
class number
{
	public:
		void swap(int,int);
		void swap(float,float);
		void swap(char,char); 
};
void number::swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	cout<<"\na="<<a<<endl;
	cout<<"b="<<b<<endl;
}
void number::swap(float a,float b)
{
	float temp;
	temp=a;
	a=b;
	b=temp;
	cout<<"\na="<<a<<endl;
	cout<<"b="<<b<<endl;
}
void number::swap(char a,char b)
{
	char temp;
	temp=a;
	a=b;
	b=temp;
	cout<<"\na="<<a<<endl;
	cout<<"b="<<b<<endl;
}
int main()
{
	int ch;
	number num;
	cout<<"chooose method of swapping"<<endl;
	cout<<"1.Integer swap"<<endl<<"2.Float swap"<<endl<<"3.character swap"<<endl<<"4.Exit"<<endl;
	while(1)
	{
		cout<<"Enter your choice: "<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				int a,b;
				cout<<"a:";
				cin>>a;
				cout<<"b:";
				cin>>b;
				num.swap(a,b);
				break;
			case 2:
				float c,d;
				cout<<"a:";
				cin>>c;
				cout<<"b:";
				cin>>d;
				num.swap(c,d);
				break;
			case 3:
				char e,f;
				cout<<"a:";
				cin>>e;
				cout<<"b:";
				cin>>f;
				num.swap(e,f);
				break;
			case 4:
				exit(0);
				break;
			default:
				cout<<"Enter correct choice:"<<endl;
		}
	}
	return 0;
}
