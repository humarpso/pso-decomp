#include "types.h"
#include "pso/misc/CharacterAppearance.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>
struct Stack_801BAD60 {
    M2C_UNK sp8;
    f32 spC;
};

extern "C" {
M2C_UNK get_item_ptr__10TObjPlayerFPvi(void *, int);
f32 get_mag_scale_f__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_801415BC();
M2C_UNK reset_transform_state__10TObjPlayerFv();
M2C_UNK play_phase_transition_sound__10TObjPlayerFi(int);
M2C_UNK clear_flag_bit0__12TCharaMakingFv();
M2C_UNK enable_making__12TCharaMakingFv();
M2C_UNK TObjPlayer__sub_803D97F0();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK set_global_param__8TObjFishFi(void *);
M2C_UNK TObjFish__sub_803E46BC(int);
void TObjPlayer__sub_801BAC4C(u8 *arg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 check_state_flag_1__8TItemMagFPv(void *);
M2C_UNK TObjPlayer__sub_801415BC();
s32 TObjPlayer__sub_80142F1C(void *);
s32 draw_model_with_callback__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_801B4C34(void *);
s32 TObjPlayer__sub_801BAB78(void *, void *, int);
void TObjPlayer__sub_801BAC4C(u8 *arg0);
u8 *TObjPlayer__sub_801BF934(void *);
s32 write_ids__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_801C5B68(void *);
s32 TOMonitorMachine01__sub_803D8B5C(int, f32, f32, f32);
s32 set_position_vec3__10TObjPlayerFPvPv(int, void *);
s32 TObjPlayer__sub_803D9214(int, int);
s32 TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK set_global_param__8TObjFishFi(void *);
s32 set_some_id__FUl(int);
s32 set_chunk_material_override_pair(int, int);
s32 set_global_flag__10TObjPlayerFv();
s32 clear_global_state__10TObjPlayerFv();
extern s32 some_id_805c6f74;
void TObjPlayer__sub_801BAD60(u8 *arg0, s32 arg1);
s32 obj_isState2_324(void *);
void obj_clearFlags30(void *, u32);
f32 get_speed__10TObjPlayerFPv(void *);
void TObjLight__sub_80134098(void);
void TObjLight__sub_80134194(void *);
void set_depth_buffer_settings_id__FUl(u32);
s32 check_flag_800000__10TObjPlayerFPv(void *);
void draw__10TObjPlayerFPvf(void *, f32);
s32 TObjPlayer__sub_801B4C34(void *);
void TObjPlayer__sub_801BAC48(void *);
void TObjPlayer__sub_801BAD60(u8 *arg0, s32 arg1);
s32 write_ids__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_801C5B68(void *);
void end_effect_render__13TParticleCtrlFv(void);
extern s32 some_id_805c6f74;
void TObjPlayer__sub_801BB118(u8 *self, f32 f);
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
        f32 alpha = get_mag_scale_f__10TObjPlayerFPv(arg0 + 0x608);
        TCharaMaking__draw_colored_hair(alpha, (s32)M2C_FIELD(arg0, u32 *, 0x8AC),
            (CharacterAppearanceFields *)(arg0 + 0x85C), var_r31);
        clear_flag_bit0__12TCharaMakingFv();
        reset_transform_state__10TObjPlayerFv();
        TObjPlayer__sub_803D9B78();
    }
}
void TObjPlayer__sub_801BAD60(u8 *arg0, s32 arg1) {
    typedef char sp8_offset[(offsetof(Stack_801BAD60, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_801BAD60, spC) == 0x4) ? 1 : -1];
    Stack_801BAD60 stack;
    u8 *temp_r3;
    TObjPlayer__sub_803D9B2C();
    VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (arg0 + 0x38));
    stack.spC += M2C_FIELD(arg0, f32 *, 0x5FC);
    set_position_vec3__10TObjPlayerFPvPv((int) (0), (void *) (&stack.sp8));
    TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    if (check_state_flag_1__8TItemMagFPv((void *) (arg0 + 0x5B0)) != 0) {
        temp_r3 = (u8 *)(TObjPlayer__sub_801BF934(arg0 + 0x5B0));
        TOMonitorMachine01__sub_803D8B5C((int) (0), (f32) (M2C_FIELD(temp_r3, f32 *, 0)), (f32) (M2C_FIELD(temp_r3, f32 *, 4)), (f32) (M2C_FIELD(temp_r3, f32 *, 8)));
    }
    TObjPlayer__sub_801C5B68((void *) (arg0 + 0x608));
    set_some_id__FUl((int) (8));
    TObjPlayer__sub_801B4C34((void *) (arg0));
    if (M2C_FIELD(arg0, u16 *, 4) & 0x400) {
        some_id_805c6f74 |= 0x810;
        set_chunk_material_override_pair((int) (-1), (int) (0x800));
        TObjPlayer__sub_801415BC();
    }
    set_global_param__8TObjFishFi((void *) (arg0 + 0xCF4));
    set_global_flag__10TObjPlayerFv();
    if (arg1 == 2) {
        M2C_FIELD(arg0, s32 *, 0xB0) = (s32) (M2C_FIELD(arg0, s32 *, 0xB0) | 0x400);
        TObjPlayer__sub_80142F1C((void *) (arg0));
    } else {
        M2C_FIELD(arg0, s32 *, 0xB0) = (s32) (M2C_FIELD(arg0, s32 *, 0xB0) & 0xFFFFFBFF);
        draw_model_with_callback__10TObjPlayerFPv((void *) (arg0));
    }
    clear_global_state__10TObjPlayerFv();
    TObjPlayer__sub_801BAC4C((u8 *)((void *) (arg0)));
    write_ids__10TObjPlayerFPv((void *) (arg0 + 0x608));
    TObjPlayer__sub_803D9B78();
    if (check_state_flag_1__8TItemMagFPv((void *) (arg0 + 0x5B0)) != 0) {
        TObjPlayer__sub_801BAB78((void *) (arg0), (void *) (TObjPlayer__sub_801BF934(arg0 + 0x5B0)), (int) (0));
        return;
    }
    TObjPlayer__sub_801BAB78((void *) (arg0), (void *) (NULL), (int) (0));
}
void TObjPlayer__sub_801BB118(u8 *self, f32 f) {
    obj_clearFlags30(self, 0x08000000);
    end_effect_render__13TParticleCtrlFv();
    TObjLight__sub_80134194(self);
    if (check_flag_800000__10TObjPlayerFPv(self) != 0 && obj_isState2_324(self) != 0) {
        draw__10TObjPlayerFPvf(self, get_speed__10TObjPlayerFPv(self));
    } else if (!(*(u16 *)(self + 4) & 0x400)) {
        some_id_805c6f74 |= 1;
        TObjPlayer__sub_801BAD60(self, (s32)f);
        some_id_805c6f74 &= ~1;
    }
    TObjPlayer__sub_801C5B68(self + 0x608);
    TObjPlayer__sub_801B4C34(self);
    set_depth_buffer_settings_id__FUl(1);
    TObjPlayer__sub_801BAC48(self);
    write_ids__10TObjPlayerFPv(self + 0x608);
    TObjLight__sub_80134098();
}

}
