#include "types.h"

extern "C" {

int fn_80247D44(void*);
int fn_8025CB70(void* a0 = 0);
void fn_8025CB34(void* p);
int fn_8025CB04(void* p);
void fn_8025CBC0(void* p);
void fn_8025CC3C(void* p);

int fn_8025CA70(void) { return 0; }
int fn_8025CB04(void* p) { return (*(u16*)((char*)p + 0x60) >> 2) & 0x1; }
int fn_8025CB10(void) { return 0; }
void fn_8025CB34(void* p) { if (fn_80247D44(p) != 0) { fn_8025CB70(p); } }
int fn_8025CB70(void*) { return 0; }
void fn_8025CBC0(void* p) { *(s32*)((char*)p + 0xb4) = 530; }
int fn_8025CBCC(void) { return 0; }
int fn_8025CC04(void) { return 0; }
void fn_8025CC3C(void* p) { *(s32*)((char*)p + 0xb4) = 18; }

}
