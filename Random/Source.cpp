﻿#include <iostream>
using namespace std;

//#define TASK_1
//#define TASK_2
#define TASK_3


#define tab "\t"

void main()
{
	setlocale(LC_ALL, "Rus");
	const int n = 10;
	int arr[n];

#ifdef TASK_1
	int MinRand;
	int MaxRand;
	do
	{
		cout << "Введите минимальное возможное случайное число: "; cin >> MinRand;
		cout << "Введите максимальное возможное случайное число: "; cin >> MaxRand;
		if (MaxRand <= MinRand)
		{
			cout << "Error: Нулевой диапазон" << endl;
			system("PAUSE");
			system("CLS");
		}
	} while (MaxRand <= MinRand);

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (MaxRand - MinRand) + MinRand;
	}

	//сортировка по возрастанию:
	for (int i = 0; i < n; i++)
	{
		for (int j = n - 1; j > i; j--)
			if (arr[i] > arr[j])
			{
				int a = arr[i];
				arr[i] = arr[j];
				arr[j] = a;
			}
	}
#endif // TASK_1

#ifdef TASK_2
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 11 + 70;
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
#endif // TASK_2

#ifdef TASK_3


	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 5 + 0;
		cout << arr[i] << tab; // вывод массива
	}
	cout << endl;

	int count[10] = { 0 }; // массив для счетчика повторений числа в основном массиве
	for (int i = 0; i < n; i++)
		count[arr[i]]++;

	cout << "Числа ";
	for (int i = 0; i < 10; i++)
	{
		if (count[i] > 1)
		{
			cout << i << " ";
		}
	}
	cout << " встречаются в массиве более одного раза " << endl;
	
	for (int i = 0; i < 5; i++)
	{
		cout << "Число " << i << " повторяется " << count[i] << " раз" << endl;
	}
#endif
}