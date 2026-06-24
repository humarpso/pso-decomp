#include "types.h"

extern "C" {

int fn_80077720(void* p);
int fn_80077788(void);
int fn_80077790(void);

int fn_80077720(void* p) { return *(u32*)((char*)p + 0x0) & 0x1; }
int fn_8007772C(void) { return 0; }
int fn_80077760(void) { return 0; }
int fn_80077788(void) { return 0; }
int fn_80077790(void) { return 0; }
int fn_80077798(void) { return 0; }
int fn_800777C4(void) { return 0; }
int fn_80077814(void) { return 0; }
int fn_80077840(void) { return 0; }

}
