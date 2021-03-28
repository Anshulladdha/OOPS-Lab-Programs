
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream fout;   //create output stream object
	
	ifstream Fin;
	Fin.open("filehandling.dat");  //open the file if exist else create that file.
	
	char a;
    Fin>>a;
    while(!Fin.eof())
    {
    	cout<<a;
    	Fin>>a;
	}
	fout.close();  //close the file
	return 0;\
}

