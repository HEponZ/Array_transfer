#include "Array.h"

int main()
{
	setlocale(LC_ALL, "rus");
	Array* mas{ nullptr };
	int choise = 0, size = 0;
	enum MENU {
		EXIT = 0,
		SIN_STR,
		PRINT,
		COUNT_STRING
	};

	cout << "1 - ���� ������ �������\n2 - ����� ���� ��������\n3 - ����� ���-�� ��������\n0 - �����\n";

	do
	{
		cin >> choise;

		switch (choise)
		{
		case SIN_STR:
			mas = mas->sin_str(mas, size);
			break;
		case PRINT:
			mas->print(mas, size);
			break;
		case COUNT_STRING:
			printf("���-�� ��������: %d\n", mas->get_count());
			break;
		case EXIT:
			break;
		}

	} while (choise != 0);

	return 0;
}