#include<iostream>
using namespace std;
class kiteFestival
{  
	private:
		int kite;   //Instance variable or Member variable
		static int charkhi;  //static variable
	public:
		void setkites(int k)
		{
			kite=k;
			cout<<"No of kites udai"<<k<<endl;
			charkhi++;
		}
		void displaycharkhiuse()           //instance member function
		{
			cout<<"charkhi used:"<<charkhi<<endl;
		}
		static void see()     //STATIC MEMBER FUNCTION
		{
			cout<<"charkhi used:"<<charkhi<<endl;
		}
};
int kiteFestival::charkhi=0;   //static member function
int main()
{
	kiteFestival::see();     //wiyhout creating object, calling of static member variable using static member function
	kiteFestival Rishabh,Anshul,saumya;
	Rishabh.displaycharkhiuse();
	Anshul.displaycharkhiuse();
	saumya.displaycharkhiuse();
	Rishabh.setkites(5);
	Rishabh.displaycharkhiuse();
	Anshul.setkites(8);
	Anshul.displaycharkhiuse();
	saumya.setkites(10);
	saumya.displaycharkhiuse();
	return 0;
}
