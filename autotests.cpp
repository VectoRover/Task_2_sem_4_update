#include "autotests.h"

using namespace std;

void autotest_CComplNumb()
{
	CComplNumb a(2, 3);
	CComplNumb b(4, 5);
	CComplNumb c;
	CComplNumb d;
	CComplNumb e;

	c = a + b;
	d = a - b;
	e = a * b;

	if (c.get_Re() == 6 && c.get_Im() == 8 && d.get_Re() == -2 && d.get_Im() == -2 && e.get_Re() == -7 && e.get_Im() == 22)
	{
		cout << "autotest_CComplNumb passed" << endl;
	}
	else
	{
		cout << "autotest_CComplNumb failed" << endl;
		exit(100);
	}

};

void autotest_CComplVect()
{
	CComplVectHori e;
	CComplVectHori f;
	CComplNumb a(1, 2);
	CComplNumb b(3, 4);
	CComplNumb c(5, 6);
	CComplNumb d(7, 8);
	vector<CComplNumb> aArr;
	vector<CComplNumb> bArr;
	CComplVectHori result1;
	CComplVectHori result2;
	CComplNumb result3;

	aArr.push_back(a);
	aArr.push_back(b);
	bArr.push_back(c);
	bArr.push_back(d);
	e.set_ArrComplNumb(aArr);
	f.set_ArrComplNumb(bArr);
	result1 = e + f;
	result2 = e - f;
	result3 = e * f;


	if (result1.get_ArrComplNumb()[0].get_Re() == 6 && result1.get_ArrComplNumb()[0].get_Im() == 8 &&
		result1.get_ArrComplNumb()[1].get_Re() == 10 && result1.get_ArrComplNumb()[1].get_Im() == 12 &&
		result2.get_ArrComplNumb()[0].get_Re() == -4 && result2.get_ArrComplNumb()[0].get_Im() == -4 &&
		result2.get_ArrComplNumb()[1].get_Re() == -4 && result2.get_ArrComplNumb()[1].get_Im() == -4 &&
		result3.get_Re() == 70 && result3.get_Im() == 8)
	{
		cout << "autotest_CComplVect passed" << endl;
	}
	else
	{
		cout << "autotest_CComplVect failed" << endl;
		exit(200);
	}
}