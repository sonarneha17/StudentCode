#include<iostream>
using namespace std;

	Student()
		{
			this->stud_id=101;
			this->sname="ABC";
			this->m1=90;
			this->m2=80;
			this->m3=70;
		}
		Student(int stud_id,string sname,int m1,int m2,int m3)
		{
			this->stud_id=stud_id;
			this->sname=sname;
			this->m1=m1;
			this->m2=m2;
			this->m3=m3;
		}
		void calculateMarks()
		{
			int total=m1+m2+m3;
			double avg=total/3;
			
			cout<<"Total Marks: "<<total;
			cout<<"Average Marks: "<<avg;
		}
