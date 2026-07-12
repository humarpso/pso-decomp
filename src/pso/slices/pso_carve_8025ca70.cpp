#include "types.h"

extern "C" {

int TWindowChat__sub_80247D44(void* a0 = 0);
int TWindowChat__sub_8025CB70(void* a0 = 0);
void fn_8025CB34(void* p);
int fn_8025CB04(void* p);

int fn_8025CA70(void) { return 0; }
int fn_8025CB04(void* p) { return (*(u16*)((char*)p + 0x60) >> 2) & 0x1; }
int fn_8025CB10(void) { return 0; }
void fn_8025CB34(void* p) { if (TWindowChat__sub_80247D44(p) != 0) { TWindowChat__sub_8025CB70(p); } }
int TWindowChat__sub_8025CB70(void*) { return 0; }

}
