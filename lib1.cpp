#include "lib1.h"

Lib1::Lib1 (int a, int b)
{
	v1 = a;
	v2 = b;
}

void Lib1::setV1 (int a)
{
	v1 = a;
}

int Lib1::getSum (void)
{
	return v1 + v2;
}
