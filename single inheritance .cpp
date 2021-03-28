//variation 2  use of reusibility
  
#include<iostream>
using namespace std;
class car    //base class
{
	private:
		int color;
		char fuel;
	public:
		void inputdata()      //Member function
		{
			cout<<"Enter your car color 1. Silver 2.Golden 3.Black "<<endl;
			cin>>color;
			cout<<"Enter Fuel Type of car"<<endl;
			cin>>fuel;
		}
		void showdata()    //Member function
		{
			if(color==1)
			cout<<"yours car color is: Silver"<<endl;
			else if(color==2)
			cout<<"yours car color is: Golden"<<endl;
			else
			cout<<"yours car color is:Black"<<endl;
			cout<<"yours car Fuel Type is:"<<fuel<<endl;
		}
};
class sportscar:public car    //derived class
{
	private:    //access specifiers
		int maxspeed;
		char alarm;        //instance variables
		int airbags;
	public:
		void getdata()      //Member function
		{
			cout<<"Enter your car maximum speed "<<endl;
			cin>>maxspeed;
			cout<<"Enter number of alarms in your car  "<<endl;
			cin>>alarm;
			cout<<"Enter number of airbags in your car "<<endl;
			cin>>airbags;
		}
		void displaydata()    //Member function
		{
			cout<<"your car maximumspeed is : "<<maxspeed<<endl;
			cout<<"your car has"<<alarm<<"alarms"<<endl;
			cout<<"your car has"<<airbags<<"airbags"<<endl;
		}
};
int main()
{
	sportscar tesla;
	tesla.inputdata();
	tesla.showdata();
	tesla.getdata();
	tesla.displaydata();
	return 0; 
}

