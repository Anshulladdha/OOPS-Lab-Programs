 #include<iostream>
using namespace std;
struct Person
{
	char name[30];
	int age;
	float salary;
};

 Person getdata(Person);
 void display(Person);
int main()
{
	Person P;
	P=getdata(P);
	display(P);
	
	
	return 0;
	
}

Person getdata(Person p)
{
	cout<<"Enter your name "<<endl;
	cin>>p.name;
	cout<<"Enter your age "<<endl;
	cin>>p.age;
	cout<<"Enter your salary "<<endl;
	cin>>p.salary;
	return p;
}
void display(Person p)
{
	cout<<p.name<<endl;
	cout<<p.age<<endl;
	cout<<p.salary<<endl;
}
