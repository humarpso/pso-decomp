#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Stack_80067EE0 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

#include <stddef.h>
struct Stack_80067E30 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

struct RecoveredGlobal_80067E30_lbl_8058D490 { M2C_UNK value; u8 remaining[0x2C]; };
typedef char RecoveredGlobal_80067E30_lbl_8058D490_size[sizeof(RecoveredGlobal_80067E30_lbl_8058D490) == 0x30 ? 1 : -1];

extern "C" {
void *__nw__7TObjectFUl(int);
void *TCameraCtrl__sub_80068018(void *);
M2C_UNK set_target_pos__11TCameraCtrlFPvPv(void *, void *, f32);
u8 *TPlayerBattleCtrl4P__sub_801BA74C(M2C_UNK);
extern const f32 lbl_805D8F78;
void TCameraCtrl__sub_80067EE0(s32 arg0);
u8 *TPlayerBattleCtrl4P__sub_801BA74C(M2C_UNK);
s32 TCameraCtrl__sub_803D8934(int, void *, void *);
s32 TObjPlayer__sub_803D9214(int, int);
s32 TObjPlayer__sub_803D97F0(void *);
s32 TObjPlayer__sub_803D9B78();
extern RecoveredGlobal_80067E30_lbl_8058D490 lbl_8058D490;
extern const f32 lbl_805D8F74;
void TCameraCtrl__sub_80067E30(u8 *arg0);
}

extern "C" {

void TCameraCtrl__sub_80067CE0(void* p, s32 v);

void * TCameraCtrl__vt7(void) {
    void *o;
    o = __nw__7TObjectFUl(0x74);
    if (o != NULL) {
        o = TCameraCtrl__sub_80068018(o);
    }
    return o;
}

void TCameraCtrl__sub_80067E30(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_80067E30, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80067E30, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_80067E30, sp10) == 0x8) ? 1 : -1];
    Stack_80067E30 stack;
    u8 *temp_r3;
    temp_r3 = (u8 *)(TPlayerBattleCtrl4P__sub_801BA74C((M2C_UNK)(0)));
    if (temp_r3 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) M2C_FIELD(temp_r3, s32 *, 0x60);
        stack.sp8 = lbl_805D8F74;
        stack.spC = lbl_805D8F74;
        stack.sp10 = M2C_FIELD(arg0, f32 *, 0x70);
        TObjPlayer__sub_803D97F0((void *) (&lbl_8058D490.value));
        TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x30)));
        TCameraCtrl__sub_803D8934((int) (0), (void *) (&stack.sp8), (void *) (&stack.sp8));
        TObjPlayer__sub_803D9B78();
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (M2C_FIELD(arg0, f32 *, 0x48) + stack.sp8);
        M2C_FIELD(arg0, f32 *, 0x40) = (f32) (M2C_FIELD(arg0, f32 *, 0x4C) + stack.spC);
        M2C_FIELD(arg0, f32 *, 0x44) = (f32) (M2C_FIELD(arg0, f32 *, 0x50) + stack.sp10);
    }
}

void TCameraCtrl__sub_80067EE0(s32 arg0) {
    Stack_80067EE0 stack;
    u8 *temp_r3;
    temp_r3 = (u8 *)(TPlayerBattleCtrl4P__sub_801BA74C(0));
    if (temp_r3 != NULL) {
        stack.sp8 = M2C_FIELD(temp_r3, f32 *, 0x38);
        stack.spC = lbl_805D8F78 + M2C_FIELD(temp_r3, f32 *, 0x3C);
        stack.sp10 = M2C_FIELD(temp_r3, f32 *, 0x40);
        set_target_pos__11TCameraCtrlFPvPv((void *) (arg0), (void *) (&stack.sp8), (f32) (lbl_805D8F78));
    }
}

}
