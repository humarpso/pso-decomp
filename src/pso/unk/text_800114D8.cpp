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

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 TObjPlayer__sub_80156844(void *, void *, void *);
extern const f32 TObjPlayer__data_805D7D24;
extern const f32 lbl_805D7D48;
void TObjPlayer__sub_80011734(u8 *arg0, M2C_UNK *arg1, f32 farg0);
extern s32 lbl_805D53A4;
s32 TObjPlayer__sub_80011704(O_80011704 *self, s32 x);
s32 TObjPlayer__sub_80018428(void *, void *);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
Player_800115C4 *get_player_data__10TObjPlayerFi(s32);
s32 TObjPlayer__sub_800196EC();
s32 get_field_3e4__10TObjPlayerFPv(Player_800115C4 *);
M2C_UNK TBoss6Type1__sub_803D9370(void *, void *);
extern Vec_800115C4 lbl_80434074;
extern s32 lbl_805D586C;
u16 TObjPlayer__sub_800115C4(u8 *arg0, Vec_800115C4 *arg1, f32 farg0);
}

extern "C" {

u16 TObjPlayer__sub_800115C4(u8 *arg0, Vec_800115C4 *arg1, f32 farg0) {
    f32 best = farg0 * farg0;
    u16 result = 0xFFFF;
    Vec_800115C4 diff = lbl_80434074;
    f32 dist;
    Player_800115C4 *player;
    s32 i;
    for (i = 0; i < lbl_805D586C; i++) {
        player = get_player_data__10TObjPlayerFi(i);
        if (player != NULL && player->id < 0x1000 && !(player->flags & 0x02000800)) {
            if (get_field_3e4__10TObjPlayerFPv(player) == TObjPlayer__sub_800196EC()) {
                VecCopy__FP3VecPC3Vec(&diff, &player->pos);
                TBoss6Type1__sub_803D9370(&diff, arg0 + 0x2FC);
                dist = (diff.x * diff.x) + (diff.z * diff.z);
                if (dist < best && TObjPlayer__sub_80018428(arg0, &player->pos) == 0) {
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

s32 TObjPlayer__sub_80011704(O_80011704 *self, s32 x) {
    s32 g = lbl_805D53A4 % x;
    if ((self->f1c % x) == g) {
        return 1;
    }
    return 0;
}

void TObjPlayer__sub_80011734(u8 *arg0, M2C_UNK *arg1, f32 farg0) {
    Vec position;
    f32 temp_f1;
    s32 temp_r31;
    VecCopy__FP3VecPC3Vec((void *) (&position.x), (void *) (arg0 + 0x38));
    temp_r31 = TObjPlayer__sub_80156844((void *) (arg0), (void *) (&position.x), (void *) (arg0 + 0x248));
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

}
