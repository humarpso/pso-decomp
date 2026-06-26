#include "types.h"

extern "C" {

int fn_80235078(void* a0 = 0);
void TTecLuker__sub_80235054(void* p);
void fn_80234F68(void* p);
s16 fn_80234F74(void* p);
void TTecLuker__sub_80234F7C(void* p);
s32 TTecLuker__sub_80234F88(void* p);
void fn_80235028(void* p);
void fn_8023503C(void* p);
void fn_80235048(void* p);

void fn_80234F68(void* p) { *(s32*)((char*)p + 0x0) = 6; }
s16 fn_80234F74(void* p) { return *(s16*)((char*)p + 0x2); }
void TTecLuker__sub_80234F7C(void* p) { *(s32*)((char*)p + 0xb0) = 0; }
s32 TTecLuker__sub_80234F88(void* p) { return *(s32*)((char*)p + 0xb0); }
int fn_80234F90(void) { return 0; }
int fn_80234FC4(void) { return 0; }
void fn_80235028(void* p) { *(u8*)((char*)p + 0x0) = 104; *(u8*)((char*)p + 0x1) = 7; }
void fn_8023503C(void* p) { *(s32*)((char*)p + 0x38) = 1; }
void fn_80235048(void* p) { *(s32*)((char*)p + 0x38) = 0; }
void TTecLuker__sub_80235054(void* p) { fn_80235078((char*)p + 0x4); }
int fn_80235078(void*) { return 0; }

}
