//task 2 mean friend function 

#include<iostream>
using namespace std;
class values
{
	int val1,val2;
	public:
		void getdata()
		{
			cout<<"Enter value 1 of laksahy: ";
			cin>>val1;
			cout<<"Enter value 2 of nipun: ";
			cin>>val2;
		}
		friend float mean(values onj);       //friend function		
};

float mean(values obj)
{
	return float(obj.val1 + obj.val2)/2;
}

int main()
{
	values obj;
	obj.getdata();
	cout<<"mean value is: "<<mean(obj);
}
	
