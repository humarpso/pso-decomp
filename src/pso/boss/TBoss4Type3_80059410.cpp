#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
struct Stack_80059450 {
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 sp34;
};

struct RecoveredGlobal_80059450_lbl_80437854 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_80059450_lbl_80437860 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_80059450_lbl_8043786C {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_80059450_lbl_80437878 {
    M2C_UNK value;
    u8 remaining[0xC];
};

extern "C" {
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
extern const f32 TBoss4Type3__data_805D8C34;
extern const f32 TBoss4Type3__data_805D8C40;
extern const f32 lbl_805D8C90;
extern const f32 lbl_805D8C94;
extern const f32 lbl_805D8C98;
void TBoss4Type3__sub_80059FC4(u8 *arg0);
s32 TCameraCtrl__sub_8006D2B0(void *, void *, int);
extern RecoveredGlobal_80059450_lbl_80437854 lbl_80437854;
extern RecoveredGlobal_80059450_lbl_80437860 lbl_80437860;
extern RecoveredGlobal_80059450_lbl_8043786C lbl_8043786C;
extern RecoveredGlobal_80059450_lbl_80437878 lbl_80437878;
void TBoss4Type3__sub_80059450(u8 *arg0);
}

extern "C" {

void TBoss4Type3__vt0(void* p);
void TBoss4Type3__vt1(void* p);
void calc_grid_index__11TBoss4Type3FPv(void *arg0);
s32 get_random_scaled__11TBoss4Type3Fv(void);
void spawn_random_effect__11TBoss4Type3Fi(s32 arg0);
void update_target_effect_timer__11TBoss4Type3FPv(void *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
int TBoss4Type3__sub_800599F4(void*, void*, void*);
M2C_UNK TBoss4Type3__sub_80059F04(s32, M2C_UNK, s32, s32);
f32 calc_boss4_scale__10TObjPlayerFi();
s32 is_split_screen();
M2C_UNK spawn_effect__11TBoss4Type3Fsss(M2C_UNK, M2C_UNK, s16);

void TBoss4Type3__vt1(void* p) { if (*(int*)((char*)p + 0x398) == 0) { TBoss4Type3__sub_800599F4(p, (void*)0, (void*)2); } }
void TBoss4Type3__vt0(void* p) { *(s32*)((char*)p + 0x398) = 147; }

extern s32 lbl_805D4D80;
extern u8 lbl_805D4D84;
extern s32 lbl_805D53A0;

#pragma push
#pragma opt_common_subs off
typedef char RecoveredGlobal_80059450_lbl_80437854_size[sizeof(RecoveredGlobal_80059450_lbl_80437854) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_80059450_lbl_80437860_size[sizeof(RecoveredGlobal_80059450_lbl_80437860) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_80059450_lbl_8043786C_size[sizeof(RecoveredGlobal_80059450_lbl_8043786C) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_80059450_lbl_80437878_size[sizeof(RecoveredGlobal_80059450_lbl_80437878) == 0x10 ? 1 : -1];
void TBoss4Type3__sub_80059450(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_80059450, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80059450, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_80059450, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_80059450, sp14) == 0xC) ? 1 : -1];
    typedef char sp18_offset[(offsetof(Stack_80059450, sp18) == 0x10) ? 1 : -1];
    typedef char sp1C_offset[(offsetof(Stack_80059450, sp1C) == 0x14) ? 1 : -1];
    typedef char sp20_offset[(offsetof(Stack_80059450, sp20) == 0x18) ? 1 : -1];
    typedef char sp24_offset[(offsetof(Stack_80059450, sp24) == 0x1C) ? 1 : -1];
    typedef char sp28_offset[(offsetof(Stack_80059450, sp28) == 0x20) ? 1 : -1];
    typedef char sp2C_offset[(offsetof(Stack_80059450, sp2C) == 0x24) ? 1 : -1];
    typedef char sp30_offset[(offsetof(Stack_80059450, sp30) == 0x28) ? 1 : -1];
    typedef char sp34_offset[(offsetof(Stack_80059450, sp34) == 0x2C) ? 1 : -1];
    Stack_80059450 stack;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x52C) == 1) {
        stack.sp2C = M2C_FIELD(&lbl_80437854.value, s32 *, 0);
        stack.sp30 = M2C_FIELD(&lbl_80437854.value, s32 *, 4);
        stack.sp34 = M2C_FIELD(&lbl_80437854.value, s32 *, 8);
        stack.sp20 = M2C_FIELD(&lbl_80437860.value, s32 *, 0);
        stack.sp24 = M2C_FIELD(&lbl_80437860.value, s32 *, 4);
        stack.sp28 = M2C_FIELD(&lbl_80437860.value, s32 *, 8);
        TCameraCtrl__sub_8006D2B0((void *) (&stack.sp20), (void *) (&stack.sp2C), (int) (0xFFFFU));
        return;
    }
    stack.sp14 = M2C_FIELD(&lbl_8043786C.value, s32 *, 0);
    stack.sp18 = M2C_FIELD(&lbl_8043786C.value, s32 *, 4);
    stack.sp1C = M2C_FIELD(&lbl_8043786C.value, s32 *, 8);
    stack.sp8 = M2C_FIELD(&lbl_80437878.value, s32 *, 0);
    stack.spC = M2C_FIELD(&lbl_80437878.value, s32 *, 4);
    stack.sp10 = M2C_FIELD(&lbl_80437878.value, s32 *, 8);
    TCameraCtrl__sub_8006D2B0((void *) (&stack.sp8), (void *) (&stack.sp14), (int) (0xFFFFU));
}
#pragma pop

void update_target_effect_timer__11TBoss4Type3FPv(void *arg0) {
    s32 temp_r30;
    s32 var_r30;

    var_r30 = 1;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x374) == 0x10) {
        var_r30 = 0;
    }
    if (is_split_screen() != 0) {
        if (M2C_FIELD(arg0, u16 *, 0x3BA) == 0xFFFF) {
            var_r30 = 0;
        }
    } else if ((s32) M2C_FIELD(arg0, u16 *, 0x3BA) != (s32) lbl_805D53A0) {
        var_r30 = 0;
    }
    if (var_r30 == 0) {
        M2C_FIELD(arg0, s32 *, 0x3D8) = 0;
        return;
    }
    if ((s8) lbl_805D4D84 == 0) {
        lbl_805D4D80 = 8;
        lbl_805D4D84 = 1;
    }
    temp_r30 = M2C_FIELD(arg0, s32 *, 0x3D8) % 39;
    if (temp_r30 == 0) {
        spawn_effect__11TBoss4Type3Fsss(0x60, 0xF, (s16) M2C_FIELD(arg0, u16 *, 0x3BA));
    }
    if (temp_r30 == (s32) lbl_805D4D80) {
        TBoss3Volopt__sub_8022675C(0x4003C133, 0, 0, 0);
    }
    M2C_FIELD(arg0, s32 *, 0x3D8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3D8) + 1);
}

void calc_grid_index__11TBoss4Type3FPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3AC) = (s32) (((u32) -(M2C_FIELD(arg0, s32 *, 0x60) + 0x800) >> 0xCU) & 0xF);
    M2C_FIELD(arg0, s32 *, 0x3A8) = (s32) (((u32) -(M2C_FIELD(arg0, s32 *, 0x60) + 0x800) >> 0xCU) & 0xF);
}

extern f32 lbl_805D8C80;

s32 get_random_scaled__11TBoss4Type3Fv(void) {
    return (s32) (lbl_805D8C80 * calc_boss4_scale__10TObjPlayerFi());
}

extern f32 lbl_805D8C8C;

void spawn_random_effect__11TBoss4Type3Fi(s32 arg0) {
    s32 temp_r5;

    temp_r5 = (s32) (lbl_805D8C8C * calc_boss4_scale__10TObjPlayerFi());
    TBoss4Type3__sub_80059F04(arg0, 0xF, temp_r5, temp_r5);
}
#pragma push
#pragma opt_common_subs off
void TBoss4Type3__sub_80059FC4(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f31;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 var_r3;
    s32 var_r5;
    s32 var_r6;
    u8 *var_r31;
    u8 *var_r4;
    var_r31 = (u8 *)(arg0);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x374);
    temp_f31 = M2C_FIELD(arg0, f32 *, 0x3B0);
    if ((temp_r0 == 2) || (temp_r0 == 3)) {
        temp_f1 = M2C_FIELD(var_r31, f32 *, 0x3B0) + lbl_805D8C90;
        M2C_FIELD(var_r31, f32 *, 0x3B0) = temp_f1;
        if (temp_f1 > TBoss4Type3__data_805D8C34) {
            M2C_FIELD(var_r31, f32 *, 0x3B0) = (f32) TBoss4Type3__data_805D8C34;
        }
    } else {
        var_r3 = M2C_FIELD(var_r31, s32 *, 0x3B4);
        M2C_FIELD(var_r31, s32 *, 0x3B4) = (s32) (var_r3 + 1);
        temp_r0_2 = M2C_FIELD(var_r31, s32 *, 0x3B4);
        if (temp_r0_2 < 0x78) {
            M2C_FIELD(var_r31, f32 *, 0x3B0) = (f32) TBoss4Type3__data_805D8C34;
        } else if (temp_r0_2 < 0x96) {
            temp_f1_2 = M2C_FIELD(var_r31, f32 *, 0x3B0) + lbl_805D8C94;
            M2C_FIELD(var_r31, f32 *, 0x3B0) = temp_f1_2;
            if (temp_f1_2 < TBoss4Type3__data_805D8C40) {
                M2C_FIELD(var_r31, f32 *, 0x3B0) = (f32) TBoss4Type3__data_805D8C40;
            }
        } else if (temp_r0_2 < 0x10E) {
            M2C_FIELD(var_r31, f32 *, 0x3B0) = (f32) TBoss4Type3__data_805D8C40;
        } else if (temp_r0_2 < 0x12C) {
            temp_f1_3 = M2C_FIELD(var_r31, f32 *, 0x3B0) + lbl_805D8C98;
            M2C_FIELD(var_r31, f32 *, 0x3B0) = temp_f1_3;
            if (temp_f1_3 > TBoss4Type3__data_805D8C34) {
                M2C_FIELD(var_r31, f32 *, 0x3B0) = (f32) TBoss4Type3__data_805D8C34;
            }
        } else {
            M2C_FIELD(var_r31, f32 *, 0x3B0) = (f32) TBoss4Type3__data_805D8C34;
            M2C_FIELD(var_r31, s32 *, 0x3B4) = 0;
        }
        if (((TBoss4Type3__data_805D8C40 == temp_f31) && (M2C_FIELD(var_r31, f32 *, 0x3B0) > TBoss4Type3__data_805D8C40)) || ((TBoss4Type3__data_805D8C34 == temp_f31) && (M2C_FIELD(var_r31, f32 *, 0x3B0) < TBoss4Type3__data_805D8C34))) {
            var_r3 = 0x40040000;
            var_r4 = (u8 *)(var_r31) + 0x38;
            var_r3 = 0x4003B02F;
            var_r5 = 0;
            var_r6 = 1;
            TBoss3Volopt__sub_8022675C((M2C_UNK)((int) (0x4003B02F)), (M2C_UNK)((int) (var_r4)), (M2C_UNK)((int) (0)), (M2C_UNK)((int) (1)));
        }
        if ((temp_f31 > TBoss4Type3__data_805D8C40) && (TBoss4Type3__data_805D8C40 == M2C_FIELD(var_r31, f32 *, 0x3B0))) {
            var_r3 = 0x40040000;
            var_r4 = (u8 *)(var_r31) + 0x38;
            var_r3 = 0x4003AD30;
            var_r5 = 0;
            var_r6 = 1;
            TBoss3Volopt__sub_8022675C((M2C_UNK)((int) (0x4003AD30)), (M2C_UNK)((int) (var_r4)), (M2C_UNK)((int) (0)), (M2C_UNK)((int) (1)));
        }
    }
}
#pragma pop

}
