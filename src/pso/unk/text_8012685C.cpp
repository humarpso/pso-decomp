#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Stack_8012685C {
    f32 sp8;
    f32 spC;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp1C;
};

extern "C" {
u8 get_slot_count__14TItemProShieldFPv(s32);
s32 get_player_list__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_803D8F74(M2C_UNK, f32 *, f32);
extern s32 lbl_805D5518;
extern const f32 lbl_805DAD80;
extern const f32 lbl_805DAD94;
void TObjPlayer__sub_8012685C(s32 arg0);
}

extern "C" {

void TObjPlayer__sub_8012685C(s32 arg0) {
    Stack_8012685C stack;
    if ((get_player_list__10TObjPlayerFv() == 0) && (get_slot_count__14TItemProShieldFPv(arg0) == 3) && ((s32) lbl_805D5518 != 0)) {
        stack.sp10 = lbl_805DAD94;
        stack.spC = lbl_805DAD94;
        stack.sp8 = lbl_805DAD94;
        stack.sp1C = lbl_805DAD94;
        stack.sp18 = lbl_805DAD94;
        stack.sp14 = lbl_805DAD80;
        TObjPlayer__sub_803D8F74(0, &stack.sp8, lbl_805DAD94);
    }
}

}
