// Shift
#include <iostream>
using namespace std;
//#define LEFT
#define RIGHT

void main()
{
	setlocale(LC_ALL, "Rus");
	const int n = 10;
	int arr[n] = { 0,1,2,3,4,5,6,7,8,9 };
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

#ifdef LEFT
	int number_of_shifts;
	cout << "Введите число, на которое нужно сдвинуть ряд: "; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		int a = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = a;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
#endif // LEFT

#ifdef RIGHT
	int number_of_shifts;
	cout << "Введите число, на которое нужно сдвинуть ряд: "; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		int a = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = a;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
#endif // RIGHT

}