#pragma once
#include <string>
#include <iostream>
#include "CComplNumb.h"
#include "CComplVect.h"
using namespace std;

class CComplVectHori : public CComplVect
{
public:
	CComplVectHori();
	CComplVectHori(vector<CComplNumb> ArrComplNumb);
	~CComplVectHori() override;

	CComplVectHori(CComplVect& other) : CComplVect(other) {}
	//CComplVectHori& operator=(const CComplVectHori& b);
    /*CComplVectHori operator+(const CComplVectHori& b);
	CComplVectHori operator-(const CComplVectHori& b);*/
	CComplNumb operator*(CComplVectHori& b);
	CComplVectHori& conjugate();
	void show();
	virtual void output() override;
	friend class CComplNumb;
};
