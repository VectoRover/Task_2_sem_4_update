#pragma once
#include <string>
#include <iostream>
#include "CComplNumb.h"
#include "CComplVect.h"
using namespace std;

class CComplVectVert : public CComplVect
{
public:
	using CComplVect::CComplVect;
	using CComplVect::operator=;

	CComplVectVert();
	CComplVectVert(vector<CComplNumb> ArrComplNumb);
	~CComplVectVert() override;
	CComplVectVert(CComplVect& other) : CComplVect(other) {}

	/*CComplVectVert& operator=(const CComplVectVert& b);
	CComplVectVert operator+(const CComplVectVert& b);
	CComplVectVert operator-(const CComplVectVert& b);*/
	CComplNumb operator*(CComplVectVert& b);
	CComplVectVert& conjugate();
	void show();
	virtual void output() override;
	friend class CComplNumb;
};
