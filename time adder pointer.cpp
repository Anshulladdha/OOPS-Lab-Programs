//Time adder pointer task 3

#include<iostream>
using namespace std;
class timer
{
	private:
		int Hours;
		int Minutes;
		int Seconds; //instant variables
	public:
		timer()  //default constructor
		{
			Hours=0;
			Minutes=0;
			Seconds=0;
		}
		void settime()    //instant member function
		{
			cout<<"Enter the value of Hours =>";
			cin>>Hours;
			cout<<"Enter the value of Minutes=>";
			cin>>Minutes;
			cout<<"Enter the value of Seconds=>";
			cin>>Seconds;
			cout<<"**********"<<endl;
		}
		timer AddTime(timer obj1,timer obj2,timer  obj3)
		{
			obj3.Seconds += obj1.Seconds+obj2.Seconds;
			obj3.Minutes += obj1.Minutes+obj2.Minutes;
			obj3.Hours += obj1.Hours+obj2.Hours;
			if( obj3.Seconds>=60)
			{
				obj3.Minutes +=obj3.Seconds/60;
				obj3.Seconds = obj3.Seconds-60;
			}
			if(obj3.Minutes >=60)
			{
				obj3.Hours +=obj3.Minutes/60;
				obj3.Minutes= obj3.Minutes-60;
			}
			return obj3;
		}
		void show()  //instant member function
		{
			cout<<"Hours=>"<<Hours<<endl;
			cout<<"Minutes=>"<<Minutes<<endl;
			cout<<"Seconds=>"<<Seconds<<endl;
			cout<<"*******"<<endl;
		}
};
int main()
{
	timer time1,time2,time3;
	cout<<"Enter the time1 Details:-"<<endl;
	time1.settime();
	time1.show();
	cout<<"Enter the time2 Details:-"<<endl;
	time2.settime();
	time2.show();
	time3 = time3.AddTime(time1,time2,time3);
	time3.show();
	return 0;
}
