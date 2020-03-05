#pragma once
#include <iostream>
using namespace std;
class Rational {
private:
	int num;
	int denum;
public:
	Rational ();
	Rational (const Rational &c);
	Rational (int _num, int _denum);
	Rational(int d);

	~Rational();

	void output();
	
	Rational& operator=(const Rational &c);
	Rational  operator+(const Rational &c);
	Rational  operator-(const Rational &c);
	Rational  operator*(const Rational &c);
	Rational  operator/(const Rational &c);
	 
	friend ostream& operator<<(ostream& stream, const Rational& c);
	friend istream& operator>>(istream& stream, Rational& c);
};