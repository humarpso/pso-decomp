#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct AnimEnt_80143504 { s16 mode; s16 next; u8 pad4[4]; f32 speed; u8 padC[4]; };

struct Anim_80143504 {
    u8 pad0[0xB0];
    s32 flags;
    u8 padB4[4];
    s16 cur;
    s16 req;
    u8 padBC[4];
    f32 frame;
    f32 end;
    f32 speed;
    u8 padCC[4];
    f32 xD0;
    u8 padD4[4];
    AnimEnt_80143504 *tbl;
    u8 padDC[0xF4 - 0xDC];
    s16 mode;
    s16 nextmode;
};

extern "C" {
void TObjEnePanarms__sub_800E2DE4(void *, int);
u32 TObjPlayer__sub_80142BB4(void *, s16);
void TObjPlayer__sub_80143198(void *, s16);
s32 TBoss1Dragon__sub_80143960(void *, int);
extern const f32 lbl_805DB168;
extern const f32 lbl_805DB16C;
void TBoss1Dragon__sub_80143504(Anim_80143504 *a);
}

extern "C" {

void set_animation__10TObjPlayerFPvs(void *arg0, s16 arg1);
M2C_UNK update_animation_frame__10TObjPlayerFPvi(void *, s16);
M2C_UNK TObjPlayer__sub_8014394C(void *, f64);
void *get_anim_entry__10TObjPlayerFPvi(void *, s16);

extern const f64 lbl_8043F2D8[];
extern const f32 lbl_805DB168;

void set_animation__10TObjPlayerFPvs(void *arg0, s16 arg1) {
    void *temp_r3;
    f32 conv;

    M2C_FIELD(arg0, s16 *, 0xB8) = arg1;
    M2C_FIELD(arg0, s16 *, 0xBA) = (s16) M2C_FIELD(arg0, s16 *, 0xB8);
    update_animation_frame__10TObjPlayerFPvi(arg0, M2C_FIELD(arg0, s16 *, 0xB8));
    temp_r3 = get_anim_entry__10TObjPlayerFPvi(arg0, M2C_FIELD(arg0, s16 *, 0xB8));
    M2C_FIELD(arg0, f32 *, 0xC8) = (f32) M2C_FIELD(temp_r3, f32 *, 8);
    M2C_FIELD(arg0, s16 *, 0xF4) = (s16) M2C_FIELD(temp_r3, s16 *, 0);
    conv = (f32) M2C_FIELD(M2C_FIELD(arg0, void **, 0xF8), u32 *, 4);
    M2C_FIELD(arg0, f32 *, 0xC4) = conv;
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) lbl_805DB168;
    M2C_FIELD(arg0, s32 *, 0xB0) = (s32) (M2C_FIELD(arg0, s32 *, 0xB0) & 0xFFFFFFFB);
    M2C_FIELD(arg0, s32 *, 0xB4) = (s32) M2C_FIELD(temp_r3, s32 *, 0xC);
    M2C_FIELD(arg0, void **, 0xE4) = (void *) M2C_FIELD(arg0, void **, 0xF8);
    M2C_FIELD(arg0, f32 *, 0xEC) = (f32) lbl_805DB168;
    M2C_FIELD(arg0, void **, 0xE8) = (void *) M2C_FIELD(arg0, void **, 0xF8);
    M2C_FIELD(arg0, f32 *, 0xF0) = (f32) lbl_805DB168;
    M2C_FIELD(arg0, s16 *, 0xBC) = (s16) M2C_FIELD(arg0, s16 *, 0xB8);
    if (M2C_FIELD(arg0, s32 *, 0xB4) & 0x20000000) {
        TObjPlayer__sub_8014394C(arg0, conv);
    }
}
void TBoss1Dragon__sub_80143504(Anim_80143504 *a) {
    f32 last;
    if (a->flags & 0x40) {
        return;
    }
    a->frame += a->speed;
    last = a->end - lbl_805DB16C;
    a->flags &= ~0x82A;
    if (a->cur != a->req) {
        if (a->frame >= a->end) {
            a->frame -= a->speed;
        }
        TObjPlayer__sub_80143198(a, a->cur);
    }
    switch (a->mode) {
    case 1:
        if (a->frame >= a->end) {
            a->frame -= a->end;
            if (TBoss1Dragon__sub_80143960(a, 0x100) != 0) {
                a->speed = a->xD0;
            }
        }
        break;
    case 2:
        if (a->frame >= last) {
            if (TObjPlayer__sub_80142BB4(a, a->tbl[a->cur].next) == 0) {
                a->frame -= a->end;
            } else {
                a->cur = a->tbl[a->cur].next;
                TObjPlayer__sub_80143198(a, a->cur);
                a->flags |= 0x800;
            }
        }
        break;
    case 3:
        if (a->frame >= last) {
            a->mode = 5;
            a->frame -= a->speed;
            a->speed = lbl_805DB168;
            a->flags |= 0x30;
        }
        break;
    case 4:
        if (a->frame >= lbl_805DB16C) {
            a->frame = lbl_805DB168;
            if (TBoss1Dragon__sub_80143960(a, 0x100) != 0) {
                TObjEnePanarms__sub_800E2DE4(a, 0x100);
                a->speed = a->xD0;
            } else {
                a->speed = a->tbl[a->cur].speed;
            }
            a->mode = a->nextmode;
            a->flags &= ~4;
            a->flags |= 8;
        }
        break;
    case 5:
        a->frame -= a->speed;
        break;
    }
}

}
