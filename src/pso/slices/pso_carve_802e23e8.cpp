#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80132F2C(s32, s32);
s32 fn_802E19B0(s32, s32, s32, s32, s32);
s32 fn_8039DCE0(s32, s32);
s32 fn_802E11C8(void *);
s32 fn_801FEAFC();
s32 fn_80201254();
s8 fn_8001C5E8();
s32 fn_801FD94C(s32);
s32 fn_80202BA8(s32);
s32 fn_801FD990(s32);
s32 fn_801FEB40();
s32 fn_802012AC();
s32 TAdPlayerLoadGC__sub_80076BBC();
s32 fn_802E1BF4(void *);
s32 fn_802E1DF8(void *, s32);
s32 fn_802E1868(void *);
int fn_801FED84(void*);
int fn_802E195C(void*, void*, void*, void*, void*);
int fn_802E1C6C(void*);
void fn_802E2848(void* p);
void fn_802E2A7C(void* p);

int fn_802E23E8(void) { return 0; }
int fn_802E2450(void) { return 0; }
int fn_802E24B8(void) { return 0; }
int fn_802E2520(void) { return 0; }
int fn_802E2588(void) { return 0; }
int fn_802E2610(void) { return 0; }
void fn_802E2670(void *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x44) & 2) && (TAdPlayerLoadGC__sub_80076BBC() == 0)) {
        fn_802E1BF4(arg0);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x60) == 0) {
            M2C_FIELD(arg0, s32 *, 0x3C) = 1;
            fn_802E1DF8(arg0, 0);
        }
    }
}
void fn_802E26D8(s32 arg0) {
    if (fn_801FD94C(fn_8001C5E8()) == 0) {
        fn_80202BA8(0xC);
        fn_802E1DF8((void *)(arg0), 0xF);
    }
}
void fn_802E2728(s32 arg0) {
    fn_80201254();
    if (fn_801FEAFC() == 0) {
        fn_802E1DF8((void *)(arg0), 0);
        return;
    }
    fn_802E1C6C((void*)(arg0));
    fn_802E195C((void*)(arg0), (void*)(5), (void*)(-1), (void*)(-1), (void*)(-1));
}
void fn_802E2790(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x64) = (s32) (M2C_FIELD(arg0, s32 *, 0x64) - 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x64) < 0) {
        M2C_FIELD(arg0, s32 *, 0x64) = 0;
    }
    if (!(M2C_FIELD(arg0, s32 *, 0x44) & 2) && (TAdPlayerLoadGC__sub_80076BBC() == 0)) {
        if (((s32) M2C_FIELD(arg0, s32 *, 0x64) < 0xF) && (fn_802E1868(arg0) != 0)) {
            M2C_FIELD(arg0, s32 *, 0x64) = 0;
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0x64) == 0) {
            fn_802E1BF4(arg0);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x60) == 0) {
                M2C_FIELD(arg0, s32 *, 0x38) = 1;
                fn_802E1DF8(arg0, 0);
            }
        }
    }
}
void fn_802E2848(void* p) { fn_801FED84(p); fn_802E1C6C(p); fn_802E195C(p, (void*)4, (void*)-1, (void*)-1, (void*)-1); *(int*)((char*)p + 0x64) = 30; }
void fn_802E289C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x64) = (s32) (M2C_FIELD(arg0, s32 *, 0x64) - 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x64) < 0) {
        M2C_FIELD(arg0, s32 *, 0x64) = 0;
    }
    if (!(M2C_FIELD(arg0, s32 *, 0x44) & 2) && (TAdPlayerLoadGC__sub_80076BBC() == 0)) {
        if (((s32) M2C_FIELD(arg0, s32 *, 0x64) < 0xF) && (fn_802E1868(arg0) != 0)) {
            M2C_FIELD(arg0, s32 *, 0x64) = 0;
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0x64) == 0) {
            fn_802E1BF4(arg0);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x60) == 0) {
                M2C_FIELD(arg0, s32 *, 0x34) = 1;
                fn_802E1DF8(arg0, 0);
            }
        }
    }
}
void fn_802E2954(void *arg0) {
    fn_802012AC();
    if (fn_801FEB40() == 0) {
        fn_802E1DF8((void *)(arg0), 0);
        return;
    }
    fn_801FD990(fn_8001C5E8());
    fn_80202BA8(0xF);
    fn_802E1C6C((void*)(arg0));
    fn_802E195C((void*)(arg0), (void*)(3), (void*)(-1), (void*)(-1), (void*)(-1));
    M2C_FIELD(arg0, s32 *, 0x64) = 0x1E;
}
void fn_802E29D8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x64) = (s32) (M2C_FIELD(arg0, s32 *, 0x64) - 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x64) < 0) {
        M2C_FIELD(arg0, s32 *, 0x64) = 0;
    }
    if (!(M2C_FIELD(arg0, s32 *, 0x44) & 2)) {
        if (((s32) M2C_FIELD(arg0, s32 *, 0x64) < 0xF) && (fn_802E1868(arg0) != 0)) {
            M2C_FIELD(arg0, s32 *, 0x64) = 0;
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0x64) == 0) {
            fn_802E1BF4(arg0);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x60) == 0) {
                fn_802E1DF8(arg0, 0);
            }
        }
    }
}
void fn_802E2A7C(void* p) { *(s32*)((char*)p + 0x64) = 30; }

}
