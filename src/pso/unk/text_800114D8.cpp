#include <dolphin/mtx.h>
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>

struct O_80011704 { u8 pad[0x1c]; u16 f1c; };

typedef struct Vec_800115C4 { f32 x, y, z; } Vec_800115C4;

typedef struct Player_800115C4 {
    u8 pad0[0x1C];
    u16 id;
    u8 pad1E[0x30 - 0x1E];
    s32 flags;
    u8 pad34[0x2FC - 0x34];
    Vec_800115C4 pos;
} Player_800115C4;

typedef struct Vec_8001401C { f32 x, y, z; } Vec_8001401C;

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 project_actor_to_ground(void *, void *, void *);
extern const f32 TObjPlayer__data_805D7D24;
extern const f32 lbl_805D7D48;
void apply_actor_gravity(u8 *arg0, M2C_UNK *arg1, f32 farg0);
extern s32 lbl_805D53A4;
s32 is_actor_cadence_frame(O_80011704 *self, s32 x);
s32 check_path_obstructed(void *, void *);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
Player_800115C4 *get_player_data__10TObjPlayerFi(s32);
s32 get_current_floor();
s32 get_field_3e4__10TObjPlayerFPv(Player_800115C4 *);
M2C_UNK TBoss6Type1__sub_803D9370(void *, void *);
extern Vec_800115C4 lbl_80434074;
extern s32 lbl_805D586C;
u16 find_nearest_visible_player(u8 *arg0, Vec_800115C4 *arg1, f32 farg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 obj_isState2_324();
s32 obj_testFlags30(void *, int);
M2C_UNK update_scale__15TObjBoss2TunnelFPv(void *);
M2C_UNK TBoss6Type1__sub_803D9370(void *, void *);
extern const f32 TObjPlayer__data_805D7D24;
extern const f32 TObjPlayer__data_805D7D80;
void apply_knockback_from_attacker(u8 *arg0, u8 *arg1);
}

extern "C" {

u16 find_nearest_visible_player(u8 *arg0, Vec_800115C4 *arg1, f32 farg0) {
    f32 best = farg0 * farg0;
    u16 result = 0xFFFF;
    Vec_800115C4 diff = lbl_80434074;
    f32 dist;
    Player_800115C4 *player;
    s32 i;
    for (i = 0; i < lbl_805D586C; i++) {
        player = get_player_data__10TObjPlayerFi(i);
        if (player != NULL && player->id < 0x1000 && !(player->flags & 0x02000800)) {
            if (get_field_3e4__10TObjPlayerFPv(player) == get_current_floor()) {
                VecCopy__FP3VecPC3Vec(&diff, &player->pos);
                TBoss6Type1__sub_803D9370(&diff, arg0 + 0x2FC);
                dist = (diff.x * diff.x) + (diff.z * diff.z);
                if (dist < best && check_path_obstructed(arg0, &player->pos) == 0) {
                    best = dist;
                    result = player->id;
                    if (arg1 != NULL) {
                        VecCopy__FP3VecPC3Vec(arg1, &diff);
                    }
                }
            }
        }
    }
    return result;
}

s32 is_actor_cadence_frame(O_80011704 *self, s32 x) {
    s32 g = lbl_805D53A4 % x;
    if ((self->f1c % x) == g) {
        return 1;
    }
    return 0;
}

void apply_actor_gravity(u8 *arg0, M2C_UNK *arg1, f32 farg0) {
    Vec position;
    f32 temp_f1;
    s32 temp_r31;
    VecCopy__FP3VecPC3Vec((void *) (&position.x), (void *) (arg0 + 0x38));
    temp_r31 = project_actor_to_ground((void *) (arg0), (void *) (&position.x), (void *) (arg0 + 0x248));
    if (arg1 != NULL) {
        VecCopy__FP3VecPC3Vec((void *) (arg1), (void *) (&position.x));
    }
    if (temp_r31 != 0) {
        M2C_FIELD(arg0, f32 *, 0x30C) = (f32) (M2C_FIELD(arg0, f32 *, 0x30C) + lbl_805D7D48);
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C) + M2C_FIELD(arg0, f32 *, 0x30C));
        temp_f1 = position.y + farg0;
        position.y = temp_f1;
        if (M2C_FIELD(arg0, f32 *, 0x3C) <= temp_f1) {
            M2C_FIELD(arg0, f32 *, 0x3C) = temp_f1;
            M2C_FIELD(arg0, f32 *, 0x30C) = (f32) TObjPlayer__data_805D7D24;
            M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x800000);
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFF7FFFFF);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFF7FFFFF);
}
void apply_knockback_from_attacker(u8 *arg0, u8 *arg1) {
    Vec_8001401C diff;
    f32 scale;
    if (obj_isState2_324() != 1 && obj_testFlags30(arg0, 0x04000000) == 0) {
    VecCopy__FP3VecPC3Vec(&diff, arg1 + 0x38);
    TBoss6Type1__sub_803D9370(&diff, arg0 + 0x38);
    if ((diff.x * diff.x) + (diff.z * diff.z) < TObjPlayer__data_805D7D80) {
        M2C_FIELD(arg0, f32 *, 0x308) = TObjPlayer__data_805D7D24;
        M2C_FIELD(arg0, f32 *, 0x310) = TObjPlayer__data_805D7D24;
        return;
    }
    scale = 10.0f + (10.0f - M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x2B0), f32 *, 0x14));
    if (scale < 0.0f) {
        scale = 0.0f;
    }
    update_scale__15TObjBoss2TunnelFPv(&diff);
    M2C_FIELD(arg0, f32 *, 0x308) = -scale * diff.x;
    M2C_FIELD(arg0, f32 *, 0x310) = -scale * diff.z;
    }
}

}
