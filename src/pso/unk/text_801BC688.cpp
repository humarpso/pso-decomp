#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_801BC688 { char pad[8]; };

struct VObj_801BC688 : Base_801BC688 { virtual void m0(); virtual void m1(int); };

extern "C" {
void release_child_object__10TObjPlayerFPv(void *arg0);
s32 get_player_count__10TObjPlayerFv(void);
s32 get_hold_effect_count__10TObjPlayerFv(void);
u8 * ct_variant__6TLobbyFPv(void *);
u8 * init_vtable8__6TLobbyFPv(void *);
M2C_UNK reset_state__10TObjPlayerFPv(void *);
M2C_UNK set_battle_flag__10TObjPlayerFPvi(void *, int);
M2C_UNK set_move_mode__10TObjPlayerFPvi(void *, int);
M2C_UNK set_input_mode__10TObjPlayerFPvi(void *, int);
M2C_UNK set_flag_400000__10TObjPlayerFi(void *);
M2C_UNK set_floor__10TObjPlayerFPvi(void *, int);
M2C_UNK set_floor_index__10TObjPlayerFPvi(void *, int);
M2C_UNK reset_entrance_id__10TObjPlayerFPv(void *);
M2C_UNK set_vec3_const__10TObjPlayerFPv(void *);
M2C_UNK fn_801C19F4(void *);
u8 *heap_alloc__10TObjPlayerFPv(M2C_UNK);
extern const f32 TObjPlayer__data_805DC278;
void init_action_provider__10TObjPlayerFPv(u8 *arg0);
}

extern "C" {

#pragma push
#pragma fp_contract on
void release_child_object__10TObjPlayerFPv(void *arg0) {
    void *temp_r3;
    temp_r3 = M2C_FIELD(arg0, void **, 0x380);
    if (temp_r3 != NULL) {
        ((VObj_801BC688 *)temp_r3)->m1(1);
    }
}
#pragma pop

#pragma push
#pragma fp_contract on
void init_action_provider__10TObjPlayerFPv(u8 *arg0) {
    u8 *temp_r3;
    u8 *temp_r3_2;
    u8 *var_r0;
    u8 *var_r0_2;
    if (get_hold_effect_count__10TObjPlayerFv() == 1) {
        temp_r3 = (u8 *)(heap_alloc__10TObjPlayerFPv(0x8C));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(ct_variant__6TLobbyFPv(temp_r3));
        }
        M2C_FIELD(arg0, u8 **, 0x380) = var_r0;
    } else if (get_hold_effect_count__10TObjPlayerFv() == 0) {
        temp_r3_2 = (u8 *)(heap_alloc__10TObjPlayerFPv(0xC));
        var_r0_2 = (u8 *)(temp_r3_2);
        if (var_r0_2 != NULL) {
            var_r0_2 = (u8 *)(init_vtable8__6TLobbyFPv(temp_r3_2));
        }
        M2C_FIELD(arg0, u8 **, 0x380) = var_r0_2;
    }
    M2C_FIELD(arg0, s8 *, 0x33B) = 0;
    M2C_FIELD(arg0, s8 *, 0x33A) = 0;
    M2C_FIELD(arg0, s8 *, 0x339) = 0;
    M2C_FIELD(arg0, s8 *, 0x338) = 0;
    M2C_FIELD(arg0, s32 *, 0x33C) = 0;
    M2C_FIELD(arg0, s32 *, 0x36C) = 0;
    M2C_FIELD(arg0, s32 *, 0x370) = 0;
    reset_entrance_id__10TObjPlayerFPv((void *) (arg0));
    set_vec3_const__10TObjPlayerFPv((void *) (arg0 + 0x66C));
    M2C_FIELD(arg0, f32 *, 0x2B4) = (f32) TObjPlayer__data_805DC278;
    M2C_FIELD(arg0, s32 *, 0x334) = 0;
    set_input_mode__10TObjPlayerFPvi((void *) (arg0), (int) (0));
    set_move_mode__10TObjPlayerFPvi((void *) (arg0), (int) (0));
    M2C_FIELD(arg0, s16 *, 0x3C0) = -1;
    M2C_FIELD(arg0, f32 *, 0x3C4) = (f32) TObjPlayer__data_805DC278;
    set_battle_flag__10TObjPlayerFPvi((void *) (arg0), (int) (0));
    M2C_FIELD(arg0, s32 *, 0x314) = 0;
    M2C_FIELD(arg0, s32 *, 0xD00) = 0;
    M2C_FIELD(arg0, s32 *, 0x424) = 0;
    M2C_FIELD(arg0, s32 *, 0xE0) = 0;
    M2C_FIELD(arg0, s32 *, 0xDB4) = 0;
    set_floor_index__10TObjPlayerFPvi((void *) (arg0), (int) (0xF));
    set_floor__10TObjPlayerFPvi((void *) (arg0), (int) (0xF));
    M2C_FIELD(arg0, s32 *, 0x54C) = 0;
    M2C_FIELD(arg0, s32 *, 0x3B8) = 0;
    M2C_FIELD(arg0, s32 *, 0x420) = 0;
    M2C_FIELD(arg0, s32 *, 0x3D0) = 0;
    reset_state__10TObjPlayerFPv((void *) (arg0));
    set_flag_400000__10TObjPlayerFi((void *) (arg0));
    if (get_player_count__10TObjPlayerFv() == 1) {
        fn_801C19F4((void *) (arg0 + 0x828));
    }
}
#pragma pop

}
