#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK get_item_ptr__10TObjPlayerFPvi(void *, int);
M2C_UNK get_mag_scale_f__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_801415BC();
M2C_UNK reset_transform_state__10TObjPlayerFv();
M2C_UNK play_phase_transition_sound__10TObjPlayerFi(int);
M2C_UNK TCharaMaking__sub_8028DD18(int, void *, int);
M2C_UNK clear_flag_bit0__12TCharaMakingFv();
M2C_UNK enable_making__12TCharaMakingFv();
M2C_UNK TObjPlayer__sub_803D97F0();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK set_global_param__8TObjFishFi(void *);
M2C_UNK TObjFish__sub_803E46BC(int);
void TObjPlayer__sub_801BAC4C(u8 *arg0);
}

extern "C" {

void TObjPlayer__sub_801BAC4C(u8 *arg0) {
    M2C_UNK var_r31;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x8B4) != 0U) {
        get_item_ptr__10TObjPlayerFPvi((void *) (arg0), (int) (0x3A));
        TObjPlayer__sub_803D97F0();
        set_global_param__8TObjFishFi((void *) (arg0 + 0xB88));
        if (M2C_FIELD(arg0, u16 *, 4) & 0x400) {
            TObjPlayer__sub_801415BC();
        }
        play_phase_transition_sound__10TObjPlayerFi((int) (M2C_FIELD(arg0, u32 *, 0x8B4)));
        reset_transform_state__10TObjPlayerFv();
        TObjPlayer__sub_803D9B78();
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x8B0) != 0U) {
        get_item_ptr__10TObjPlayerFPvi((void *) (arg0), (int) (0x3B));
        TObjPlayer__sub_803D97F0();
        set_global_param__8TObjFishFi((void *) (arg0 + 0xA1C));
        if (M2C_FIELD(arg0, u16 *, 4) & 0x400) {
            TObjPlayer__sub_801415BC();
        }
        enable_making__12TCharaMakingFv();
        TObjFish__sub_803E46BC((int) (M2C_FIELD(arg0, u32 *, 0x8B0)));
        clear_flag_bit0__12TCharaMakingFv();
        reset_transform_state__10TObjPlayerFv();
        TObjPlayer__sub_803D9B78();
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x8AC) != 0U) {
        get_item_ptr__10TObjPlayerFPvi((void *) (arg0), (int) (0x3B));
        TObjPlayer__sub_803D97F0();
        set_global_param__8TObjFishFi((void *) (arg0 + 0xA1C));
        var_r31 = 0;
        if (M2C_FIELD(arg0, u16 *, 4) & 0x400) {
            var_r31 = 1;
        }
        enable_making__12TCharaMakingFv();
        get_mag_scale_f__10TObjPlayerFPv((void *) (arg0 + 0x608));
        TCharaMaking__sub_8028DD18((int) (M2C_FIELD(arg0, u32 *, 0x8AC)), (void *) (arg0 + 0x85C), (int) (var_r31));
        clear_flag_bit0__12TCharaMakingFv();
        reset_transform_state__10TObjPlayerFv();
        TObjPlayer__sub_803D9B78();
    }
}

}
