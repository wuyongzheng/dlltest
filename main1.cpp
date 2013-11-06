#include <stdio.h>
#include "lib1.h"

int main (void)
{
	Lib1 x(1, 2);
	x.setV1(3);
	printf("%d\n", x.getSum());
	return 0;
}
