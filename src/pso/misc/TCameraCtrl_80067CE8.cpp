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

extern "C" {
void *__nw__7TObjectFUl(int);
void *TCameraCtrl__sub_80068018(void *);
M2C_UNK set_target_pos__11TCameraCtrlFPvPv(void *, void *, f32);
u8 *TPlayerBattleCtrl4P__sub_801BA74C(M2C_UNK);
extern const f32 lbl_805D8F78;
void TCameraCtrl__sub_80067EE0(s32 arg0);
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
