#include "Array.h"

int main()
{
	setlocale(LC_ALL, "rus");
	Array mas(2), mas2(3);
	int choise = 0, size = 0;
	enum MENU {
		EXIT = 0,
		SIN_STR,
		PRINT,
		COUNT_STRING
	};

	cout << "1 - Ввод нового массива\n2 - Вывод всех массивов\n3 - Вывод кол-ва массивов\n0 - ВЫХОД\n";

	do
	{
		cin >> choise;

		switch (choise)
		{
		case SIN_STR:
			cout << "Введите массив #1\n";
			mas.fill();
			cout << "Введите массив #2\n";
			mas2.fill();
			break;
		case PRINT:
			cout << "Массив #1\n";
			mas.print();
			cout << "Массив #2\n";
			mas2.print();
			break;
		case COUNT_STRING:
			printf("Кол-во массивов: %d\n", mas.get_count());
			break;
		case EXIT:
			break;
		}

	} while (choise != 0);

	return 0;
}