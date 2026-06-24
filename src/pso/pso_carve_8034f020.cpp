#include "types.h"

extern "C" {

int fn_8034F0AC(void* p);
int fn_8034F0D8(void* p);
int fn_80115BC0(void*, int, int);

int fn_8034F020(void) { return 0; }
int fn_8034F064(void) { return 0; }
int fn_8034F0AC(void* p) { return fn_80115BC0((char*)p + 0x1f8, 1820, 13653); }
int fn_8034F0D8(void* p) { return fn_80115BC0((char*)p + 0x1f8, -4551, 0); }

}
