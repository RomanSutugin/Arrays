#include <iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "Rus");
	const int n = 10;
	int arr[n];

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand()%8;
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		//���������, ����������� �� ��������� �������� ������
		bool met_before = false;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				met_before = true; // ����������, ��� ����� ����������� �����
				break; // ��������� ������� ��������
			}
		}
		if (met_before)continue; //��������� ������� �������� � ��������� � ���������
		//����� ����������
		int count = 0;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if (count)printf("�������� %d ����������� %d ���\n", arr[i], count);  //cout << "�������� " << arr[i] << " ����������� " << count << " ���" << endl;
	}
}