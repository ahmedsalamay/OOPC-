#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
#include<iostream>
#include<string>
#include"Matrix.h"
using namespace std;
class Student
{
private:
	string name;
	int id;
	int course;
	Matrix grade;

public:
	Student(string, int, int);
	void add();
	void print();
};
#endif 
