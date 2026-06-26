#include "types.h"

extern "C" {

s32 fn_801D3518(s32 arg0, s16 arg1);
int __dl__FPv();
int fn_801D3B00(void*, void*, void*, void*);
int fn_801D5804(void*);
int fn_801D5838(void);
int fn_801D5868(void*, void*);
void fn_801D371C(void* p, void* q);

s32 fn_801D3518(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}
int fn_801D3554(void) { return 0; }
int fn_801D35FC(void) { return 0; }
int fn_801D36B4(void) { return 0; }
void fn_801D371C(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); }
void TTecLuker__sub_801D3728(void* p, void* a1, void* a2) { fn_801D5868(p, (void*)0); fn_801D5838(); fn_801D3B00(p, a2, a1, (void*)0); fn_801D5804(p); }

}
