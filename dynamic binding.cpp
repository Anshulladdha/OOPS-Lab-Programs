#include<iostream>
using namespace std;
class car
{
	public:
		virtual void acon()
		{
			cout<<"Ac of car class"<<endl;
		}
};
class sportscar:public car
{
	public:
		void acon()                      //METOD OVERRIDING 
		{
			cout<<"AC of sports car"<<endl;
		}
};
int main()
{
    car *p,zen;
	sportscar rollsroy;;
	//rollsroy.acon();     //EARLY BINDING 
    //zen.acon();          //EARLY BINDING
	p=&rollsroy;         //Base class pointer is storing the address of child class object(Base class pointer to child class object
	//p->acon();           //EARLY BINDING: acon call hua ,vo call hua p se,early binding p ke type ko dekha =car,so it will call the function of car class
	p->acon();             //DYNAMIC BINDING
	return 0;
}
//FOR DYNAMIC BINDING, we use virtual functios
