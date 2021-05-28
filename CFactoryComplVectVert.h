#pragma once
#include <string>
#include <iostream>
#include "CComplNumb.h"
#include "CComplVect.h"
#include "CFactoryComplVect.h"
using namespace std;

class CFactoryComplVectVert : public CFactoryComplVect
{
public:
    virtual CComplVect* create() override;
};
