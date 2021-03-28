#include<iostream>
#include<stdio.h>
using namespace std;

class student
{
	protected:
		int roll ;
		char name[25];
		int semester;
	public:
		void getdata()
		{
			cout<<"what is your Roll No. ";
			cin>>roll ;
			cout<<"what is your Name ";
			cin>>name;
			cout<<"what is your semester ";
			cin>>semester;
			
		}
		void setdata()
		{
			cout<<"\n===STUDENT MARKLIST===";
			cout<<"\nRoll No. :"<<roll ;
			cout<<"\nstudent Name: "<<name<<endl;
			cout<<"\nstudent semester: "<<semester<<endl;
		}
};
class student_Marks : public student
{
	public: 
		int DSA;
		int OOPS;
		int AEM;
		int SE;
		int Total;
		double percentage;
	public:
		void input_data()
		{
			cout<<"\nEnter MARKS IN DSA:? ";
			cin>>DSA;
			cout<<"\nENTER MARKS IN OOPS:? ";
			cin>>OOPS;
			cout<<"\nENTER MARKS IN AEM:? ";
			cin>>AEM;
			cout<<"\nENTER MARKS IN SE:? ";
			cin>>SE;
		}
		void display_data()
		{
			
			cout<<"\nMarks of DSA: "<<DSA<<endl;
			cout<<"\nMarks of OOPS: "<<OOPS<<endl;
			cout<<"\nMarks of AEM: "<<AEM<<endl;
			cout<<"\nMarks of SE: "<<SE<<endl;
		}
};
class student_Result:public student_Marks
{
	public:
		void calculate_Marks()
		{
			Total= DSA+OOPS+AEM+SE;
			cout<<"\n\nTotal Marks: "<<Total<<"/400"<<endl;
			percentage =(DSA+OOPS+AEM+SE)/4.0;
			cout<<"Total Percentage: "<<percentage;
			
        }   
};
int main()
{
	student_Result obj;
	int count,i;
	cout<<"Enter NO. of Student You Want?: ";
	cin>>count;
	for(i=0;i<count;i++)
	{
		obj.getdata();
		obj.setdata();
		obj.input_data();
		obj.display_data();
		obj.calculate_Marks();
		
	}
	return 0;
}	
