#include "types.h"

extern "C" {

int fn_802BDC5C(void*);
int fn_802BDDF8(void*, void*);
void fn_802BF528(void* p);
void fn_802BF8D8(void* p);
void fn_802BF904(void* p);

int fn_802BF4B8(void) { return 0; }
void fn_802BF528(void* p) { if (*(int*)((char*)p + 0x460) == 0) { fn_802BDDF8(p, *(void**)((char*)p + 0x47c)); } }
int fn_802BF558(void) { return 0; }
int fn_802BF5F0(void) { return 0; }
int fn_802BF65C(void) { return 0; }
int fn_802BF6CC(void) { return 0; }
int fn_802BF730(void) { return 0; }
int fn_802BF79C(void) { return 0; }
int fn_802BF834(void) { return 0; }
void fn_802BF8D8(void* p) { if (*(int*)((char*)p + 0x460) == 0) { fn_802BDC5C(p); } }
void fn_802BF904(void* p) { *(s32*)((char*)p + 0x45c) = 45; *(s32*)((char*)p + 0x460) = 45; }
int fn_802BF914(void) { return 0; }
int fn_802BF948(void) { return 0; }

}
