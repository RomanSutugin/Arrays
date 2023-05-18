#include <iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "Rus");
	const int n = 5;
	int arr[n];

	int MinRand;
	int MaxRand;
	do
	{
		cout << "¬ведите минимальное возможное случайное число: "; cin >> MinRand;
		cout << "¬ведите максимальное возможное случайное число: "; cin >> MaxRand;
		if (MaxRand <= MinRand)
		{
			cout << "Error: Ќулевой диапазон" << endl;
			system("PAUSE");
			system("CLS");
		}
	} while(MaxRand <= MinRand);

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (MaxRand - MinRand) + MinRand;
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}