#include<iostream>
using namespace std;
template <class T>                    //THIS IS THE EXAMPLE OF CLASS TEMPLATE
class mypair
{
	private:
		T a,b;
	public:
		mypair(T first,T second)
		{
			a=first;
			b=second;
		}
	T getMax();	
};
template<class T>
T mypair<T>::getMax()
{
	T result;
	result=a>b?a:b;
	return result;
}
int main()
{
	mypair <int> myobject(100,75);
	cout<<myobject.getMax();
	return 0;
}




