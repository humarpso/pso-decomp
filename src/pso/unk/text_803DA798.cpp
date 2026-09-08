#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
struct RecoveredFields_803DA84C_arg0 {
    u8 unknown_0[0x14];
    u32 field_14;
    u8 unknown_18[0x4];
    s32 field_1C;
};

extern "C" {
extern s32 lbl_805D7768;
void TObjPlayer__sub_803DAC1C(s32 arg0);
void TObjPlayer__sub_803DA6E0(void *);
s32 fn_803DB20C(void *);
extern u8 *lbl_805D774C;
s32 TObjPlayer__sub_803DAE98(u8 *arg0, s32 _w1);
s32 TObjPlayer__sub_803DA808(int, void *, int);
s32 TObjPlayer__sub_803DA84C(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 TObjPlayer__sub_803DA55C(u32);
extern u8 *lbl_805D774C;
extern s32 lbl_805D7768;
s32 TObjPlayer__sub_803DAD28(u32 arg0);
s32 TObjPlayer__sub_803DA808(int, void *, int);
s32 TObjPlayer__sub_803DA8B4(u8 *arg0, s32 arg1);
}

extern "C" {

void TObjPlayer__sub_803DAD24(void);
s32 set_global_param__8TObjFishFi(s32 arg0);

extern u8 *lbl_805D774C;

s32 set_global_param__8TObjFishFi(s32 arg0) {
    M2C_FIELD(lbl_805D774C, s32 *, 0x20) = arg0;
    return 1;
}

#pragma push
#pragma opt_common_subs off
#pragma scheduling off
#pragma peephole off
typedef char RecoveredFields_803DA84C_arg0_14_offset[offsetof(RecoveredFields_803DA84C_arg0, field_14) == 0x14 ? 1 : -1];
typedef char RecoveredFields_803DA84C_arg0_1C_offset[offsetof(RecoveredFields_803DA84C_arg0, field_1C) == 0x1C ? 1 : -1];
s32 TObjPlayer__sub_803DA84C(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u32 temp_r0;
    u32 temp_r6;
    u32 temp_r7;
    u32 var_r5;
    temp_r7 = arg2 & 0xFFFFFFFC;
    temp_r6 = arg3 & 0xFFFFFFFC;
    if (temp_r6 == 0) {
        return 0;
    }
    temp_r0 = ((RecoveredFields_803DA84C_arg0 *)arg0)->field_14;
    var_r5 = temp_r0 - temp_r7;
    if (temp_r7 >= temp_r0) {
        return 7;
    }
    if (var_r5 > temp_r6) {
        var_r5 = temp_r6;
    }
    TObjPlayer__sub_803DA808((int) (temp_r7 + ((RecoveredFields_803DA84C_arg0 *)arg0)->field_1C), (void *) (arg1), (int) (var_r5));
    return 0;
}
#pragma pop

#pragma push
#pragma peephole off
s32 TObjPlayer__sub_803DA8B4(u8 *arg0, s32 arg1) {
    TObjPlayer__sub_803DA808((int) (M2C_FIELD(arg0, s32 *, 0x1C)), (void *) (arg1), (int) (M2C_FIELD(arg0, s32 *, 0x14)));
    return 0;
}
#pragma pop

#pragma push
#pragma scheduling off
void TObjPlayer__sub_803DAC1C(s32 arg0) {
    TObjPlayer__sub_803DAE98((u8 *)((void *) (lbl_805D7768 + (arg0 * 0x18))), (s32)((void *) (lbl_805D7768)));
}
#pragma pop

void TObjPlayer__sub_803DAD24(void) {

}

#pragma push
#pragma scheduling off
s32 TObjPlayer__sub_803DAD28(u32 arg0) {
    s32 temp_r0;
    s32 temp_r3;
    u8 *var_r3;
    u8 *var_r4;
    temp_r3 = TObjPlayer__sub_803DA55C(arg0);
    if (temp_r3 < 0) {
        var_r3 = (u8 *)((void *)-1);
        return -1;
    }
    var_r4 = (u8 *)((*(u8 * *)&lbl_805D7768));
    var_r4 += temp_r3 * 0x18;
    var_r3 = (u8 *)(M2C_FIELD(var_r4, u8 **, 0xC));
    temp_r0 = (long) (var_r3 + 4);
    var_r3 = (u8 *)(lbl_805D774C);
    M2C_FIELD(var_r3, s32 *, 8) = temp_r0;
    var_r3 = (u8 *)(lbl_805D774C);
    M2C_FIELD(var_r3, s32 *, 0x18) = (s32) M2C_FIELD(var_r4, s32 *, 8);
    var_r3 = (u8 *)((void *)1);
    return 1;
}
#pragma pop

#pragma push
#pragma opt_common_subs off
#pragma scheduling off
#pragma peephole off
#pragma scheduling off
s32 TObjPlayer__sub_803DAE98(u8 *arg0, s32 _w1) {
    s32 temp_r3;
    s32 temp_r3_2;
    u8 *temp_r3_3;
    u8 *temp_r4;
    if ((void *) M2C_FIELD(arg0, u8 **, 0xC) == NULL) {
        return -1;
    }
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_r3 > 0) {
        M2C_FIELD(arg0, s32 *, 0x10) = (s32) (temp_r3 - 1);
    }
    temp_r4 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xC));
    temp_r3_2 = M2C_FIELD(temp_r4, s32 *, 0x24);
    if (temp_r3_2 > 0) {
        M2C_FIELD(temp_r4, s32 *, 0x24) = (s32) (temp_r3_2 - 1);
        temp_r3_3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xC));
        if ((s32) M2C_FIELD(temp_r3_3, s32 *, 0x24) == 0) {
            fn_803DB20C(temp_r3_3 + 4);
            M2C_FIELD(lbl_805D774C, s32 *, 0x14) = -1;
        }
    }
    TObjPlayer__sub_803DA6E0(arg0);
    return 1;
}
#pragma pop

}
