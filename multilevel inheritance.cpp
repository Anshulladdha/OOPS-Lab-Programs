//Multilevel inheritance

#include<iostream>
using namespace std;
class A
{

	protected:
		int lays,kurkure;
	public:
	   void getdata()
	   {
	   	  cout<<"TOTAL NUMBER OF LAYS PACKETS : ";
	   	  cin>>lays;
	   	  cout<<"TOTAL NUMBER OF KURKURE PACKETS :";
	   	  cin>>kurkure;
	   }	
};
class B:public A
{
	protected:
		int poppins;
		int cornato;
	public:
		void input()
		{
			cout<<"TOTAL NUMBER OF POPPINS: ";
			cin>>poppins;
			cout<<"TOTAL NUMBER OF CORNATO:";
			cin>>cornato;
		}
		/*void output()
		{
			cout<<"------------------------------"<<endl;
			cout<<"TOTAL NUMBER OF POPPINS: "<<poppins<<endl;
			cout<<"TOTAL NUMBER OF CORNATO: "<<cornato<<endl;
			cout<<"TOTAL NUMBER OF LAYS: "<<lays<<endl;
			cout<<"TOTAL NUMBER OF KURKURE: "<<kurkure<<endl; 
			cout<<"-------------------------------"<<endl;
		}*/		
};
class C:public B
{
	protected:
		int waiwai;
		int bingo;
	public:
		void get()
		{
			cout<<"TOTAL NUMBER OF WAIWAI: ";
			cin>>waiwai;
			cout<<"TOTAL NUMBER OF BINGO: ";
			cin>>bingo;
		}
		void set()
		{
			cout<<"------------------------------------"<<endl;
			cout<<"TOTAL NUMBER OF WAIWAI: "<<waiwai<<endl;
			cout<<"TOTAL NUMBER OF BINGO: "<<bingo<<endl;
			cout<<"TOTAL NUMBER OF LAYS: "<<lays<<endl;
			cout<<"TOTAL NUMBER OF KURKURE: "<<kurkure<<endl;
			cout<<"TOTAL NUMBER OF POPPINS: "<<poppins<<endl;
			cout<<"TOTAL NUMBER OF CORNATO: "<<cornato<<endl;
			
			cout<<"-----------------------------------------"<<endl; 
			
	}
};
int main()
{
	
	C c;
	c.getdata();
	c.input();
	c.get();
	c.set();
	return 0;
}


