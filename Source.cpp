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

	cout << "1 - ���� ������ �������\n2 - ����� ���� ��������\n3 - ����� ���-�� ��������\n0 - �����\n";

	do
	{
		cin >> choise;

		switch (choise)
		{
		case SIN_STR:
			cout << "������� ������ #1\n";
			mas.fill();
			cout << "������� ������ #2\n";
			mas2.fill();
			break;
		case PRINT:
			cout << "������ #1\n";
			mas.print();
			cout << "������ #2\n";
			mas2.print();
			break;
		case COUNT_STRING:
			printf("���-�� ��������: %d\n", mas.get_count());
			break;
		case EXIT:
			break;
		}

	} while (choise != 0);

	return 0;
}