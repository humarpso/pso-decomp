#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_chara_making__10TObjPlayerFPv(u8 *arg0);
u32 get_field_498__14TAdPlyStatusGCFPv(int);
M2C_UNK get_chara_making_data__14TAdPlyStatusGCFPv(int);
u32 get_field_49c__14TAdPlyStatusGCFPv(int);
M2C_UNK get_field_4a0__14TAdPlyStatusGCFPv(int);
M2C_UNK get_status_data__14TAdPlyStatusGCFPv(int);
s32 get_field_4a4__14TAdPlyStatusGCFPv(int);
M2C_UNK get_status_sub__14TAdPlyStatusGCFPv(int);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK set_global_param__8TObjFishFi();
M2C_UNK get_item_ptr__10TObjPlayerFPvi(void *, int);
M2C_UNK play_phase_transition_sound__10TObjPlayerFi();
M2C_UNK TObjPlayer__sub_802E0580(void *, int, void *);
M2C_UNK draw_model_with_arg__10TObjPlayerFPvPv(void *, int);
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjPlayer__sub_803D97F0();
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK clear_flag_bit0__12TCharaMakingFv();
M2C_UNK enable_making__12TCharaMakingFv();

void update_chara_making__10TObjPlayerFPv(u8 *arg0) {
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
    TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    get_status_sub__14TAdPlyStatusGCFPv((int) (M2C_FIELD(arg0, s32 *, 0x170)));
    set_global_param__8TObjFishFi();
    draw_model_with_arg__10TObjPlayerFPvPv((void *) (arg0), (int) (get_field_4a4__14TAdPlyStatusGCFPv((int) (M2C_FIELD(arg0, s32 *, 0x170)))));
    get_item_ptr__10TObjPlayerFPvi((void *) (arg0), (int) (0x3A));
    TObjPlayer__sub_803D97F0();
    get_status_data__14TAdPlyStatusGCFPv((int) (M2C_FIELD(arg0, s32 *, 0x170)));
    set_global_param__8TObjFishFi();
    get_field_4a0__14TAdPlyStatusGCFPv((int) (M2C_FIELD(arg0, s32 *, 0x170)));
    play_phase_transition_sound__10TObjPlayerFi();
    TObjPlayer__sub_803D9B78();
    if (get_field_49c__14TAdPlyStatusGCFPv((int) (M2C_FIELD(arg0, s32 *, 0x170))) != 0U) {
        get_item_ptr__10TObjPlayerFPvi((void *) (arg0), (int) (0x3B));
        TObjPlayer__sub_803D97F0();
        get_chara_making_data__14TAdPlyStatusGCFPv((int) (M2C_FIELD(arg0, s32 *, 0x170)));
        set_global_param__8TObjFishFi();
        enable_making__12TCharaMakingFv();
        get_field_49c__14TAdPlyStatusGCFPv((int) (M2C_FIELD(arg0, s32 *, 0x170)));
        play_phase_transition_sound__10TObjPlayerFi();
        clear_flag_bit0__12TCharaMakingFv();
        TObjPlayer__sub_803D9B78();
    }
    if (get_field_498__14TAdPlyStatusGCFPv((int) (M2C_FIELD(arg0, s32 *, 0x170))) != 0U) {
        get_item_ptr__10TObjPlayerFPvi((void *) (arg0), (int) (0x3B));
        TObjPlayer__sub_803D97F0();
        get_chara_making_data__14TAdPlyStatusGCFPv((int) (M2C_FIELD(arg0, s32 *, 0x170)));
        set_global_param__8TObjFishFi();
        enable_making__12TCharaMakingFv();
        TObjPlayer__sub_802E0580((void *) (arg0), (int) (get_field_498__14TAdPlyStatusGCFPv((int) (M2C_FIELD(arg0, s32 *, 0x170)))), (void *) (arg0 + 0x120));
        clear_flag_bit0__12TCharaMakingFv();
        TObjPlayer__sub_803D9B78();
    }
    TObjPlayer__sub_803D9B78();
}

}
