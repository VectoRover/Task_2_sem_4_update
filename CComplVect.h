#pragma once
#include <string>
#include <iostream>
#include "CComplNumb.h"
#include "CFactoryComplVect.h"
#include <vector>
#include <map>
#include <fstream>
using namespace std;

class CComplVectHori;
class CComplVectVert;

class CComplVect
{
protected:
	vector<CComplNumb> ArrComplNumb;
	string out;
public:
	CComplVect();
	CComplVect(vector<CComplNumb> ArrComplNumb);
	virtual ~CComplVect();
	CComplVect(const CComplVect& other)
	{
		this->ArrComplNumb = other.ArrComplNumb;
		this->out = other.out;
	}

	vector<CComplNumb> get_ArrComplNumb() const;
	void set_ArrComplNumb(vector<CComplNumb> ArrComplNumb);
	void set_output(string output);
	virtual void show() = 0;
	virtual void output() = 0;

	static int Input(string filename, map<string, CFactoryComplVect*> &factory, vector<CComplVect*> &w);

	friend class CComplNumb;
	friend CComplVectHori operator+(const CComplVect& first, const CComplVect& second);
	friend CComplVectHori operator-(const CComplVect& first, const CComplVect& second);
};