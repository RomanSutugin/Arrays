#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	int decimal;
	cout << "Введите десятичное число: "; cin >> decimal;
	const int MAX_BIN_CAPACITY = 32; //максимально возможная разрядность двоичного числа
	bool bin[MAX_BIN_CAPACITY] = {}; //этот массив будет хранить разряды двоичного числа
	int i = 0;
	while (decimal)
	{
		bin[i++] = decimal % 2;  //получаем двоичный разряд числа и сохраняем его в массив
		decimal /= 2;			//убираем полученный двоичный разряд из исходного числа
	}
	for (i--; i >=0;i--)
	{
		cout << bin[i];
		if (i % 4 == 0)cout << " ";
		if (i % 8 == 0) cout << " ";
	}
}
