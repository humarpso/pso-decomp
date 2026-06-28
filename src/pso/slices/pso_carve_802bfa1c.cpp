#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_802BD014(void * a0 = 0, s32 a1 = 0);
s32 fn_802BB768();
s32 fn_802B9930(void *);
s16 fn_802BA394(void *);
s32 fn_802BA860(void *);
s32 fn_802BA944(void *);
s32 fn_802BA9E4();
s32 fn_802BD76C(void *);
s32 fn_802BD7EC(void *);
s32 fn_802BDDF8(void *, s32);
void fn_802BFBE4(void* p);

int fn_802BFA1C(void) { return 0; }
void fn_802BFA94(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x4EC);
    M2C_FIELD(arg0, s32 *, 0x45C) = temp_r0;
    M2C_FIELD(arg0, s32 *, 0x460) = temp_r0;
    fn_802BB768();
}
void fn_802BFAC0(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x460) - 1;
    M2C_FIELD(arg0, s32 *, 0x460) = temp_r0;
    if (temp_r0 < 0) {
        fn_802BD014(arg0, 0x22);
    }
}
void fn_802BFAF4(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x460) == 0) {
        if (fn_802BA9E4() != 0) {
            fn_802BDDF8(arg0, 0xD);
            return;
        }
        if ((fn_802B9930(arg0) == 0xD) && (fn_802BA860(arg0) != 0)) {
            M2C_FIELD(arg0, s16 *, 0x464) = fn_802BA394(arg0);
            fn_802BDDF8(arg0, 0x18);
            return;
        }
        if (fn_802BA944(arg0) != 0) {
            fn_802BDDF8(arg0, 0xE);
            return;
        }
        if (fn_802B9930(arg0) == 0xD) {
            M2C_FIELD(arg0, s32 *, 0x428) = fn_802BD7EC(arg0);
            M2C_FIELD(arg0, s32 *, 0x430) = fn_802BD76C(arg0);
            fn_802BDDF8(arg0, 1);
            return;
        }
        fn_802BDDF8(arg0, 2);
    }
}
void fn_802BFBE4(void* p) { *(s32*)((char*)p + 0x45c) = 90; *(s32*)((char*)p + 0x460) = 90; }

}
