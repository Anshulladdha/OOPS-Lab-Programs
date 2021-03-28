//task 1 friend function

#include<iostream>
using namespace std;
class Home
{
	private:
		int chocolates;
		int pastries;
		int jellies;
	public:
		Home()     //Default Constructor
		{
			chocolates=0;
			pastries=0;
			jellies=0;
		}	
	void setvalues(int c,int p,int j)    //MEMBER FUNCTION OF A CLASS
	{
		chocolates=c;
		pastries=p;
		jellies=j;
	}	
	void show()  // MEMBER FUNCTION OF A CLASS
	{
		cout<<"Fridge Quantities right now"<<"Chocolates"<<chocolates<<endl<<"Pastries"<<pastries<<endl<<"Jellis"<<jellies<<endl;
	}
	friend void eating(Home);   //EATING FUNCTION IS NOW MEMBER FUNCTION OF A CLASS HOME  i.e. DECLARATION
	
};
    void eating(Home o)      //THIS FUNCTION IS NOT MEMBER FUNCTION OF A CLASS  i.e. DEFINATION
	{
		cout<<"B has came to eat chocolates,pastries and jellies: "<<endl;
		cout<<"B eat:"<<endl;
		cout<<"chocolates: "<<o.chocolates<<endl;
		cout<<"pastries: "<<o.pastries<<endl;
		cout<<"jellies: "<<o.jellies<<endl;
	}
	 
int main()
{
	Home A;    //CREATION OF OBJECT
	A.setvalues(5,10,15);
	eating(A);
	return 0;
}
