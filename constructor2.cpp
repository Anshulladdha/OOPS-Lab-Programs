#include<iostream>
using namespace std;
class car    // class name is car
{
	private:      //Access specifier
	float petrol,distance;          //Instance variable
	public:       //Access specifier
		car();     //Default constructor
	void show();
	 
	 car(float p)    //SINGLE PARAMETRIZED CHARACTER
	 {
	 	petrol=p;
	  	distance=0;
	 }
	 car(float p,float d)
	 {
	 	petrol=p;
	  	distance=d;
	 }
	 car(car &t)             ///copy constructor
	 {
	 	petrol=t.petrol;
	 	distance=t.distance;
	 }
	 ~car()
	 {
	 	cout<<"Destructor is called"<<endl;

	 }
	  	
};
void car::show()     //Member function define outside the class
{
	cout<<"Gadi mai "<<petrol<<"Litre Petrol Hai"<<endl;
	cout<<"Gadi "<<distance<<"KM Chali Hai"<<endl;
}
car::car()      //constructor defining outside the class
{
	petrol=0;
    distance=0;
}
int main()
{
	car hondacity(78,0),civic(83,5),audi,bmw(hondacity);    //objects
	hondacity.show();
    civic.show();
	audi.show();
	bmw.show();
	return 0;
}

