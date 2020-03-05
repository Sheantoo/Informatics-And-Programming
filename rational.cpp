#include "Rational.h"
#include <iostream>
using namespace std;
int gcd(int num, int denum);
Rational::Rational() 
{
	num = 0;
	denum = 0;
}

Rational::Rational(const Rational &c)
{
	num = c.num;
	denum = c.denum;
}
Rational::Rational(int _num, int _denum) 
{
	num = _num;
	denum = _denum;
}
Rational::Rational(int _num) {
	num = _num;
	denum = 1;
}
Rational::~Rational()
{
	num = 0;
	denum = 0;

}
void Rational::output() {

	if (denum != 0) {
cout << num << "/" << denum << endl;}
	else if(denum == 0) {cout << "Unreal digit" << endl;}
	
}
Rational& Rational::operator=(const Rational& c) {
	(*this).num = c.num;
	denum = c.denum;
	return *this;
}
Rational Rational::operator+(const Rational& c) {
	Rational res;
	if (denum == c.denum) { 
		res.num = num + c.num; 
		res.denum = denum;
	}
else if (denum != c.denum) {
		res.denum = denum * c.denum;
	    res.num = num * c.denum;
		res.num += c.num * denum;
	}
	int n = gcd(res.num, res.denum);
	res.num /= n;
	res.denum /= n;
	return res;
}
Rational Rational::operator-(const Rational& c) {
	Rational res;
	if (denum == c.denum) {
		res.num = num - c.num;
		res.denum = denum;
	}
	else if (denum != c.denum) {
		res.denum = denum * c.denum;
		res.num = num * c.denum;
		res.num -= c.num * denum;
	}
	int n = gcd(res.num, res.denum);
	res.num /= n;
	res.denum /= n;
	return res;
}
Rational Rational::operator*(const Rational& c) {
	Rational res;
	res.num = num * c.num;
	res.denum = denum * c.denum;
	int n = gcd(res.num, res.denum);
	res.num /= n;
	res.denum /= n;
	return res;
}
Rational Rational::operator/(const Rational& c) {
		Rational res;
		res.num = num * c.denum;
		res.denum = denum * c.num;
		int n = gcd(res.num, res.denum);
		res.num /= n;
		res.denum /= n;
		return res;
}
	ostream& operator<<(ostream& stream, const Rational& c) {
		stream <<c.num<<"/" << c.denum;
		stream << c.denum;
		return stream;
	}
	istream& operator>>(istream& stream, Rational& c) {
		stream >> c.num >> c.denum;
		return stream;
	}
	

	int gcd(int num, int denum)
	{
		num = abs(num);
		denum = abs(denum);
		int o1 = 1, c;
		if (num < denum)
		{
			c = num;
			num = denum;
			denum = c;
		}
		while (o1 > 0)
		{
			o1 = num % denum;
			num = denum;
			denum = o1;
		}
		return num;
	}
