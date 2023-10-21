#include<iostream>
#include "Student.h"
using namespace std;

class Student
{
	private :
		int stud_id;
		string sname;
		int m1,m2,m3;
		
	public:
		Student();
	
		Student(int stud_id,string sname,int m1,int m2,int m3);
	
		void calculateMarks();
		
		
}
