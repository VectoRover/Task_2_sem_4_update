#include "CComplVect.h"
#include "CComplVectHori.h"

CComplVectHori::CComplVectHori() : CComplVect() {}
CComplVectHori::CComplVectHori(vector<CComplNumb> ArrComplNumb) : CComplVect(ArrComplNumb) {}
CComplVectHori:: ~CComplVectHori()
{
	
}


/*CComplVectHori& CComplVectHori::operator=(const CComplVectHori& b)
{
		this->ArrComplNumb = b.ArrComplNumb;
		return *this;
}*/

void CComplVectHori::show()
{
	for (size_t i = 0; i < ArrComplNumb.size(); i++)
	{
		ArrComplNumb[i].show();
	}
}

CComplVectHori operator+(const CComplVect& first, const CComplVect& second)
{
	CComplVectHori tmp;
	vector<CComplNumb> arr(first.get_ArrComplNumb().size());
	if (first.get_ArrComplNumb().size() == second.get_ArrComplNumb().size())
	{
		for (size_t i = 0; i < first.get_ArrComplNumb().size(); i++)
		{
			arr[i] = first.get_ArrComplNumb()[i] + second.get_ArrComplNumb()[i];
		}
		tmp.ArrComplNumb = arr;
		return tmp;
	}
	else
	{
		cout << "vectors of different lengths1" << endl;
		exit(-1);
	}
}

CComplVectHori operator-(const CComplVect& first, const CComplVect& second)
{
	CComplVectHori tmp;
	vector<CComplNumb> arr(first.get_ArrComplNumb().size());
	if (first.get_ArrComplNumb().size() == second.get_ArrComplNumb().size())
	{
		for (size_t i = 0; i < first.get_ArrComplNumb().size(); i++)
		{
			arr[i] = first.get_ArrComplNumb()[i] - second.get_ArrComplNumb()[i];
		}
		tmp.ArrComplNumb = arr;
		return tmp;
	}
	else
	{
		cout << "vectors of different lengths1" << endl;
		exit(-1);
	}
}

CComplNumb CComplVectHori::operator*(CComplVectHori& b)
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

CComplVectHori& CComplVectHori::conjugate()
{
	for (size_t i = 0; i < this->ArrComplNumb.size(); i++)
	{
		this->ArrComplNumb[i].set_Im(-this->ArrComplNumb[i].get_Im());
	}
	return *this;
}


void CComplVectHori::output()
{
	ofstream outf(out);
	for (size_t i = 0; i < this->ArrComplNumb.size(); i++)
	{
		ArrComplNumb[i].showf(outf);
	}
	outf << endl;
}