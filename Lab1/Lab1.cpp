
#include "pch.h"
#include "conio.h"
#include <iostream>
#include "clocale"
#include <cstdalign>

double 
	p = 3.14, z ;
	

void Menu()
{
	std::cout << "Выберите задание\n";
	std::cout << "1. Задание №1\n";
	std::cout << "2. Задание №2\n";
	std::cout << "3. Задание №3\n";
	std::cout << "4. Выход\n" << std::endl;
	std::cout << ">>> ";
}

void task1()
{
	double x = 3.74 * pow(10, -2), y = 0.825;
	z = fabs(1 + pow(sin(x + y), 2))*pow(y, 2) + pow(cos(p - y), 2);
	std::cout << "\nВариант №3\nЗадание №1\nZ =" << z << "\n";
}

void task2()
{
	double h = 1.10, y = 1.23;
	z = tan(pow(y, 3) - pow(h, 4) + pow(h, 2)) / pow(sin(h), 3) + y;
	std::cout << "\nЗадание №2\nA = " << z << "\n";
}

void task3()
{

	double C, L,T, v;
	std::cout << "\nЗадание №3\nВведите емкость конденсатора С: ";
	std::cin >> C;
	std::cout << "Введите индуктивность L: ";
	std::cin >> L;
	T = 2 * p * sqrt(L*C);
	v = 1 / T;
	std::cout << "Период колебаний T = " << T << "(с)\n";
	std::cout << "Частота колебаний V = " << v << "(Гц)\n" << std::endl;

}


int main()
{
	setlocale(LC_CTYPE, "rus");
	system("color 7");
	int key = 0;
	while (key != 4) {
		Menu();
		std::cin >> key;
		switch (key)
		{
		case 1:
			//Задание №1
			task1();
			break;
		case 2:
			//Задание №2
			task2();
			break;
		case 3:
			//Задание №3
			task3();
			break;
		case 4:
			std::cout << "Выход из программы..." << std::endl;
			exit(EXIT_SUCCESS);
			break;
		default:
			std::cerr << "Вы выбрали неверный пункт меню" << std::endl;
		}
		system("pause");
		system("cls");
	}
}
