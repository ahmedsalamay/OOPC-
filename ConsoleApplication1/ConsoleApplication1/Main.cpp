#include <iostream>
#include"matrix.h"
#include"Student.h"
#include<string>
using namespace std;

int main()
{
	
	int row1, colmn1, row2, colmn2;
	cout<<"enter num of rows and colmns of first matrix"<<endl;
	cin>>row1>>colmn1;
	Matrix m1(row1,colmn1);
	cout<<"enter the matrix"<<endl;
	cin>>m1;
	cout<<"enter num of rows and colmns of second matrix"<<endl;
	cin>>row2>>colmn2;
	Matrix m2(row2,colmn2);
	cout<<"enter the matrix"<<endl;
	cin>>m2;
	Matrix m3,m4,m5;
	if(row1==row2&&colmn1==colmn2){
	m3=m1+m2;
	cout<<"summation matrix "<<endl;
	cout<<m3<<endl;
	}
	else
	cout<<"unable to add these matrices"<<endl;
	if(colmn1==row2){
	cout<<"muti matrix "<<endl;
	m4=m1*3;
	cout<<m4<<endl;}
	else
	cout<<"unable to do multiplication "<<endl;
	m5 = m1 - m2;
	cout << "Sub = " << endl << m5;
	Matrix m6(m1);
	cout << "MAtrix6" << endl << m6;
	m6 = (m6 * 2);
	cout << "Mul" << endl << m6;
	
	string name;
	int id, c;
	cout << "ENTER THE NAME";
	cin.ignore();
getline(cin,name);
	cout << "ENTER THE ID";
	cin >> id ;
	cout << "ENTER THE NUMBER OF COURSES";
	cin >> c;
	Student S(name, id, c);
	S.add();
	S.print();
	system("PAUSE");
	return 0;
}
