#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Base14 { char pad[0x14]; };

struct VObj14 : Base14 {
    virtual M2C_UNK m0();
    virtual M2C_UNK m1();
    virtual M2C_UNK m2();
    virtual M2C_UNK m3();
    virtual M2C_UNK m4();
    virtual M2C_UNK m5();
};

typedef s32 M2C_UNK;
struct Vec_800A4C4C { f32 x, y, z; };

struct Obj_800A4C4C {
    u8 pad0[0x30];
    u32 f30;
    u8 pad34[0x60 - 0x34];
    s32 f60;
    u8 pad64[0x2FC - 0x64];
    Vec_800A4C4C pos;
    u8 pad308[0x374 - 0x308];
    u32 f374;
    u8 pad378[0x388 - 0x378];
    s16 f388;
    u8 pad38A[0x38C - 0x38A];
    struct Obj_800A4C4C *f38C;
};

struct Vec_800A5A68 { f32 x, y, z; };

struct Sub_800A5A68 { u8 pad0[0x18]; u32 flags; };

struct Obj_800A5A68 {
    u8 pad0[0x30];
    u32 f30;
    u8 pad34[0xA4 - 0x34];
    Sub_800A5A68 *sub;
    u8 padA8[0xB8 - 0xA8];
    s16 fB8;
    u8 padBA[0x2A8 - 0xBA];
    struct Obj_800A5A68 *target;
    u8 pad2AC[0x2FC - 0x2AC];
    Vec_800A5A68 pos;
    u8 pad308[0x326 - 0x308];
    s16 f326;
    s16 f328;
    u8 pad32A[0x37C - 0x32A];
    s16 mode;
};

struct Vec_800A5BBC { f32 x, y, z; };

struct Vec_800A5DC4 { f32 x, y, z; };

extern "C" {
M2C_UNK apply_actor_gravity(void *, int, f32);
M2C_UNK TObjPlayer__sub_800A0554(void *);
M2C_UNK TBoss3Volopt__sub_800D8B30(void *);
M2C_UNK TBoss3Volopt__sub_800D8C48(void *);
M2C_UNK advance_animation_playback(void *, int);
M2C_UNK minimap_render_dot(void *, int, int, int);
void TObjPlayer__sub_800A5FA8(u8 *arg0);
f32 TObjPlayer__sub_80018780(void *, u16, void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
Obj_800A4C4C *get_player_data__10TObjPlayerFi(s32);
f32 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
s32 TLobby__sub_800822E8(void *, int);
s32 angle_difference_abs(s32, s32);
M2C_UNK TBoss6Type1__sub_803D9370(void *, void *);
extern const f64 lbl_8043A8D0[];
extern s32 lbl_805D586C;
extern const f32 lbl_805D9A24;
s32 TObjPlayer__sub_800A4C4C(Obj_800A4C4C *self);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
f32 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
M2C_UNK TObjPlayer__sub_800A7798(void *, f32);
M2C_UNK TObjPlayer__sub_800F7478(void *, int, int, int);
M2C_UNK TBoss6Type1__sub_803D9370(void *, void *);
extern const f64 lbl_8043A8D0[];
extern s32 *lbl_805D5044;
extern f32 *lbl_805D504C;
void TObjPlayer__sub_800A5A68(Obj_800A5A68 *self);
f32 TObjPlayer__sub_800186E8(void *, void *, Vec_800A5BBC *);
s32 get_field_0c__10TObjPlayerFPv(int);
f32 get_pos_x__10TObjPlayerFPv(int);
f32 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
s32 angle_difference_abs(s32, s32);
extern const f64 lbl_8043A8D0[];
extern s32 *lbl_805D5044;
extern const f32 lbl_805D9A70;
extern const f32 lbl_805D9A74;
s32 TObjPlayer__sub_800A5BBC(u8 *arg0);
M2C_UNK apply_actor_gravity(void *, int, f32);
M2C_UNK enemy_move_toward(void *, s32, Vec_800A5DC4 *, int, f32 *, f32);
s32 select_enemy_destination(void *, Vec_800A5DC4 *, int);
M2C_UNK copy_position_if_valid__10TObjPlayerFii(void *, Vec_800A5DC4 *);
M2C_UNK TObjPlayer__sub_800A6B14(void *);
M2C_UNK TObjPlayer__sub_800A7798(void *, f32);
f32 horizontal_distance_squared(int, void *);
M2C_UNK advance_animation_playback(void *, int);
M2C_UNK check_enemy_body_collisions(void *);
M2C_UNK check_object_collisions__10TObjPlayerFPv(void *);
M2C_UNK submit_cursor_candidate(void *, int);
M2C_UNK minimap_render_dot(void *, int, int, int);
extern f32 *lbl_805D504C;
extern const f32 lbl_805D9A14;
extern const f32 lbl_805D9A78;
void TObjPlayer__sub_800A5DC4(u8 *arg0);
}

extern "C" {

void advance_motion_state__10TObjPlayerFPv(u8 *arg0);
void enter_state_7__10TObjPlayerFPv(void *arg0);
M2C_UNK apply_actor_gravity(void *, int, f32);
f32 horizontal_distance_squared(int, void *);

void enter_state_7__10TObjPlayerFPv(void *arg0) {
    void *temp_r5;

    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 7) {
        M2C_FIELD(arg0, s16 *, 0x326) = 7;
        M2C_FIELD(arg0, s16 *, 0x328) = 0;
        M2C_FIELD(arg0, s16 *, 0xB8) = 5;
    }
    temp_r5 = M2C_FIELD(arg0, void **, 0xA4);
    M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x18) | 1);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xF99BFFFF);
}

extern const f32 lbl_805D9A14;
extern const f32 lbl_805D9A7C;

s32 TObjPlayer__sub_800A4C4C(Obj_800A4C4C *self) {
    Vec_800A4C4C v;
    Obj_800A4C4C *p;
    s32 i;
    if (self->f374 & 0x20) {
        return 1;
    }
    if ((self->f374 & 4) && self->f388 > 0) {
        for (i = 0; i < lbl_805D586C; i++) {
            p = get_player_data__10TObjPlayerFi(i);
            if (p == NULL || (p->f30 & 0x800)) {
                continue;
            }
            if (!(TObjPlayer__sub_80018780(self, i, &v) < lbl_805D9A24)) {
                continue;
            }
            if (angle_difference_abs(self->f60, (s32)(lbl_8043A8D0[0] * get_ad_end_text_start__10TObjPlayerFv(v.x, v.z))) >= 0x2AAA) {
                continue;
            }
            if (TLobby__sub_800822E8(p, 0xE0) == 0) {
                continue;
            }
            VecCopy__FP3VecPC3Vec(&v, &self->pos);
            TBoss6Type1__sub_803D9370(&v, &p->pos);
            if (angle_difference_abs(p->f60, (s32)(lbl_8043A8D0[0] * get_ad_end_text_start__10TObjPlayerFv(v.x, v.z))) < 0x2AAA) {
                self->f38C = p;
                self->f374 |= 0x20;
                return 1;
            }
        }
    }
    return 0;
}

void TObjPlayer__sub_800A5A68(Obj_800A5A68 *self) {
    Vec_800A5A68 v;
    switch (self->mode) {
    case 0:
    default:
        VecCopy__FP3VecPC3Vec(&v, &self->target->pos);
        TBoss6Type1__sub_803D9370(&v, &self->pos);
        f32 a = get_ad_end_text_start__10TObjPlayerFv(v.x, v.z);
        self->f326 = 4;
        if ((s32)(lbl_8043A8D0[0] * a) < 0x10) {
            self->f328 = 1;
            self->fB8 = 2;
            TObjPlayer__sub_800A7798(self, *lbl_805D504C);
        } else {
            self->f328 = 0;
            self->fB8 = 1;
        }
        break;
    case 2:
        self->f326 = 5;
        self->f328 = 0;
        self->fB8 = 3;
        break;
    case 1:
        self->f326 = 6;
        self->f328 = 0;
        self->fB8 = 4;
        break;
    }
    TObjPlayer__sub_800F7478(self, 0, lbl_805D5044[self->mode], 0);
    self->sub->flags |= 1;
    self->f30 &= 0xF9FBFFFF;
    self->f30 |= 0x200000;
}

s32 TObjPlayer__sub_800A5BBC(u8 *arg0) {
    Vec_800A5BBC v;
    f32 var_f29;
    f32 r;
    f32 dist;
    s32 ang;
    s32 flags;
    u8 *tgt;
    u8 *p;
    if (M2C_FIELD(arg0, s16 *, 0x326) >= 3) {
        tgt = M2C_FIELD(arg0, u8 **, 0x2A8);
        if (tgt != NULL && M2C_FIELD(arg0, u32 *, 0x318) != 0U && !(M2C_FIELD(tgt, s32 *, 0x30) & 0x02000800)) {
            dist = TObjPlayer__sub_800186E8(arg0, tgt, &v);
            ang = angle_difference_abs(M2C_FIELD(arg0, s32 *, 0x60), (s32)(lbl_8043A8D0[0] * get_ad_end_text_start__10TObjPlayerFv(v.x, v.z)));
            p = M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x2A8), u8 **, 0xA4);
            if (p != NULL) {
                var_f29 = M2C_FIELD(p, f32 *, 0xC);
            } else {
                var_f29 = lbl_805D9A70;
            }
            flags = M2C_FIELD(arg0, s32 *, 0x374);
            if (flags & 8) {
                M2C_FIELD(arg0, s16 *, 0x37C) = 2;
                if (dist <= (var_f29 + get_pos_x__10TObjPlayerFPv(lbl_805D5044[M2C_FIELD(arg0, s16 *, 0x37C)])) * (var_f29 + get_pos_x__10TObjPlayerFPv(lbl_805D5044[M2C_FIELD(arg0, s16 *, 0x37C)])) && ang <= get_field_0c__10TObjPlayerFPv(lbl_805D5044[M2C_FIELD(arg0, s16 *, 0x37C)])) {
                    return 1;
                }
            } else if (flags & 0x10) {
                M2C_FIELD(arg0, s16 *, 0x37C) = 1;
                r = lbl_805D9A74 + var_f29;
                if (dist <= r * r && ang <= 0xAAA) {
                    return 1;
                }
            } else {
                M2C_FIELD(arg0, s16 *, 0x37C) = 0;
                if (dist <= (var_f29 + get_pos_x__10TObjPlayerFPv(lbl_805D5044[M2C_FIELD(arg0, s16 *, 0x37C)])) * (var_f29 + get_pos_x__10TObjPlayerFPv(lbl_805D5044[M2C_FIELD(arg0, s16 *, 0x37C)])) && ang <= get_field_0c__10TObjPlayerFPv(lbl_805D5044[M2C_FIELD(arg0, s16 *, 0x37C)])) {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void TObjPlayer__sub_800A5DC4(u8 *arg0) {
    f32 temp_f0;
    f32 temp_f1;
    u8 *temp_r5;
    u8 *temp_r8;
    temp_r5 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xA4));
    M2C_FIELD(temp_r5, s32 *, 0x18) |= 1;
    M2C_FIELD(arg0, s32 *, 0x30) &= 0xF9DBFFFF;
    temp_r8 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x2A8));
    if (temp_r8 != NULL) {
        switch (M2C_FIELD(arg0, s16 *, 0x328)) {
        case 0: {
            Vec_800A5DC4 v = *(Vec_800A5DC4 *)(temp_r8 + 0x2FC);
            if (select_enemy_destination((void *) (arg0), &v, 1) != 0) {
                TObjPlayer__sub_800A7798((void *) (arg0), lbl_805D504C[3]);
                M2C_FIELD(arg0, s16 *, 0x328) = 1;
                {
                Vec_800A5DC4 v2 = *(Vec_800A5DC4 *)(arg0 + 0x2FC);
                copy_position_if_valid__10TObjPlayerFii((void *) (arg0), &v2);
                }
                apply_actor_gravity((void *) (arg0), 0, lbl_805D9A14);
            }
            break;
        }
        case 1: {
            Vec_800A5DC4 v3 = *(Vec_800A5DC4 *)(temp_r8 + 0x2FC);
            enemy_move_toward((void *) (arg0), M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x350), s32 *, 8), &v3, 0, lbl_805D504C, lbl_805D504C[2]);
            temp_f1 = horizontal_distance_squared((int) (arg0 + 0x29C), (void *) (arg0 + 0x38));
            if (temp_f1 < lbl_805D9A78) {
                M2C_FIELD(arg0, s32 *, 0x374) &= ~0x10;
            } else {
                M2C_FIELD(arg0, s32 *, 0x374) |= 0x10;
            }
            temp_f0 = M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x350), f32 *, 4) + M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xA4), f32 *, 0xC);
            if (temp_f1 < (temp_f0 * temp_f0)) {
                M2C_FIELD(arg0, s16 *, 0x328) = 2;
            }
            break;
        }
        case 2:
            M2C_FIELD(arg0, s32 *, 0x374) &= ~0x10;
            M2C_FIELD(arg0, s16 *, 0x328) = 0;
            break;
        }
        ((M2C_UNK (*)(void *)) advance_animation_playback)((void *) (arg0));
        TObjPlayer__sub_800A6B14((void *) (arg0));
        check_object_collisions__10TObjPlayerFPv((void *) (arg0));
        check_enemy_body_collisions((void *) (arg0));
        minimap_render_dot((void *) (arg0 + 0x38), (int) (-0x5DB4), (int) (1), (int) (0));
        submit_cursor_candidate((void *) (arg0), (int) (-1));
    }
}

void TObjPlayer__sub_800A5FA8(u8 *arg0) {
    s16 temp_r0;
    u8 *temp_r4;
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFDFFFFF);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x06040000);
    temp_r4 = (unsigned char *) (M2C_FIELD(arg0, void **, 0xA4));
    M2C_FIELD(temp_r4, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r4, s32 *, 0x18) & 0xFFFFFFFE);
    advance_animation_playback((void *)(arg0), (int) (temp_r4));
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x328);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s16 *, 0x328) = 1;
        TBoss3Volopt__sub_800D8C48((void *) (arg0 + 0x38));
        TObjPlayer__sub_800A0554((void *) (arg0 + 0x3A4));
        apply_actor_gravity((void *) (arg0), (int) (0), (f32) (lbl_805D9A14));
        TBoss3Volopt__sub_800D8B30((void *) (arg0 + 0x38));
        break;
    case 1:
        if (((VObj14 *) (arg0 + 0x3A4))->m5() == 1) {
            M2C_FIELD(arg0, s16 *, 0x328) = 2;
        }
        break;
    case 2:
        M2C_FIELD(arg0, s32 *, 0x374) = (s32) (M2C_FIELD(arg0, s32 *, 0x374) & 0xFFFF0000);
        M2C_FIELD(arg0, s32 *, 0x374) = (s32) (M2C_FIELD(arg0, s32 *, 0x374) | 4);
        break;
    }
    minimap_render_dot((void *) (arg0 + 0x38), (int) (-0x5DB4), (int) (1), (int) (0));
}

void advance_motion_state__10TObjPlayerFPv(u8 *arg0) {
    s16 temp_r0;

    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFDFFFFF);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x06040000);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), s32 *, 0x18) = (s32) (M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), s32 *, 0x18) & 0xFFFFFFFE);
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x328);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s16 *, 0x328) = 1;
        apply_actor_gravity((void *) arg0, (int) (0), (f32) (lbl_805D9A14));
        return;
    case 1:
        if (horizontal_distance_squared((int) (M2C_FIELD(arg0, s32 *, 0x2A8) + 0x2FC), (void *) (arg0 + 0x2FC)) < lbl_805D9A7C) {
            M2C_FIELD(arg0, s16 *, 0x328) = 2;
        }
        return;
    case 2:
        M2C_FIELD(arg0, s32 *, 0x374) = (s32) (M2C_FIELD(arg0, s32 *, 0x374) & 0xFFFF0000);
        M2C_FIELD(arg0, s32 *, 0x374) = (s32) (M2C_FIELD(arg0, s32 *, 0x374) | 2);
        break;
    }
}

}
