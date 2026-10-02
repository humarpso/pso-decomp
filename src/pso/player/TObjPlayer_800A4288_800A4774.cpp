#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef s32 M2C_UNK;
typedef struct Vec_800A48C4 {
    f32 x, y, z;
} Vec_800A48C4;

typedef struct Sub_800A48C4 {
    u8 pad0[0x18];
    s32 flags;
} Sub_800A48C4;

typedef struct Obj_800A48C4 {
    u8 pad0[0x30];
    s32 flags30;
    u8 pad34[0x60 - 0x34];
    s32 f60;
    u8 pad64[0xA4 - 0x64];
    Sub_800A48C4 *fA4;
    u8 padA8[0xB8 - 0xA8];
    s16 fB8;
    u8 padBA[0x2D4 - 0xBA];
    u16 target;
    u8 pad2D6[0x2FC - 0x2D6];
    Vec_800A48C4 pos;
    u8 pad308[0x326 - 0x308];
    s16 state;
    s16 f328;
} Obj_800A48C4;

extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
s32 TObjPlayer__sub_80141F84(s32, s32);
u8 *get_player_by_client_id(s32);
M2C_UNK TBoss6Type1__sub_803D9370(void *, void *);
extern const f64 lbl_8043A8D0[];
void TObjPlayer__sub_800A48C4(Obj_800A48C4 *o);
}

extern "C" {

void update_knockback_state__10TObjPlayerFPv(u8 *arg0);
M2C_UNK advance_animation_playback();
M2C_UNK TObjPlayer__sub_80011734(void *, M2C_UNK, f32);
M2C_UNK move_with_wall_slide(void *);
M2C_UNK step_angle_clamped__10TObjPlayerFPvi(void *, M2C_UNK);
M2C_UNK check_enemy_body_collisions(void *);
M2C_UNK submit_cursor_candidate(void *, M2C_UNK);
M2C_UNK check_object_collisions__10TObjPlayerFPv(void *);
M2C_UNK minimap_render_dot(void *, M2C_UNK, M2C_UNK, M2C_UNK);

extern const f32 lbl_805D9A10;
extern const f32 lbl_805D9A14;

void update_knockback_state__10TObjPlayerFPv(u8 *arg0) {
    s16 temp_r0;

    advance_animation_playback();
    step_angle_clamped__10TObjPlayerFPvi(arg0, 0);
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x328);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s16 *, 0x328) = 1;
        TObjPlayer__sub_80011734(arg0, 0, lbl_805D9A14);
        break;
    case 1:
        move_with_wall_slide(arg0);
        M2C_FIELD(arg0, f32 *, 0x308) = (f32) (M2C_FIELD(arg0, f32 *, 0x308) * lbl_805D9A10);
        M2C_FIELD(arg0, f32 *, 0x310) = (f32) (M2C_FIELD(arg0, f32 *, 0x310) * lbl_805D9A10);
        if ((u32) M2C_FIELD(arg0, u32 *, 0xB4) != 8U) {
            M2C_FIELD(arg0, s16 *, 0xB8) = 7;
            M2C_FIELD(arg0, s16 *, 0x328) = 2;
        }
        break;
    case 2:
        if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x800000)) {
            TObjPlayer__sub_80011734(arg0, 0, lbl_805D9A14);
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0xB4) != 0x20U) {
            if ((s32) M2C_FIELD(arg0, s16 *, 0x388) <= 0) {
                M2C_FIELD(arg0, s32 *, 0x374) = (s32) (M2C_FIELD(arg0, s32 *, 0x374) | 8);
            }
            M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFF9FF);
            M2C_FIELD(arg0, s16 *, 0x33E) = (s16) M2C_FIELD(arg0, s16 *, 0x32C);
        }
        break;
    }
    check_object_collisions__10TObjPlayerFPv(arg0);
    check_enemy_body_collisions(arg0);
    minimap_render_dot(arg0 + 0x38, -0x5DB4, 1, 0);
    submit_cursor_candidate(arg0, -1);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFDFFFFF);
}
void TObjPlayer__sub_800A48C4(Obj_800A48C4 *o) {
    Vec_800A48C4 v;
    u8 *e;
    s32 d;
    if (o->state >= 10 || o->state < 8) {
        e = get_player_by_client_id(o->target);
        if (e != NULL) {
            VecCopy__FP3VecPC3Vec(&v, e + 0x2FC);
            TBoss6Type1__sub_803D9370(&v, &o->pos);
            d = TObjPlayer__sub_80141F84(o->f60, (s32)(lbl_8043A8D0[0] * get_ad_end_text_start__10TObjPlayerFv(v.x, v.z)));
        } else {
            d = 0;
        }
        if (d < 0x2AAA) {
            o->state = 8;
            o->fB8 = 6;
        } else {
            o->state = 9;
            o->fB8 = 8;
        }
        o->f328 = 0;
    }
    o->fA4->flags |= 1;
    o->flags30 &= ~0x06240000;
}

}
