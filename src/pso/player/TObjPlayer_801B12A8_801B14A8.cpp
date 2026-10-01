#include "types.h"
#include "pso/player/TObjPlayer.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
struct Stack_801B15A4 {
    s8 sp8;
    s8 sp9;
    s8 spA;
    u8 rest[17];
};

extern "C" {
M2C_UNK init__9TItemDataFv(void *);
u32 set_mode_and_refresh_object__10TObjPlayerFPvi(int, void *);
}

extern "C" {

void draw__10TObjPlayerFPv(void *arg0);
s32 try_pickup_item__10TObjPlayerFi(s32 arg0);
M2C_UNK TObjPlayer__sub_801B8DE8(s32, s32, M2C_UNK);
M2C_UNK set_flags__10TObjPlayerFPvUi(s32, M2C_UNK);
s32 get_position_ptr__10TObjPlayerFPv(void *);
s32 get_field_d8__10TObjPlayerFPv(s32);
M2C_UNK draw_model_with_callback__10TObjPlayerFPviif(void *, s32, f32, s32);
M2C_UNK recover_full__10TObjPlayerFPv(s32);
s32 get_owner_if_alive__10TObjPlayerFPv();
M2C_UNK set_position_vec3__10TObjPlayerFPvPv(M2C_UNK, s32);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();

extern f32 TObjPlayer__data_805DC278;

void draw__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_803D9B2C();
    set_position_vec3__10TObjPlayerFPvPv(0, get_position_ptr__10TObjPlayerFPv(arg0));
    rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
    draw_model_with_callback__10TObjPlayerFPviif(arg0, M2C_FIELD(arg0, s32 *, 0xF8), TObjPlayer__data_805DC278, M2C_FIELD(arg0, s32 *, 0xE0));
    TObjPlayer__sub_803D9B78();
}

s32 obj_isState2_324();

s32 try_pickup_item__10TObjPlayerFi(s32 arg0) {
    s32 temp_r3;

    if (obj_isState2_324() != 0) {
        return 0;
    }
    if (((TObjPlayer*)arg0)->find_revival_item() != 0U) {
        temp_r3 = get_owner_if_alive__10TObjPlayerFPv();
        if (temp_r3 == 0) {
            return 0;
        }
        recover_full__10TObjPlayerFPv(arg0);
        set_flags__10TObjPlayerFPvUi(arg0 + 0x858, 4);
        TObjPlayer__sub_801B8DE8(arg0, get_field_d8__10TObjPlayerFPv(temp_r3), 1);
        return 1;
    }
    return 0;
}
}

u32 TObjPlayer::find_revival_item() {
    typedef char sp8_offset[(offsetof(Stack_801B15A4, sp8) == 0x0) ? 1 : -1];
    typedef char sp9_offset[(offsetof(Stack_801B15A4, sp9) == 0x1) ? 1 : -1];
    typedef char spA_offset[(offsetof(Stack_801B15A4, spA) == 0x2) ? 1 : -1];
    Stack_801B15A4 stack;
    init__9TItemDataFv((void *) (&stack.sp8));
    stack.sp8 = 1;
    stack.sp9 = 2;
    stack.spA = 0x52;
    u32 found = set_mode_and_refresh_object__10TObjPlayerFPvi((int) inventory_objects, (void *) (&stack.sp8));
    if (found == 0U) {
        init__9TItemDataFv((void *) (&stack.sp8));
        stack.sp8 = 3;
        stack.sp9 = 9;
        found = set_mode_and_refresh_object__10TObjPlayerFPvi((int) inventory_objects, (void *) (&stack.sp8));
    }
    return found;
}
