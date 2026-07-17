#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw__10TObjPlayerFPv(void *arg0);
s32 try_pickup_item__10TObjPlayerFi(s32 arg0);
u32 TObjPlayer__sub_801B15A4(s32);
M2C_UNK TObjPlayer__sub_801B8DE8(s32, s32, M2C_UNK);
M2C_UNK set_flags__10TObjPlayerFPvUi(s32, M2C_UNK);
s32 get_position_ptr__10TObjPlayerFPv(void *);
s32 get_field_d8__10TObjPlayerFPv(s32);
M2C_UNK draw_model_with_callback__10TObjPlayerFPviif(void *, s32, f32, s32);
M2C_UNK recover_full__10TObjPlayerFPv(s32);
s32 get_owner_if_alive__10TObjPlayerFPv();
M2C_UNK TObjPlayer__sub_803D8C7C(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();

extern f32 TObjPlayer__data_805DC278;

void draw__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_803D9B2C();
    TObjPlayer__sub_803D8C7C(0, get_position_ptr__10TObjPlayerFPv(arg0));
    TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
    draw_model_with_callback__10TObjPlayerFPviif(arg0, M2C_FIELD(arg0, s32 *, 0xF8), TObjPlayer__data_805DC278, M2C_FIELD(arg0, s32 *, 0xE0));
    TObjPlayer__sub_803D9B78();
}

s32 obj_isState2_324();

s32 try_pickup_item__10TObjPlayerFi(s32 arg0) {
    s32 temp_r3;

    if (obj_isState2_324() != 0) {
        return 0;
    }
    if (TObjPlayer__sub_801B15A4(arg0) != 0U) {
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
