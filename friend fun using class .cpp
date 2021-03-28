//task 4 friend function class 2

#include<iostream>
using namespace std;
class car2;
class car1
{
	private:
		int petrol1;
		int dis1;
	public:
		car1()
		{
			petrol1=0;
			dis1=0;
		}
		void setdata()
		{
			cout<<"enter petrol:";
			cin>>petrol1;
			cout<<"enter distance:";
			cin>>dis1;
		}
		friend void total(car1,car2); 
};
 class car2
 {
 	private:
 		int petrol2;
		int dis2;
 	public:
 		car2()
 		{
 			petrol2=0;
 			dis2=0;
		}
		void setdata()
		{
			cout<<"enter petrol:";
			cin>>petrol2;
			cout<<"enter distance:";
			cin>>dis2;
		}
	
	friend void total(car1,car2);
 };
void total(car1 o,car2 p)   //friend function
{
	cout<<"Total petrol used in  audi & bmw is: "<<o.petrol1+p.petrol2<<endl;
	cout<<"Total distance covered by audi & bmw is: "<<o.dis1+p.dis2<<endl;
}
int main()
{
	car1 audi;
	car2 bmw;
	audi.setdata();
	bmw.setdata();
	total(audi,bmw);
	return 0;
}
