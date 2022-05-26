////////////////////////Rational.h
#pragma once
#include "Pair.h"
#include <iostream>
#include <sstream>

using namespace std;

class Rational: public Pair
{
public:
	Rational ( int a=0,int b=0) : Pair(a,b) {};
	Rational(const Pair& p);
	Rational(const Rational& p);
	Rational& operator=(const Rational& r);
	
	Pair getpair() const{return *this;}
	void setpair( Pair p)	{*this=p;}
	
	string tostring () const;
	friend ostream& operator<<(ostream& os, const Rational& r);
	friend istream& operator>>(istream& is, Rational& r);

	friend	Rational operator+(const Rational& r1, const Rational& r2);
	friend	Rational operator-(const Rational& r1, const Rational& r2);
	friend	Rational operator/(const Rational& r1, const Rational& r2);
	
};

