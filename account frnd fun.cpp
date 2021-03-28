#include<iostream>
using namespace std;
class Account
{
	private:
		string c_name;
		int balance;
		int age;
	public:
		void getdata()
		{
			cout<<"Enter name:"<<endl;
			cin>>c_name;
			cout<<"Enter age:"<<endl;
			cin>>age;
			cout<<"Enter balance:"<<endl;
			cin>>balance;
		}
		friend  void display(Account);
};
void display(Account obj)
{
	cout<<obj.c_name<<endl;
	cout<<obj.age<<endl;
	cout<<obj.balance<<endl;
}
int main()
{
	Account acc;
	acc.getdata();
	display(acc);
	return 0;
}
