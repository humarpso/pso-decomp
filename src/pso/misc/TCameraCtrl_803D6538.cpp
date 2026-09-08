#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
struct Stack_803D6DDC {
    u8 * sp8;
    u8 * spC;
    f32 sp10;
};

struct Stack_803D6E8C {
    u8 * sp8;
    u8 * spC;
    f32 sp10;
};

struct RecoveredGlobal_803D662C_lbl_8058D4D0 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_803D77C0_lbl_8047E3C8 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_803D77C0_lbl_804FA500 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_803D77C0_lbl_804FA50C {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_803D77C0_lbl_804FA51C {
    s32 value;
    u8 remaining[0x20];
};

struct RecoveredGlobal_803D78A8_lbl_8058CAB8 {
    M2C_UNK value;
    u8 remaining[0x7C];
};

extern "C" {
void TObjPlayer__sub_803D7A54(void *, s32, s32, void *, void *, void *, f32);
void TObjPlayer__sub_803D6DDC(u8 *arg0, s32 arg1, u8 *arg2, f32 farg0);
void TObjPlayer__sub_803D7A54(void *, s32, s32, void *, void *, void *, f32);
extern const f32 lbl_805E0E50;
void TObjPlayer__sub_803D6E8C(u8 *arg0, s32 arg1, u8 *arg2, f32 farg0);
void MTXLookAt(void *, void *, void *, void *);
extern u8 *lbl_805D7774;
void set_camera_look_at(u8 *arg0, u8 *arg1, u8 *arg2);
M2C_UNK TObjPlayer__sub_803D7BB0(int, f32);
extern f32 lbl_805D76B0;
void TObjPlayer__sub_803D749C(u8 *arg0, f32 farg0);
extern RecoveredGlobal_803D662C_lbl_8058D4D0 lbl_8058D4D0;
extern const f32 lbl_805E0E00;
extern const f32 lbl_805E0E04;
void TCameraCtrl__sub_803D662C(f32 farg0, f32 farg1);
s32 TObjPlayer__sub_803D7740(int);
extern RecoveredGlobal_803D77C0_lbl_8047E3C8 lbl_8047E3C8;
extern RecoveredGlobal_803D77C0_lbl_804FA500 lbl_804FA500;
extern RecoveredGlobal_803D77C0_lbl_804FA50C lbl_804FA50C;
extern RecoveredGlobal_803D77C0_lbl_804FA51C lbl_804FA51C;
extern u8 *lbl_805D76BC;
extern s32 lbl_805D7808;
void TObjPlayer__sub_803D77C0(M2C_UNK *arg0, f32 farg0);
M2C_UNK TObjPlayer__sub_803D7BB0(int, f32);
void TObjPlayer__sub_803D7B68(s32 arg0, f32 farg0);
extern RecoveredGlobal_803D78A8_lbl_8058CAB8 lbl_8058CAB8;
extern u8 *lbl_805D76BC;
void TBoss8Dragon__sub_803D78A8(s32 arg0);
}

extern "C" {

void TCameraCtrl__sub_803D65F8(void);
s32 TObjPlayer__sub_803D7FD0(void);
s32 TObjPlayer__sub_803D7FD8(void);
void update_camera_state__11TCameraCtrlFv(void);
M2C_UNK TCameraCtrl__sub_803D65C8();

void update_camera_state__11TCameraCtrlFv(void) {
    TCameraCtrl__sub_803D65C8();
}

void TCameraCtrl__sub_803D65F8(void) {

}

#pragma push
#pragma scheduling off
void set_camera_look_at(u8* eye, u8* target, u8* up) {
    MTXLookAt(lbl_805D7774, eye, up, target);
}
#pragma pop

#pragma push
#pragma opt_common_subs off
#pragma scheduling off
typedef char RecoveredGlobal_803D662C_lbl_8058D4D0_size[sizeof(RecoveredGlobal_803D662C_lbl_8058D4D0) == 0x28 ? 1 : -1];
void TCameraCtrl__sub_803D662C(f32 farg0, f32 farg1) {
    f32 var_f1;
    f32 var_f2;
    var_f1 = farg0;
    var_f2 = farg1;
    if (var_f1 > lbl_805E0E00) {
        var_f1 = lbl_805E0E00;
    }
    if (var_f1 < lbl_805E0E04) {
        var_f1 = lbl_805E0E04;
    }
    if (var_f2 > lbl_805E0E00) {
        var_f2 = lbl_805E0E00;
    }
    if (var_f2 < lbl_805E0E04) {
        var_f2 = lbl_805E0E04;
    }
    M2C_FIELD(&lbl_8058D4D0.value, f32 *, 4) = (f32) -var_f1;
    M2C_FIELD(&lbl_8058D4D0.value, f32 *, 0) = (f32) -var_f2;
}
#pragma pop

#pragma push
#pragma scheduling off
void TObjPlayer__sub_803D6DDC(u8 *arg0, s32 arg1, u8 *arg2, f32 farg0) {
    typedef char sp8_offset[(offsetof(Stack_803D6DDC, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_803D6DDC, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_803D6DDC, sp10) == 0x8) ? 1 : -1];
    Stack_803D6DDC stack;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    TObjPlayer__sub_803D7A54(arg0, 0x10, arg1, &stack.spC, &stack.sp8, &stack.sp10, farg0);
    temp_f2 = M2C_FIELD(stack.spC, f32 *, 4);
    M2C_FIELD(arg2, f32 *, 0) = (f32) (temp_f2 + (stack.sp10 * (M2C_FIELD(stack.sp8, f32 *, 4) - temp_f2)));
    temp_f2_2 = M2C_FIELD(stack.spC, f32 *, 8);
    M2C_FIELD(arg2, f32 *, 4) = (f32) (temp_f2_2 + (stack.sp10 * (M2C_FIELD(stack.sp8, f32 *, 8) - temp_f2_2)));
    temp_f2_3 = M2C_FIELD(stack.spC, f32 *, 0xC);
    M2C_FIELD(arg2, f32 *, 8) = (f32) (temp_f2_3 + (stack.sp10 * (M2C_FIELD(stack.sp8, f32 *, 0xC) - temp_f2_3)));
}
#pragma pop

#pragma push
#pragma scheduling off
void TObjPlayer__sub_803D6E8C(u8 *arg0, s32 arg1, u8 *arg2, f32 farg0) {
    typedef char sp8_offset[(offsetof(Stack_803D6E8C, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_803D6E8C, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_803D6E8C, sp10) == 0x8) ? 1 : -1];
    Stack_803D6E8C stack;
    f32 temp_f2;
    f32 temp_f2_2;
    TObjPlayer__sub_803D7A54(arg0, 0x10, arg1, &stack.spC, &stack.sp8, &stack.sp10, farg0);
    temp_f2 = M2C_FIELD(stack.spC, f32 *, 4);
    M2C_FIELD(arg2, f32 *, 0) = (f32) (temp_f2 + (stack.sp10 * (M2C_FIELD(stack.sp8, f32 *, 4) - temp_f2)));
    temp_f2_2 = M2C_FIELD(stack.spC, f32 *, 8);
    M2C_FIELD(arg2, f32 *, 4) = (f32) (temp_f2_2 + (stack.sp10 * (M2C_FIELD(stack.sp8, f32 *, 8) - temp_f2_2)));
    M2C_FIELD(arg2, f32 *, 8) = (f32) lbl_805E0E50;
}
#pragma pop

#pragma push
#pragma scheduling off
void TObjPlayer__sub_803D749C(u8 *arg0, f32 farg0) {
    TBoss8Dragon__sub_803D78A8((s32)((int) (1)));
    TObjPlayer__sub_803D7BB0((int) (M2C_FIELD(arg0, s32 *, 4)), (f32) (M2C_FIELD(arg0, f32 *, 0xC)));
    TBoss8Dragon__sub_803D78A8((s32)((int) (0)));
    TObjPlayer__sub_803D7BB0((int) (M2C_FIELD(arg0, s32 *, 0)), (f32) (M2C_FIELD(arg0, f32 *, 8)));
    lbl_805D76B0 = farg0;
}
#pragma pop

#pragma push
#pragma opt_common_subs off
#pragma scheduling off
#pragma peephole off
typedef char RecoveredGlobal_803D77C0_lbl_8047E3C8_size[sizeof(RecoveredGlobal_803D77C0_lbl_8047E3C8) == 0x10 ? 1 : -1];
typedef char RecoveredGlobal_803D77C0_lbl_804FA500_size[sizeof(RecoveredGlobal_803D77C0_lbl_804FA500) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_803D77C0_lbl_804FA50C_size[sizeof(RecoveredGlobal_803D77C0_lbl_804FA50C) == 0x10 ? 1 : -1];
typedef char RecoveredGlobal_803D77C0_lbl_804FA51C_size[sizeof(RecoveredGlobal_803D77C0_lbl_804FA51C) == 0x24 ? 1 : -1];
void TObjPlayer__sub_803D77C0(M2C_UNK *arg0, f32 farg0) {
    M2C_UNK *var_r3;
    s32 temp_r31;
    s32 temp_r4;
    var_r3 = (M2C_UNK *)(arg0);
    if (var_r3 == NULL) {
        var_r3 = (M2C_UNK *)(&lbl_8047E3C8.value);
    }
    temp_r31 = (s32) (M2C_FIELD(var_r3, u16 *, 0xA) & 0xC0) >> 6;
    M2C_FIELD(lbl_805D76BC, s32 *, 0) = (s32) M2C_FIELD(var_r3, s32 *, 0);
    M2C_FIELD(lbl_805D76BC, s32 *, 0x18) = (s32) M2C_FIELD(var_r3, s32 *, 4);
    M2C_FIELD(lbl_805D76BC, s32 *, 0x20) = (s32) M2C_FIELD(var_r3, u16 *, 8);
    M2C_FIELD(lbl_805D76BC, f32 *, 0x14) = farg0;
    M2C_FIELD(lbl_805D76BC, s32 *, 0x1C) = 0;
    TObjPlayer__sub_803D7740((int) (M2C_FIELD(var_r3, u16 *, 0xA) & 0xFFFFFF3F));
    temp_r4 = temp_r31 * 4;
    M2C_FIELD(lbl_805D76BC, s32 *, 0x24) = (s32) M2C_FIELD(&lbl_804FA500.value, M2C_UNK *, temp_r4);
    if ((s32) lbl_805D7808 != 0) {
        M2C_FIELD(lbl_805D76BC, s32 *, 0x28) = (s32) M2C_FIELD(&lbl_804FA50C.value, s32 *, 0xC);
    } else {
        M2C_FIELD(lbl_805D76BC, s32 *, 0x28) = (s32) M2C_FIELD(&lbl_804FA50C.value, M2C_UNK *, temp_r4);
    }
    M2C_FIELD(lbl_805D76BC, s32 *, 0x2C) = (s32) lbl_804FA51C.value;
}
#pragma pop

#pragma push
#pragma scheduling off
typedef char RecoveredGlobal_803D78A8_lbl_8058CAB8_size[sizeof(RecoveredGlobal_803D78A8_lbl_8058CAB8) == 0x80 ? 1 : -1];
void TBoss8Dragon__sub_803D78A8(s32 arg0) {
    lbl_805D76BC = (u8 *)(&lbl_8058CAB8.value) + (arg0 << 6);
}
#pragma pop

#pragma push
#pragma scheduling off
void TObjPlayer__sub_803D7B68(s32 arg0, f32 farg0) {
    TBoss8Dragon__sub_803D78A8((s32)((int) (0)));
    TObjPlayer__sub_803D7BB0((int)((void *) (arg0)), (f32) (farg0));
}
#pragma pop

s32 TObjPlayer__sub_803D7FD0(void) {
    return 0;
}

s32 TObjPlayer__sub_803D7FD8(void) {
    return 0;
}

}
