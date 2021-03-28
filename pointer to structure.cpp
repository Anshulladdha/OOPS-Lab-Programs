#include<iostream>
using namespace std;
struct Book
{
	int bookid;
	float price;
};
int main()
{
	Book b1,*ptr;
	ptr=&b1;
	cout<<"chal bta id bta"<<endl;
	cin>>(*ptr).bookid;
	cout<<"chal book ki price bta"<<endl;
	cin>>(*ptr).price;
	cout<<"Details of book"<<endl;
	cout<<"BookID is"<<(*ptr).bookid<<endl;
	cout<<"Book price is"<<(*ptr).price<<endl;
	return 0;
	
}
