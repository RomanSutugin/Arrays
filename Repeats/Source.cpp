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
		//ѕроверить, встречалось ли выбранное значение раньше
		bool met_before = false;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				met_before = true; // запоминаем, что число встречалось ранее
				break; // прерывает текущую итерацию
			}
		}
		if (met_before)continue; //прерывает текущую итерацию и переходит к следующей
		//поиск повторени€
		int count = 0;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if (count)printf("«начение %d повтор€етс€ %d раз\n", arr[i], count);  //cout << "«начение " << arr[i] << " повтор€етс€ " << count << " раз" << endl;
	}
}