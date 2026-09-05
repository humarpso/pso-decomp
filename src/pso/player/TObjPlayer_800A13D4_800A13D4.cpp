#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK obj_clearFlags30(void *, s32);
M2C_UNK TObjEneDellBiter__sub_80087350(void *, int);
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int);
void TObjPlayer__sub_800A17B4(u8 *arg0);
}

extern "C" {

void trigger_action_if_not_flagged__10TObjPlayerFPv(void *arg0);
void update_hide_sequence__10TObjPlayerFPv(u8 *arg0);
M2C_UNK TBoss1Dragon__sub_80143504(void *);
M2C_UNK TObjPlayer__sub_80011734(void *, M2C_UNK, f32);
int TObjPlayer__sub_800A1808(void* p);
s16 TObjPlayer__sub_800A3210(M2C_UNK, s32, s32);
M2C_UNK TObjPlayer__sub_801B4A18(void *, M2C_UNK);
M2C_UNK minimap_render_dot(void *, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK obj_clearFlags30(void *, s32);
M2C_UNK set_hidden_flag__10TObjPlayerFPv(void *);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, M2C_UNK);

extern const f32 lbl_805D9984;

void update_hide_sequence__10TObjPlayerFPv(u8 *arg0) {
    s32 temp_r3;
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r5;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case 0:
        obj_clearFlags30(arg0, 0x240300);
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) | 0x800000);
        temp_r5 = M2C_FIELD(arg0, s32 *, 0x388);
        temp_r4 = temp_r5 & 0xFFB7FFFF;
        M2C_FIELD(arg0, s32 *, 0x388) = temp_r4;
        M2C_FIELD(arg0, s16 *, 0xB8) = 8;
        M2C_FIELD(arg0, s16 *, 0x39C) = TObjPlayer__sub_800A3210(1, temp_r4, temp_r5);
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
    case 1:
        TBoss1Dragon__sub_80143504(arg0);
        if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x800000)) {
            TObjPlayer__sub_80011734(arg0, 0, lbl_805D9984);
        }
        update_collisions__10TObjPlayerFPv(arg0);
        temp_r3 = M2C_FIELD(arg0, s16 *, 0x39C) - 1;
        M2C_FIELD(arg0, s16 *, 0x39C) = (s16) temp_r3;
        if ((s16) temp_r3 <= 0) {
            set_hidden_flag__10TObjPlayerFPv(arg0);
        }
        break;
    case -1:
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFF7FFFFF);
        break;
    }
    minimap_render_dot(arg0 + 0x38, -0x5DB4, 1, 0);
    TObjPlayer__sub_801B4A18(arg0, -1);
}

void trigger_action_if_not_flagged__10TObjPlayerFPv(void *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x800) && !(M2C_FIELD(arg0, s32 *, 0x388) & 0x800000)) {
        update_if_active__15TObjEneMe1GiGueFPv(arg0, 6);
    }
}
void TObjPlayer__sub_800A17B4(u8 *arg0) {
    obj_clearFlags30((void *)(arg0), (s32)(0x100U));
    TObjEneDellBiter__sub_80087350((void *) (arg0 + 0x2FC), (int) (0xD7));
    TBoss3Volopt__sub_8022675C((int) (0x4003B22D), (void *) (arg0 + 0x38), (int) (0), (int) (0));
}

}
