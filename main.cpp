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
	
	cout <<"����������� �� ���������: "<< d1 << endl;
	cout << "����������� ������������: " << d2 << endl;
	cout << "����������� �����������: " << d4 << endl;
	cout << "����������� �������������� ����: " << d1 << endl;
	cout << "����� � ������� output:";
	d2.output();

	_d1 = d2 + d3;
	_d2 = d2 - d3;
	_d3 = d2 * d3;
	_d4 = d2 / d3;

	cout<<"��������� ������ � ������������ ���� ��������� �������� ������ 1/5 � 2/4: " << _d1 << endl;
	cout << "��������� ������ � ������������ ���� ��������� ��������� ������ 1/5 � 2/4: " << _d2 << endl;
	cout << "��������� ������ � ������������ ���� ��������� ������������ ������ 1/5 � 2/4: " << _d3 << endl;
	cout << "��������� ������ � ������������ ���� ��������� ������� ������ 1/5 � 2/4: " << _d4 << endl;

	cout << "���� ������, ������ ������ ���� �����"<<endl;
	cin >> _d5;



	system("pause");
}

