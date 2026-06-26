#include "types.h"

extern "C" {

s32 fn_8013DFDC(s32 arg0, s16 arg1);
int __dl__FPv();
int fn_8013DF1C(void* p);
u8 fn_8013DF3C(void* p);
u8 fn_8013DF44(void* p);
void fn_8013DF4C(void* p, u8 v);
void fn_8013DF54(void* p, u8 v);
s32 fn_8013DFD4(void* p);
void fn_8013E018(void* p, s16 v);
u16 fn_8013E03C(void* p);
int fn_801D7A78(void*);

int fn_8013DEF8(void) { return 0; }
int fn_8013DF08(void) { return 0; }
int fn_8013DF1C(void* p) { return fn_801D7A78(p); }
u8 fn_8013DF3C(void* p) { return *(u8*)((char*)p + 0x1); }
u8 fn_8013DF44(void* p) { return *(u8*)((char*)p + 0x0); }
void fn_8013DF4C(void* p, u8 v) { *(u8*)((char*)p + 0x1) = v; }
void fn_8013DF54(void* p, u8 v) { *(u8*)((char*)p + 0x0) = v; }
int fn_8013DF5C(void) { return 0; }
int fn_8013DFC4(void) { return 0; }
s32 fn_8013DFD4(void* p) { return *(s32*)((char*)p + 0x4); }
s32 fn_8013DFDC(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}
void fn_8013E018(void* p, s16 v) { *(s16*)((char*)p + 0x0) = v; }
int fn_8013E020(void) { return 0; }
u16 fn_8013E03C(void* p) { return *(u16*)((char*)p + 0x0); }

}
