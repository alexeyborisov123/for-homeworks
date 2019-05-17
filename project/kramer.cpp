#include <iostream>
using namespace std;
int determinant(int matrix[3][3])
{
	int a11 = matrix[0][0];
	int a12 = matrix[0][1];
	int a13 = matrix[0][2];
	int a21 = matrix[1][0];
	int a22 = matrix[1][1];
	int a23 = matrix[1][2];
	int a31 = matrix[2][0];
	int a32 = matrix[2][1];
	int a33 = matrix[2][2];

	return (a11 * a22 * a33) + (a12 * a23 * a31) + (a13 * a21 * a32) -
		(a13 * a22 * a31) - (a11 * a23 * a32) - (a12 * a21 * a33);
}

int determinantX1(int coef[3][3], int constTerms[3])
{
	int a12 = coef[0][1];
	int a13 = coef[0][2];
	int a22 = coef[1][1];
	int a23 = coef[1][2];
	int a32 = coef[2][1];
	int a33 = coef[2][2];
	int c1 = constTerms[0];
	int c2 = constTerms[1];
	int c3 = constTerms[2];

	return (c1 * a22 * a33) + (a12 * a23 * c3) + (a13 * c2 * a32) -
		(a13 * a22 * c3) - (c1 * a23 * a32) - (a12 * c2 * a33);
}

int determinantX2(int coef[3][3], int constTerms[3])
{
	int a11 = coef[0][0];
	int a13 = coef[0][2];
	int a21 = coef[1][0];
	int a23 = coef[1][2];
	int a31 = coef[2][0];
	int a33 = coef[2][2];
	int c1 = constTerms[0];
	int c2 = constTerms[1];
	int c3 = constTerms[2];

	return (a11 * c2 * a33) + (c1 * a23 * a31) + (a13 * a21 * c3) -
		(a13 * c2 * a31) - (a11 * a23 * c3) - (c1 * a21 * a33);
}

int determinantX3(int coef[3][3], int constTerms[3])
{
	int a11 = coef[0][0];
	int a12 = coef[0][1];
	int a21 = coef[1][0];
	int a22 = coef[1][1];
	int a31 = coef[2][0];
	int a32 = coef[2][1];
	int c1 = constTerms[0];
	int c2 = constTerms[1];
	int c3 = constTerms[2];

	return (a11 * a22 * c3) + (a12 * c2 * a31) + (c1 * a21 * a32) -
		(c1 * a22 * a31) - (a11 * c2 * a32) - (a12 * a21 * c3);
}


int main()
{
    setlocale(LC_ALL, "Russian");

	int i, j;

	int coefficients[3][3];
	int constantTerms[3];

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cout << "a[" << i << "," << j << "] = ";
			cin >> coefficients[i][j];
		}
		cout << "b,[" << i << "] = ";
		cin >> constantTerms[i];
	}

	if (determinant(coefficients) != 0)
	{
		cout << "Первый корень равен " << (float)determinantX1(coefficients, constantTerms)/(float)determinant(coefficients) << endl;
		cout << "Второй корень равен " << (float)determinantX2(coefficients, constantTerms)/(float)determinant(coefficients) << endl;
		cout << "Третий корень равен " << (float)determinantX3(coefficients, constantTerms)/(float)determinant(coefficients) << endl;
	}
	else
		cout << "Нет решений" << endl;

	return 0;
}
