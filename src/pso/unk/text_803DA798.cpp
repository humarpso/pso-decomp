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

struct S_803DA7E0 { s32 a, b, c, d, e; };

struct Obj_803DA7A8 { u8 pad[8]; s32 f8; s32 fc; };

struct Ent_803DA7A8 { s32 a; s32 b; Obj_803DA7A8 *p; };

struct Tbl_803DA7A8 { Ent_803DA7A8 *arr; };

struct G_803DA7A8 { u8 pad[8]; s32 f8; u8 pad2[0xc]; s32 f18; u8 pad3[4]; Tbl_803DA7A8 *f20; };

struct E_803DAB7C { u8 pad[0x18]; };

struct Ent_803DAB7C { s32 a; s32 b; E_803DAB7C *p; };

struct Obj_803DAB7C { Ent_803DAB7C *arr; };

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
extern S_803DA7E0 lbl_8058D470;
void TObjPlayer__sub_803DA7E0(void);
extern u8 *lbl_805D774C;
s32 TParticleCtrl__sub_803DA7A8(s32 i);
extern s32 lbl_805D7768;
void TObjPlayer__sub_803DAB7C(Obj_803DAB7C *self, s32 i, s32 j);
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

#pragma push
#pragma scheduling off
#pragma peephole off
s32 TParticleCtrl__sub_803DA7A8(s32 i) {
    Obj_803DA7A8 *o = ((G_803DA7A8 *)lbl_805D774C)->f20->arr[i].p;
    ((G_803DA7A8 *)lbl_805D774C)->f8 = o->fc + 4;
    ((G_803DA7A8 *)lbl_805D774C)->f18 = o->f8;
    return 1;
}
#pragma pop

#pragma push
#pragma scheduling off
#pragma peephole off
void TObjPlayer__sub_803DA7E0(void) {
    lbl_8058D470.a = -1;
    lbl_8058D470.b = -1;
    lbl_8058D470.c = 0;
    lbl_8058D470.d = 0;
    lbl_8058D470.e = 0;
}
#pragma pop

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
#pragma peephole off
void TObjPlayer__sub_803DAB7C(Obj_803DAB7C *self, s32 i, s32 j) {
    self->arr[i].p = (E_803DAB7C *)lbl_805D7768 + j;
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
