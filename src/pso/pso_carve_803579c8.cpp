#include "types.h"

extern "C" {

int fn_803579C8(void* p);
int fn_803579F4(void* p);
int fn_80115BC0(void*, int, int);

int fn_803579C8(void* p) { return fn_80115BC0((char*)p + 0x1f8, 1820, 8192); }
int fn_803579F4(void* p) { return fn_80115BC0((char*)p + 0x1f8, -3640, 0); }

}
