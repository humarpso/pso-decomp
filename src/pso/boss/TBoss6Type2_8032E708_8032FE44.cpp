#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_8032FE50 {
    s32 sp8;
    s32 spC;
    f32 sp10;
    f32 sp14;
};

extern "C" {
s32 TObjFish__sub_8001EDB0(s32, M2C_UNK);
s32 TObjFish__sub_8001EDC4(s32, M2C_UNK);
M2C_UNK clear_render_callback__8TObjFishFv(s32);
M2C_UNK TObjFish__sub_800E3074(s32);
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK TObjPlayer__sub_803E4A94(s32, s32 *, f32);
M2C_UNK TObjEneSlimeOne__sub_803E4AF4(s32, s32, f32);
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK clear_global_state__10TObjPlayerFv();
extern const f32 lbl_805DF7FC;
void TObjFish__sub_8032FE50(void *arg0);
}

extern "C" {

void sync_hp__11TBoss6Type2FPv(void *arg0);

void sync_hp__11TBoss6Type2FPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x404) = (s32) M2C_FIELD(arg0, s16 *, 0x32C);
}
void TObjFish__sub_8032FE50(void *arg0) {
    Stack_8032FE50 stack;
    s32 temp_r31;
    s32 temp_r31_2;
    set_global_flag__10TObjPlayerFv();
    temp_r31 = TObjFish__sub_8001EDB0(M2C_FIELD(arg0, s32 *, 0x374), 1);
    temp_r31_2 = TObjFish__sub_8001EDC4(M2C_FIELD(arg0, s32 *, 0x374), 1);
    set_global_param__8TObjFishFi(temp_r31);
    if (lbl_805DF7FC == M2C_FIELD(arg0, f32 *, 0x3E8)) {
        TObjFish__sub_800E3074(M2C_FIELD(arg0, s32 *, 0x458));
        TObjEneSlimeOne__sub_803E4AF4(temp_r31_2, M2C_FIELD(arg0, s32 *, 0x3DC), M2C_FIELD(arg0, f32 *, 0x3E0));
        clear_render_callback__8TObjFishFv(M2C_FIELD(arg0, s32 *, 0x458));
    } else {
        stack.sp8 = M2C_FIELD(arg0, s32 *, 0x3F0);
        stack.sp10 = M2C_FIELD(arg0, f32 *, 0x3F4);
        stack.spC = M2C_FIELD(arg0, s32 *, 0x3DC);
        stack.sp14 = M2C_FIELD(arg0, f32 *, 0x3E0);
        TObjFish__sub_800E3074(M2C_FIELD(arg0, s32 *, 0x458));
        TObjPlayer__sub_803E4A94(temp_r31_2, &stack.sp8, M2C_FIELD(arg0, f32 *, 0x3E8));
        clear_render_callback__8TObjFishFv(M2C_FIELD(arg0, s32 *, 0x458));
    }
    clear_global_state__10TObjPlayerFv();
}

}
