#pragma once
#include "Rational.h"
#include <iostream>
#include <clocale>
using namespace std;
int main() {
	setlocale(LC_CTYPE,"Russian");


	Rational d1;
	Rational _d1;
	Rational _d2;
	Rational _d3;
	Rational _d4;
	Rational _d5;
	Rational d2(1, 5);
	Rational d3(2, 4);
	Rational d4(d2);
	Rational d5(4);
	
	cout <<"Конструктор по умолчанию: "<< d1 << endl;
	cout << "Конструктор иницилизации: " << d2 << endl;
	cout << "Конструктор копирования: " << d4 << endl;
	cout << "Конструктор преобразования типа: " << d1 << endl;
	cout << "Вывод с помощью output:";
	d2.output();

	_d1 = d2 + d3;
	_d2 = d2 - d3;
	_d3 = d2 * d3;
	_d4 = d2 / d3;

	cout<<"Результат работы в несократимом виде оператора сложения дробей 1/5 и 2/4: " << _d1 << endl;
	cout << "Результат работы в несократимом виде оператора вычитания дробей 1/5 и 2/4: " << _d2 << endl;
	cout << "Результат работы в несократимом виде оператора произведения дробей 1/5 и 2/4: " << _d3 << endl;
	cout << "Результат работы в несократимом виде оператора деления дробей 1/5 и 2/4: " << _d4 << endl;

	cout << "Если хотите, можете ввести свою дробь"<<endl;
	cin >> _d5;



	system("pause");
}

