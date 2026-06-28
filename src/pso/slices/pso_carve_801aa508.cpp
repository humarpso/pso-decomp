#include "types.h"

extern "C" {

s32 fn_803966F8(s32, s32 *, s32, s32);
s32 fn_801AA584(s32 arg0, s16 arg1);
int __dl__FPv(void* a0 = 0);
int fn_801AA6E4(void* a0 = 0, void* a1 = 0);
void* fn_801AA66C(void* p, void* a1);
int fn_801AA64C(void* a0 = 0);
void* fn_801AA61C(void* p);
s16 fn_801AA508(void* p);
u16 fn_801AA510(void* p);
void fn_801AA518(void* p, s16 v);
void fn_801AA520(void* p, s16 v);
u16 fn_801AA664(void* p);

s16 fn_801AA508(void* p) { return *(s16*)((char*)p + 0x2cc); }
u16 fn_801AA510(void* p) { return *(u16*)((char*)p + 0x0); }
void fn_801AA518(void* p, s16 v) { *(s16*)((char*)p + 0x2) = v; }
void fn_801AA520(void* p, s16 v) { *(s16*)((char*)p + 0x0) = v; }
s32 fn_801AA528(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        fn_803966F8(arg0 + 8, (s32 *)fn_801AA584, 4, 4);
        if (arg1 > 0) {
            __dl__FPv((void*)(arg0));
        }
    }
    return arg0;
}
s32 fn_801AA584(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}
int fn_801AA5C0(void) { return 0; }
void* fn_801AA61C(void* p) { fn_801AA64C(p); return p; }
int fn_801AA64C(void*) { return 0; }
u16 fn_801AA664(void* p) { return *(u16*)((char*)p + 0x0); }
void* fn_801AA66C(void* p, void* a1) { *(short*)(p) = *(unsigned short*)(a1); *(short*)((char*)p + 0x2) = *(short*)((char*)a1 + 0x2); *(void**)((char*)p + 0x4) = *(void**)((char*)a1 + 0x4); fn_801AA6E4((char*)p + 0x8, (char*)a1 + 0x8); fn_801AA6E4((char*)p + 0xc, (char*)a1 + 0xc); fn_801AA6E4((char*)p + 0x10, (char*)a1 + 0x10); fn_801AA6E4((char*)p + 0x14, (char*)a1 + 0x14); return p; }
int fn_801AA6E4(void*, void*) { return 0; }

}
