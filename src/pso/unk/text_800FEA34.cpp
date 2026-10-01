#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void fn_800FED0C(u8 *arg0);
void fn_800FEBBC(u8 *arg0, s32 arg1);
void fn_800FEC40(u8 *arg0, u8 *arg1);
f32 TBoss8Dragon__sub_803D64C0(s32);
void fn_800FEA34(void *arg0, void *arg1, s32 arg2, s32 arg3);
}

extern "C" {

void fn_800FEA34(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    s32 k;
    f32 t;
    do {
        k = M2C_FIELD(M2C_FIELD(arg0, s32 **, 0x8C), s32 *, 0);
        if (k < 0) {
            return;
        }
        if (k == M2C_FIELD(arg0, s32 *, 0x88)) {
            t = (f32) arg3 * TBoss8Dragon__sub_803D64C0(arg2);
            M2C_FIELD(arg1, s32 *, 0x14) = M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x90), s32 *, 0) + (s32) (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x8C), f32 *, 4) * t);
            M2C_FIELD(arg1, s32 *, 0x18) = M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x90), s32 *, 4) + (s32) (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x8C), f32 *, 8) * t);
            M2C_FIELD(arg1, s32 *, 0x1C) = M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x90), s32 *, 8) + (s32) (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x8C), f32 *, 0xC) * t);
            M2C_FIELD(arg0, u8 **, 0x90) = M2C_FIELD(arg0, u8 **, 0x90) + 0xC;
            M2C_FIELD(arg0, u8 **, 0x8C) = M2C_FIELD(arg0, u8 **, 0x8C) + 0x10;
            if (M2C_FIELD(M2C_FIELD(arg0, s32 **, 0x8C), s32 *, 0) < 0) {
                return;
            }
        }
        M2C_FIELD(arg0, s32 *, 0x88) = M2C_FIELD(arg0, s32 *, 0x88) + 1;
        if (M2C_FIELD(arg1, void **, 0x2C) != NULL) {
            fn_800FEA34(arg0, M2C_FIELD(arg1, void **, 0x2C), arg2 + M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x20), s32 *, 8), (s32) (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x20), f32 *, 0xC) * (f32) arg3));
        }
        arg1 = M2C_FIELD(arg1, void **, 0x30);
    } while (arg1 != NULL);
}

void fn_800FEBBC(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x88) = 0;
    M2C_FIELD(arg0, s32 *, 0x8C) = (s32) M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x20), s32 *, 0x10);
    M2C_FIELD(arg0, s32 *, 0x90) = (s32) (arg0 + 0x24);
    fn_800FEA34((void *)(arg0), (void *)(M2C_FIELD(arg0, u8 **, 0x1C)), (s32)(arg1), (s32)((s32) ((f32) M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x20), s32 *, 0) * M2C_FIELD(arg0, f32 *, 0x94))));
}

void fn_800FEC40(u8 *arg0, u8 *arg1) {
    s32 temp_r3;
    u8 *temp_r4;
    u8 *var_r31;
    var_r31 = (u8 *)(arg1);
loop_1:
    temp_r3 = M2C_FIELD(M2C_FIELD(arg0, s32 **, 0x8C), s32 *, 0);
    if (temp_r3 >= 0) {
        if (temp_r3 == (s32) M2C_FIELD(arg0, s32 *, 0x88)) {
            M2C_FIELD(var_r31, s32 *, 0) = (s32) (M2C_FIELD(var_r31, s32 *, 0) & 0xFFFFFFFD);
            M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x90), s32 *, 0) = (s32) M2C_FIELD(var_r31, s32 *, 0x14);
            M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x90), s32 *, 4) = (s32) M2C_FIELD(var_r31, s32 *, 0x18);
            M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x90), s32 *, 8) = (s32) M2C_FIELD(var_r31, s32 *, 0x1C);
            M2C_FIELD(arg0, u8 **, 0x90) = (unsigned char *) ((void *) ((u8 *)(M2C_FIELD(arg0, u8 **, 0x90)) + 0xC));
            M2C_FIELD(arg0, s32 **, 0x8C) = (s32 *) ((u8 *)(M2C_FIELD(arg0, s32 **, 0x8C)) + 0x10);
            if ((s32) M2C_FIELD(M2C_FIELD(arg0, s32 **, 0x8C), s32 *, 0) >= 0) {
                goto block_4;
            }
        } else {
block_4:
            M2C_FIELD(arg0, s32 *, 0x88) = (s32) (M2C_FIELD(arg0, s32 *, 0x88) + 1);
            temp_r4 = (u8 *)(M2C_FIELD(var_r31, u8 **, 0x2C));
            if (temp_r4 != NULL) {
                fn_800FEC40(arg0, temp_r4);
            }
            var_r31 = (u8 *)(M2C_FIELD(var_r31, u8 **, 0x30));
            if (var_r31 != NULL) {
                goto loop_1;
            }
        }
    }
}

void fn_800FED0C(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x88) = 0;
    M2C_FIELD(arg0, s32 *, 0x8C) = (s32) M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x20), s32 *, 0x10);
    M2C_FIELD(arg0, s32 *, 0x90) = (s32) (arg0 + 0x24);
    fn_800FEC40((u8 *)(arg0), (u8 *)(M2C_FIELD(arg0, u8 **, 0x1C)));
}

}
