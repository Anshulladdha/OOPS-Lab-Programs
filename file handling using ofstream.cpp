
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream fout;   //create output stream object
	fout.open("filehandling.dat");
	fout<<"Hello";
	fout.close();  //close the file
	return 0;\
}

