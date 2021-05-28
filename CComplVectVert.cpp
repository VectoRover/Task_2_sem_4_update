#include "CComplVect.h"
#include "CComplVectHori.h"
#include "CComplVectVert.h"

CComplVectVert::CComplVectVert() : CComplVect() {}
CComplVectVert::CComplVectVert(vector<CComplNumb> ArrComplNumb) : CComplVect(ArrComplNumb) {}
CComplVectVert:: ~CComplVectVert()
{

}


/*CComplVectVert& CComplVectVert::operator=(const CComplVectVert& b)
{
	this->ArrComplNumb = b.ArrComplNumb;
	return *this;
}*/

void CComplVectVert::show()
{
	for (size_t i = 0; i < ArrComplNumb.size(); i++)
	{
		ArrComplNumb[i].show();
		cout << endl;
	}
}

/*CComplVectVert CComplVectVert::operator+(const CComplVectVert& b)
{
	CComplVectVert tmp;
	vector<CComplNumb> arr(b.ArrComplNumb.size());
	if (this->ArrComplNumb.size() == b.ArrComplNumb.size())
	{
		for (size_t i = 0; i < b.ArrComplNumb.size(); i++)
		{
			arr[i] = this->ArrComplNumb[i] + b.ArrComplNumb[i];
		}
		tmp.ArrComplNumb = arr;
		return tmp;
	}
	else
	{
		cout << "vectors of different lengths1" << endl;
		exit(-1);
	}
}*/

/*CComplVectVert CComplVectVert::operator-(const CComplVectVert& b)
{
	CComplVectVert tmp;
	vector<CComplNumb> arr(b.ArrComplNumb.size());
	if (this->ArrComplNumb.size() == b.ArrComplNumb.size())
	{
		for (size_t i = 0; i < b.ArrComplNumb.size(); i++)
		{
			arr[i] = this->ArrComplNumb[i] - b.ArrComplNumb[i];
		}
		tmp.ArrComplNumb = arr;
		return tmp;
	}
	else
	{
		cout << "vectors of different lengths1" << endl;
		exit(-1);
	}
}*/

CComplNumb CComplVectVert::operator*(CComplVectVert& b)
{
	CComplNumb m;
	if (this->ArrComplNumb.size() != b.ArrComplNumb.size())
	{
		cout << "vectors of different lengths" << endl;
		exit(-1);
	}
	else
	{
		b.conjugate();
		for (size_t i = 0; i < b.ArrComplNumb.size(); i++)
		{
			m = m + this->ArrComplNumb[i] * b.ArrComplNumb[i];
		}
		return m;
	}
}

CComplVectVert& CComplVectVert::conjugate()
{
	for (size_t i = 0; i < this->ArrComplNumb.size(); i++)
	{
		this->ArrComplNumb[i].set_Im(-this->ArrComplNumb[i].get_Im());
	}
	return *this;
}


void CComplVectVert::output()
{
	ofstream outf(out);
	for (size_t i = 0; i < this->ArrComplNumb.size(); i++)
	{
		ArrComplNumb[i].showf(outf);
			outf << endl;
	}
	outf << endl;
}