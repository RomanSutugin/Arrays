#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	const int ROWS = 3;
	const int COLS = 3;
	int arr[ROWS][COLS];

	int arr_2[ROWS][COLS];

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
	cout << "Матрица 1: " << endl;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}

	cout << endl;

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr_2[i][j] = rand() % 100;
		}
	}
	cout << "Матрица 2: " << endl;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr_2[i][j] << "\t";
		}
		cout << endl;
	}

	cout << endl;

	cout << "Сумма матриц 1 и 2: " << endl;
	int sumarr[ROWS][COLS];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sumarr[i][j] = arr[i][j]+arr_2[i][j];
		}
	}
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << sumarr[i][j] << "\t";
		}
		cout << endl;
	}

	cout << "Разность матриц 1 и 2: " << endl;
	int difference[ROWS][COLS];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			difference[i][j] = arr[i][j] - arr_2[i][j];
		}
	}
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << difference[i][j] << "\t";
		}
		cout << endl;
	}


}