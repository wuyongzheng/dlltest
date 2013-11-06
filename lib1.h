class Lib1 {
	int v1;
	int v2;
public:
	__declspec(dllexport) Lib1 (int a, int b);
	__declspec(dllexport) void setV1 (int a);
	__declspec(dllexport) virtual int getSum (void);
};
