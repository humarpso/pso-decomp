#include "types.h"

extern "C" {

int fn_8012CE9C(void* p);
int fn_8012CEC8(void* p);
int fn_80115BC0(void*, int, int);

int fn_8012CE9C(void* p) { return fn_80115BC0((char*)p + 0x1f8, 1820, 10922); }
int fn_8012CEC8(void* p) { return fn_80115BC0((char*)p + 0x1f8, -1820, 0); }
int fn_8012CEF4(void) { return 0; }

}
