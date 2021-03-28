#include<iostream>
using namespace std;
int main()
{
	int *ptr;
	ptr=new int;              //creation of integer block dynamically using new operator in c++
	float *ptr1;              
	ptr1=new float;           // creation of float block dynamically using new operator in c++     
	int *ptr2;           
	ptr2= new int[4];          // creation of float array dynamically using new operator in c++
	
	delete ptr;    // deletion of dynamically created block which was referred by ptr using delete operator
	delete ptr1;   // deletion of dynamically created block which was referred by ptr1 using delete operator
	delete[] ptr2;  /// deletion of dynamically created block which was referred by ptr2 using delete operator
	
	return 0;
}
