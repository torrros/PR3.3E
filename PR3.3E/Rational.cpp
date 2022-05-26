////////////////////////Rational.cpp
#include "Rational.h"
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

Rational::Rational(const Pair& p)
{
	seta( p.geta() );
	setb( p.getb() );
	
}

Rational:: Rational(const Rational& p)
{
	*this = p;
}

Rational& Rational:: operator=(const Rational& p)
{
	seta( p.geta() );
	setb( p.getb() );
	return *this;
}


string Rational::tostring() const
{
	stringstream ss;
	ss << geta() << '/' << getb();
	return ss.str();
}

ostream& operator<<(ostream& os, const Rational& p)
{
	os << p.tostring();
	return os;
}

istream& operator>>(istream& is, Rational& p)
{
	int a, b;
	cout << " a - "; cin >> a;
	cout << " b - "; cin >> b;
	p.seta(a);
	p.setb(b);
	return is;
}

Rational operator+(const Rational& p1, const Rational& p2)
{
 return Rational(p1.geta() * p2.getb() + p2.geta() * p1.getb(), p1.getb() * p2.getb());
}

Rational operator-(const Rational& p1, const Rational& p2)
{
 return Rational(p1.geta() * p2.getb() - p2.geta() * p1.getb(), p1.getb() * p2.getb());
}

Rational operator/(const Rational& p1, const Rational& p2)
{
 return Rational(p1.geta() * p2.getb(), p1.getb() * p2.geta());
}