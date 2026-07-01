#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8000F8EC();
s32 fn_8006EF6C(s32);
s32 fn_8033BC88(void *, s32, s32, s32, s32);
s32 fn_8033BB14();
s32 fn_8033C024(void *, s32);
int fn_8033C178(void* p);
void fn_8033C198(void);
int fn_8033C19C(void* p);
void render__16TCheckMemoryCardFv(void);
int fn_8033BC34(void*, int, int, int, int);
int fn_8033BF90(void*);

void fn_8033C0A8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = fn_8033BB14();
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    fn_8033C024(arg0, 0);
}
int fn_8033C10C(void) { return 0; }
int fn_8033C178(void* p) { return fn_8033BF90(p); }
void fn_8033C198(void) {  }
int fn_8033C19C(void* p) { return fn_8033BC34(p, 0, -1, -1, -1); }
int fn_8033C1CC(void) { return 0; }
void fn_8033C22C(void *arg0) {
    s32 var_r31;
    s32 var_r6;

    if (fn_8000F8EC() == 0xF) {
        var_r31 = fn_8006EF6C(0xA);
        var_r6 = fn_8006EF6C(0xE);
        fn_8033BC88(arg0, var_r31, -2, var_r6, 0);
        return;
    }
    var_r31 = fn_8006EF6C(0x62);
    var_r6 = fn_8006EF6C(0xE);
    if (M2C_FIELD(arg0, s32 *, 0x28) & 0x20) {
        var_r31 = fn_8006EF6C(0x6D);
        var_r6 = fn_8006EF6C(0xE);
    }
    fn_8033BC88(arg0, var_r31, -2, var_r6, 0);
}
void fn_8033C2E8(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x28);
    if (!(temp_r4 & 2)) {
        if (temp_r4 & 1) {
            if ((u32) M2C_FIELD(arg0, u32 *, 0x30) == 0U) {
                fn_8033BC34((void*)(arg0), 0, -1, -1, -1);
            }
        } else {
            if (temp_r4 & 4) {
                if ((s32) M2C_FIELD(arg0, s32 *, 0x40) != 0) {
                    fn_8033C024((void *)(arg0), 3);
                    return;
                }
                fn_8033C024((void *)(arg0), 1);
                return;
            }
            if (temp_r4 & 8) {
                if ((s32) M2C_FIELD(arg0, s32 *, 0x40) != 0) {
                    fn_8033C024((void *)(arg0), 3);
                    return;
                }
                fn_8033C024((void *)(arg0), 1);
                return;
            }
            if (temp_r4 & 0x10) {
                if ((s32) M2C_FIELD(arg0, s32 *, 0x40) != 0) {
                    fn_8033C024((void *)(arg0), 3);
                    return;
                }
                fn_8033C024((void *)(arg0), 1);
                return;
            }
            if (temp_r4 == 0) {
                fn_8033C024((void *)(arg0), 2);
            }
        }
    }
}
int fn_8033C3D0(void) { return 0; }
void render__16TCheckMemoryCardFv(void) {  }

}
