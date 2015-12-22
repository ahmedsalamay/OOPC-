#include"Student.h"
#include<iomanip>
Student::Student(string name, int id, int course)
{
	Matrix M(course, 2);
	this->name =name ;
	this->id = id;
	this->course = course;
	grade = M;
}
void Student::add()
{
	cout << "Enter the Grade " << endl;
	cout << "MIDTERM      Final";
	cin >> grade;
	
}
void Student::print()
{
	cout << "Name:" << name << endl;
	cout <<"ID:"<< id<<endl;
	cout << "Final" << "  Midterm";
	cout <<"Grade:"<<endl<< grade;
	
}