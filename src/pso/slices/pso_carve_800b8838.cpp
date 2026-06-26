#include "types.h"

extern "C" {

s32 fn_800B88A8(s32 arg0, s16 arg1);
int __dl__FPv();
s32 fn_800B89E8(s32 arg0, s16 arg1);
int fn_800B896C(void* a0 = 0, void* a1 = 0, void* a2 = 0);
int fn_800B89A4(void* a0 = 0, void* a1 = 0, void* a2 = 0);
void fn_800B8838(void* p, void* a1);
void fn_800B8868(void* p, void* a1);
void fn_800B8898(void* p);

void fn_800B8838(void* p, void* a1) { fn_800B89A4(a1, p, (char*)p + 0x4); }
void fn_800B8868(void* p, void* a1) { fn_800B896C(a1, p, (char*)p + 0x4); }
void fn_800B8898(void* p) { *(s32*)((char*)p + 0x0) = 0; *(s32*)((char*)p + 0x4) = 0; }
s32 fn_800B88A8(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}
void* fn_800B88E4(void* p) { fn_800B8898(p); return p; }
int fn_800B8914(void) { return 0; }
int fn_800B8938(void) { return 0; }
int fn_800B896C(void*, void*, void*) { return 0; }
int fn_800B89A4(void*, void*, void*) { return 0; }
s32 fn_800B89E8(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}
int fn_800B8A24(void) { return 0; }

}
