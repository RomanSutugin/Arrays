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
		cout << "������� ����������� ��������� ��������� �����: "; cin >> MinRand;
		cout << "������� ������������ ��������� ��������� �����: "; cin >> MaxRand;
		if (MaxRand <= MinRand)
		{
			cout << "Error: ������� ��������" << endl;
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