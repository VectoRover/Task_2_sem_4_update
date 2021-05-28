#include "CFactoryComplVectHori.h"
#include "CComplVectHori.h"

CComplVect* CFactoryComplVectHori::create()
{
	return new CComplVectHori;
}