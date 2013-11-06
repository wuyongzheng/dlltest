#include <stdio.h>
#include <assert.h>
#include <windows.h>

typedef void (__thiscall *tLib1_new)(void *pthis, int a, int b);
typedef void (__thiscall *tLib1_setV1)(void *pthis, int a);
typedef int (__thiscall *tLib1_getSum)(void *pthis);

int main (void)
{
	HMODULE module = LoadLibrary("lib1.dll");
	assert(module != NULL);
	tLib1_new Lib1_new = (tLib1_new)GetProcAddress(module, "??0Lib1@@QAE@HH@Z");
	assert(Lib1_new != NULL);
	tLib1_setV1 Lib1_setV1 = (tLib1_setV1)GetProcAddress(module, "?setV1@Lib1@@QAEXH@Z");
	assert(Lib1_setV1 != NULL);
	tLib1_getSum Lib1_getSum = (tLib1_getSum)GetProcAddress(module, "?getSum@Lib1@@UAEHXZ");
	assert(Lib1_getSum != NULL);

	char buffer[12] = {0}; // don't forget the vtable
	Lib1_new(buffer, 1, 2);
	Lib1_setV1(buffer, 3);
	printf("%d\n", Lib1_getSum(buffer));
	return 0;
}
