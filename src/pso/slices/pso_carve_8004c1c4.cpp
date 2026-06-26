#include "types.h"

extern "C" {

int fn_8004C1C4(void* p);
s32 fn_8004C1D4(void* p);
s32 fn_8004C1DC(void* p);
s32 fn_8004C1E4(void* p);
void* fn_8004C1EC(void* p);
int fn_8004C220(void* p);
void fn_8004C2C4(void* p);
int VecCopy__FP3VecPC3Vec(void*);

int fn_8004C1C4(void* p) { return *(u32*)((char*)p + 0x378) == 0; }
s32 fn_8004C1D4(void* p) { return *(s32*)((char*)p + 0x374); }
s32 fn_8004C1DC(void* p) { return *(s32*)((char*)p + 0x374); }
s32 fn_8004C1E4(void* p) { return *(s32*)((char*)p + 0x374); }
void* fn_8004C1EC(void* p) { return (char*)p + 0x5c; }
int fn_8004C1F4(void) { return 0; }
int fn_8004C220(void* p) { return VecCopy__FP3VecPC3Vec((char*)p + 0x38); }
int fn_8004C244(void) { return 0; }
int fn_8004C278(void) { return 0; }
void fn_8004C2C4(void* p) { *(u8*)((char*)p + 0x0) = 25; *(u8*)((char*)p + 0x1) = 4; }

}
