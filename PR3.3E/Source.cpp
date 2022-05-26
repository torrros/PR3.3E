////////////////////////Source.cpp
#include "Rational.h"
#include <iostream>

using namespace std;

int main()
{
	Rational r1;
	Rational r2(2, 3);
	cin >> r1;
	cout << " r1 - " << r1 << endl;
	cout << " r2 - " << r2 << endl;
	cout << endl;
	cout << " r1 + r2 - " << r1 + r2 << endl;
	cout << " r1 - r2 - " << r1 - r2 << endl;
	cout << " r1 * r2 - " << r1 * r2 << endl;
	cout << " r1 / r2 - " << r1 / r2 << endl;
	cout << " r1 == r2 - " << (r1 == r2) << endl;
	
	cout << " count - " << Rational::Count() << endl;

}