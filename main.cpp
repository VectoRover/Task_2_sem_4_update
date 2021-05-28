
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include "CComplNumb.h"
#include "CComplVect.h"
#include "CComplVectHori.h"
#include "CComplVectVert.h"
#include "autotests.h"
#include "CFactoryComplVect.h"
#include "CFactoryComplVectHori.h"
#include "CFactoryComplVectVert.h"

int main()
{
	autotest_CComplNumb();
	autotest_CComplVect();

	string str = "";
	int line = 0;
	int count = 0;
	vector<CComplVect*> w;
//	ofstream outf("output.txt");
	ifstream input_file("data.txt");

	map<string, CFactoryComplVect*> factory;
	factory["Hori"] = new CFactoryComplVectHori;
	factory["Vert"] = new CFactoryComplVectVert;



	/*vector<CFactoryComplVect*> factory(2);
	factory[0] = new CFactoryComplVectHori;
	factory[1] = new CFactoryComplVectVert;*/

	CComplVect::Input("data.txt", factory, w);



	for (auto it = w.begin(); it != w.end(); it++)
	{
		(*it)->output();
	}



	/*delete factory[0];
	delete factory[1];*/
	input_file.close();
	//outf.close();


	return 0;
}