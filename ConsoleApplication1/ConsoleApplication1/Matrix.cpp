#include<iostream>
#include"matrix.h"
using namespace std;
Matrix::Matrix()
{
	row = 0;
	colmn = 0;
	matrx = new int*[row];
	for (int i = 0; i<row; i++)
	{
		matrx[i] = new int[colmn];
	}
}

Matrix::Matrix(int r, int c)
{
	row = r;
	colmn = c;
	matrx = new int*[row];
	for (int i = 0; i<row; i++)
	{
		matrx[i] = new int[colmn];
	}
	for (int i = 0; i<row; i++)
	{
		for (int j = 0; j<colmn; j++)
		{
			matrx[i][j] = 0;
		}
	}
}
Matrix::Matrix(int r, int c, int**w)
{
	row = r;
	colmn = c;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < colmn; j++)
		{
			matrx[i][j] = w[i][j];
		}
	}
}
Matrix::~Matrix()
{
	for (int i = 0; i<row; i++)
	{
		for (int j = 0; j<colmn; j++)
		{
			matrx[i][j] = 0;
		}
	}
	for (int i = 0; i < row; i++)
		delete matrx[i];
	delete[]matrx;
}
Matrix::Matrix(Matrix &anther)
{
	row = anther.row;
	colmn = anther.colmn;

	matrx = new int*[row];
	for (int i = 0; i<row; i++)
	{
		matrx[i] = new int[colmn];
	}
	for (int i = 0; i<row; i++)
	{
		for (int j = 0; j<colmn; j++)
		{
			matrx[i][j] = anther.matrx[i][j];
		}
	}

}
Matrix Matrix:: operator=(const Matrix& p)
{  
	row = p.row;
	colmn = p.colmn;
	matrx = new int*[row];
	for (int i = 0; i<row; i++)
	{
		matrx[i] = new int[colmn];
	}
	for (int i = 0; i<row; i++)
	{
		for (int j = 0; j<colmn; j++)
		{
			matrx[i][j] = p.matrx[i][j];
		}
	}
	return *this;

}
Matrix Matrix::operator+(const Matrix & m1)
{
	Matrix m3(row, colmn);
	/*Matrix m3;
	m3.row = row;
	m3.colmn = colmn;
	m3.matrx = new int*[m1.row];
	for (int i = 0; i<m1.row; i++)
	{
	m3.matrx[i] = new int[m1.colmn];
	}
	*/
	for (int i = 0; i<row; i++)
	{
		for (int j = 0; j<colmn; j++)
		{
			m3.matrx[i][j] = matrx[i][j] + m1.matrx[i][j];
		}

	}
	return m3;
}
Matrix Matrix:: operator-(const Matrix & m1)
{
	Matrix m3(row, colmn);
	/*Matrix m3;
	m3.row = row;
	m3.colmn = colmn;
	m3.matrx = new int*[m1.row];
	for (int i = 0; i < m1.row; i++)
	m3.matrx[i] = new int[m1.colmn];
	*/
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < colmn; j++)
		{
			m3.matrx[i][j] = matrx[i][j] - m1.matrx[i][j];
		}
	}
	return m3;
}

Matrix Matrix::operator*(int m1)
{
	Matrix m3(row, colmn);
	/*	Matrix m3;
	m3.row = row;
	m3.colmn = colmn;

	m3.matrx = new int*[m3.row];
	for (int i = 0; i<m3.row; i++)
	{
	m3.matrx[i] = new int[m3.colmn];
	}
	*/
	for (int i = 0; i<m3.row; i++)
	{
		for (int j = 0; j<m3.colmn; j++)
		{
			m3.matrx[i][j] = matrx[i][j] * m1;

		}

	}
	return m3;
}

ostream&  operator<<(ostream&out, const Matrix&M)
{
	for (int i = 0; i<M.row; i++)
	{
		for (int j = 0; j<M.colmn; j++)
		{
			out << M.matrx[i][j] << " ";
			if (j != 1)
				out << setw(10);
		}
		out << endl;
	}
	return out;
}

istream&  operator>>(istream&in, Matrix&m)
{

	for (int i = 0; i<m.row; i++)
	{
		for (int j = 0; j<m.colmn; j++)
		{
			in >> m.matrx[i][j];
		}

	}
	return in;

}


