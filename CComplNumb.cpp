#include "CComplNumb.h"

CComplNumb::CComplNumb()
{
	this->Re = 0;
	this->Im = 0;
};

CComplNumb::CComplNumb(double Re, double Im)
{
	this->Re = Re;
	this->Im = Im;
};

double CComplNumb::get_Re()
{
	return this->Re;
};

double CComplNumb::get_Im()
{
	return this->Im;
};

void CComplNumb::set_Re(double b)
{
	this->Re = b;
};

void CComplNumb::set_Im(double b)
{
	this->Im = b;
};

CComplNumb& CComplNumb::operator=(const CComplNumb& b)
{
	this->Re = b.Re;
	this->Im = b.Im;
	return *this;
};

CComplNumb CComplNumb::operator+(const CComplNumb& b)
{
	CComplNumb m(this->Re + b.Re, this->Im + b.Im);
	return m;
};

CComplNumb CComplNumb::operator-(const CComplNumb& b)
{
	CComplNumb m(this->Re - b.Re, this->Im - b.Im);
	return m;
};

CComplNumb CComplNumb :: operator*(const CComplNumb& b) {
	CComplNumb m(Re * b.Re - Im * b.Im, Re * b.Im + Im * b.Re);
	return m;
};

void CComplNumb::show()
{
	if (Im > 0)
	{
		cout << Re << "+" << Im << "i ";
	}
	else
	{
		cout << Re << Im << "i ";
	}
};

void CComplNumb::showf(ofstream& outf)
{
	if (Im > 0)
	{
		outf << Re << "+" << Im << "i ";
	}
	else
	{
		outf << Re << Im << "i ";
	}
}