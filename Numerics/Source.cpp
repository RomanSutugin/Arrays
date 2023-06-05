#include <iostream>
using namespace std;

//#define DEC_TO_BIN
#define DEC_TO_HEX

void main()
{
	setlocale(LC_ALL, "Rus");
	
	#ifdef DEC_TO_BIN
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
#endif

#ifdef DEC_TO_HEX
	int decimal;
	cout << "Введите десятичное число: "; cin >> decimal;
	const int MAX_HEX_CAPACITY = 8; //максимально возможная разрядность 16 ричного числа
	int hex[MAX_HEX_CAPACITY] = {};
	int i = 0;
	for (; decimal; decimal /= 16)
	{
		hex[i++] = decimal % 16;
		//hex[i] += hex[i] < 10 ? 48 : 55;
	}

	for (i--; i >= 0; i--)
	{
		if (hex[i] < 10)cout << hex[i];
		else cout << char(hex[i] + 55);
		//cout << hex[i];
		/*switch (hex[i])
		{
		case 10: cout << "A"; break;
		case 11: cout << "B"; break;
		case 12: cout << "C"; break;
		case 13: cout << "D"; break;
		case 14: cout << "E"; break;
		case 15: cout << "F"; break;
		default: cout << hex[i];
		}*/
	}
	cout << endl;
#endif // DEC_TO_HEX


}
