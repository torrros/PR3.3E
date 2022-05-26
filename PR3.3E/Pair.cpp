////////////////////////Pair.cpp
#include "Pair.h"
#include <iostream>
#include <sstream>

using namespace std;

Pair::Pair( int a, int b )
{
	this->a = a;
	this->b = b;
}

Pair::Pair (const Pair& p)
{
	*this = p;
}

Pair& Pair::operator= (const Pair& p)
{
	this->a = p.a;
	this->b = p.b;
	return *this;
}

string Pair::tostring()const
{
	stringstream ss;
	ss << geta() << '/' << getb();
	return ss.str();
}

ostream& operator<< (ostream& os, const Pair& p)
{
	os << p.tostring();
	return os;
}

istream& operator>> (istream& is, Pair& p)
{
	cout << " a - " ; cin >> p.a;
	cout << " b - " ; cin >> p.b;
	return is;
}

Pair operator- (const Pair& p1 , const Pair& p2)
{
	return Pair(p1.a - p2.a, p1.b - p2.b);
}

bool operator== (const Pair& p1, const Pair& p2)
{
	return (p1.a == p2.a && p1.b == p2.b);
}

Pair operator* (const Pair& p1, const Pair& p2)
{
	return Pair(p1.a * p2.a, p1.b * p2.b);
}