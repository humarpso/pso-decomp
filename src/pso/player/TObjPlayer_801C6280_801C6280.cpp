#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TObjPlayer__sub_801C62F0(void *arg0, s16 arg1);
void *init_attack_ctrl__10TObjPlayerFPvUsUs(void *arg0, u16 arg1, u16 arg2);
void tick_switch_attack_timer__10TObjPlayerFPv(void *arg0);
u32 spawn_particle_effect_with_flags(s32, M2C_UNK, M2C_UNK);
M2C_UNK set_owner_id__13TParticleCtrlFPvUs(u32, u16);
u32 get_player_by_client_id(u16);
M2C_UNK __ct__7TObjectFP7TObject();
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
M2C_UNK queue_destruction__7TObjectFv(void *);

void tick_switch_attack_timer__10TObjPlayerFPv(void *arg0) {
    s32 temp_r0;
    u32 temp_r3;
    u32 temp2;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x20) - 1;
    M2C_FIELD(arg0, s32 *, 0x20) = temp_r0;
    if (temp_r0 < 0) {
        temp_r3 = get_player_by_client_id(M2C_FIELD(arg0, u16 *, 0x1C));
        if (temp_r3 != 0U) {
            temp2 = spawn_particle_effect_with_flags(temp_r3 + 0x2FC, 0x20, 0x10);
            if (temp2 != 0U) {
                set_owner_id__13TParticleCtrlFPvUs(temp2, M2C_FIELD(arg0, u16 *, 0x1C));
            }
        }
        queue_destruction__7TObjectFv(arg0);
    }
}

extern M2C_UNK lbl_804C3FC0[];

void *TObjPlayer__sub_801C62F0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804C3FC0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804C3FC0[];

void *init_attack_ctrl__10TObjPlayerFPvUsUs(void *arg0, u16 arg1, u16 arg2) {
    u32 temp_r3;

    __ct__7TObjectFP7TObject();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804C3FC0;
    M2C_FIELD(arg0, u16 *, 0x1C) = arg2;
    M2C_FIELD(arg0, s32 *, 0x20) = 0xA;
    temp_r3 = get_player_by_client_id(M2C_FIELD(arg0, u16 *, 0x1C));
    if (temp_r3 != 0U) {
        temp_r3 = spawn_particle_effect_with_flags(temp_r3 + 0x2FC, 0x23, 0x10);
        if (temp_r3 != 0U) {
            set_owner_id__13TParticleCtrlFPvUs(temp_r3, M2C_FIELD(arg0, u16 *, 0x1C));
        }
    }
    return arg0;
}

}
