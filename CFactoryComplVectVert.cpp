#include "CFactoryComplVectVert.h"
#include "CComplVectVert.h"

CComplVect* CFactoryComplVectVert::create()
{
	return new CComplVectVert;
}