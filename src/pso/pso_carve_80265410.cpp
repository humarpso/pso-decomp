#include "types.h"

extern "C" {

int fn_8026543C(void* p);

int fn_80265410(void) { return 0; }
int fn_8026543C(void* p) { return (*(u16*)((char*)p + 0x70) >> 2) & 0x1; }
int fn_80265448(void) { return 0; }

}
