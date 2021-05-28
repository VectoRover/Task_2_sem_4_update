#pragma once
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

class CComplNumb
{
private:
	double Re, Im;
public:
	CComplNumb();
	CComplNumb(double Re, double Im);
	double get_Re();
	double get_Im();
	void set_Re(double b);
	void set_Im(double b);
	CComplNumb& operator=(const CComplNumb& b);
	CComplNumb operator+(const CComplNumb& b);
	CComplNumb operator-(const CComplNumb& b);
	CComplNumb operator*(const CComplNumb& b);
	void show();
	void showf(ofstream& outf);

	friend class CComplVect;
};