//task 3 concept of destructor

#include<iostream>
using namespace std;
class car
{
	private:
		float petrol,distance;
	public:
		car();
	~car()
	{
		cout<<"destructor is called"<<endl;
	}
	
};
car::car()
{
	petrol=0;
	distance=0;
}
int main()
{
	car hondacity();
	return 0;
}
