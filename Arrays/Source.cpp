//Arrays
#include <iostream>
using namespace std;
//#define TASK_1_2
//#define TASK_3
//#define TASK_4_5
//#define TASK_6


void main()
{
	setlocale(LC_ALL, "Rus");
	
#ifdef DEBUG
	const int SIZE = 5;
	int arr[SIZE];
	arr[2] = 123;
	cout << arr[2] << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
#endif // DEBUG


	// Home Work
#ifdef TASK_1_2
	const int SIZE = 5;
	int arr[SIZE];
	cout << "������� " << SIZE << " ��������� �������" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << "������� " << i << " �������: "; cin >> arr[i];
	}
	cout << "��������� �������� ������� �� �������: "; //������ 2 
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
#endif // TASK_1_2
	
#ifdef TASK_3
	const int SIZE = 5;
	int arr[SIZE];
	cout << "������� " << SIZE << " ��������� �������" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << "������� " << i << " �������: "; cin >> arr[i];
	}
	cout << "��������� �������� ������� � �������� �������: ";
	for (int i = SIZE-1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
#endif // TASK_3
	
#ifdef TASK_4_5
	const int SIZE = 5;
	int arr[SIZE];
	cout << "������� " << SIZE << " ��������� �������" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << "������� " << i << " �������: "; cin >> arr[i];
	}
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	cout << "����� ��������� �������: " << sum << endl;
	int arithmetic_mean = sum/SIZE;
	cout << "������� �������������� ��������� �������: " << arithmetic_mean << endl;
#endif // TASK_4_5

#ifdef TASK_6
	const int SIZE = 5;
	int arr[SIZE];
	cout << "������� " << SIZE << " ��������� �������" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << "������� " << i << " �������: "; cin >> arr[i];
	}
	int max = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	cout << "������������ ������� �������: " << max << endl;
	int min = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}
	cout << "����������� ������� �������: " << min << endl;
#endif // TASK_6

	

}