#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8039DCE0(s32, s32);
s32 fn_80132F2C(s32, s32);
s32 fn_802E19B0(s32, s32, s32, s32, s32);
s32 fn_802E1C6C();
s32 fn_801E0CE0(s32);
s32 fn_802E1868(void *);
s32 fn_802E1DF8(void *, s32);
s32 TAdPlayerLoadGC__sub_80076BBC();
s32 fn_801FE938();
s32 load_system_file(s32);
void fn_802E2D3C(void* p);
int fn_802E2DA8(void* p);
void fn_802E2F20(void);
int fn_802E2F68(void* p);
void fn_802E2FEC(void);
int fn_802E3038(void* p);
int fn_802E195C(void*, int, int, int, int);
int fn_802E1BF4(void*);

void fn_802E2C20(s32 arg0) {
    fn_802E1C6C();
    fn_802E19B0(arg0, fn_80132F2C(0x1C, 9), -1, 0, 0);
}
void fn_802E2C70(void *arg0) {
    if (fn_801E0CE0(0) == 0) {
        fn_802E1DF8(arg0, 0x16);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x64) = (s32) (M2C_FIELD(arg0, s32 *, 0x64) - 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x64) < 0) {
        M2C_FIELD(arg0, s32 *, 0x64) = 0;
    }
    if (!(M2C_FIELD(arg0, s32 *, 0x44) & 2)) {
        if (((s32) M2C_FIELD(arg0, s32 *, 0x64) < 0xF) && (fn_802E1868(arg0) != 0)) {
            M2C_FIELD(arg0, s32 *, 0x64) = 0;
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0x64) == 0) {
            M2C_FIELD(arg0, s32 *, 0x30) = 1;
            fn_802E1BF4((void*)(arg0));
            if ((s32) M2C_FIELD(arg0, s32 *, 0x60) == 0) {
                fn_802E1DF8(arg0, 0);
            }
        }
    }
}
void fn_802E2D3C(void* p) { *(s32*)((char*)p + 0x64) = 30; }
int fn_802E2D48(void) { return 0; }
int fn_802E2DA8(void* p) { return fn_802E195C(p, 2, -1, -1, -1); }
int fn_802E2DD8(void) { return 0; }
void fn_802E2E60(s32 arg0) {
    fn_802E1C6C();
    fn_8039DCE0(arg0 + 0x68, fn_80132F2C(0x1C, 8));
    fn_802E19B0(arg0, arg0 + 0x68, 1, fn_80132F2C(0x1C, 0x29), fn_80132F2C(0x1C, 0x16));
}
void fn_802E2ED8(void *arg0) {
    if (TAdPlayerLoadGC__sub_80076BBC() == 0) {
        M2C_FIELD(arg0, s32 *, 0x5C) = 0;
        fn_802E1DF8(arg0, 0x18);
    }
}
void fn_802E2F20(void) {  }
void fn_802E2F24(void *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x44) & 2)) {
        fn_801FE938();
        fn_802E1DF8(arg0, 4);
    }
}
int fn_802E2F68(void* p) { return fn_802E1BF4(p); }
void fn_802E2F88(void *arg0) {
    if (TAdPlayerLoadGC__sub_80076BBC() == 0) {
        M2C_FIELD(arg0, s32 *, 0x20) = 1;
        if ((s32) M2C_FIELD(arg0, s32 *, 0x44) == 0) {
            fn_802E1DF8(arg0, 3);
            return;
        }
        fn_802E1DF8(arg0, 0);
    }
}
void fn_802E2FEC(void) {  }
void fn_802E2FF0(void *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x44) & 2)) {
        load_system_file(0);
        fn_802E1DF8(arg0, 2);
    }
}
int fn_802E3038(void* p) { return fn_802E1BF4(p); }

}
