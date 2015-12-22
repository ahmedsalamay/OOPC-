#ifndef MATRIX_H_INCLUDED
#define MATRIX_H_INCLUDED
#include<iostream>
#include<iomanip>
using namespace std;
class Matrix
{
private:
	int row, colmn, **matrx;
public:

	Matrix();
	Matrix(int r, int c);
	Matrix(int, int, int **);
	~Matrix();
	Matrix(Matrix &anther);
	Matrix operator=(const Matrix& p);
	Matrix operator+(const Matrix & m1);
	Matrix operator-(const Matrix & m1);
	Matrix operator*(int m1);
	friend ostream& operator<<(ostream&out, const Matrix&M);
	friend istream& operator>>(istream&in, Matrix&m);

};

ostream& operator<<(ostream&out, const Matrix&M);
istream& operator>>(istream&in, Matrix&m);
#endif // MATRIX_H_INCLUDED