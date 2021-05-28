#pragma once
#include <string>
#include <iostream>
#include "CComplNumb.h"
#include "CComplVect.h"
using namespace std;

class CFactoryComplVect
{
public:
	virtual CComplVect* create() = 0;
};