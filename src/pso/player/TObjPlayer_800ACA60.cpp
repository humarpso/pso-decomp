#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef struct MojaCollision_800ADE48 {
    u8 pad[0x18];
    u32 flags;
} MojaCollision_800ADE48;

typedef struct Moja_800ADE48 {
    u8 pad0[0x30];
    u32 flags;
    u8 pad34[0xA4 - 0x34];
    MojaCollision_800ADE48 *collision;
    u8 padA8[0xB8 - 0xA8];
    s16 action;
    u8 padBA[0x326 - 0xBA];
    s16 mode;
    s16 phase;
    u8 pad32A[0x374 - 0x32A];
    s32 f374;
    u8 pad378[0x380 - 0x378];
    s32 attack_kind;
} Moja_800ADE48;

struct Vec_800AE18C { f32 x, y, z; };

struct VBase_18_cc39a7 { char pad[0x18]; };

struct VObj_18_cc39a7 : VBase_18_cc39a7 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual s32 m17(M2C_UNK);
};

struct Vec_800AEE54 { f32 x, y, z; };

extern "C" {
void TObjPlayer__sub_800ADE48(Moja_800ADE48 *self);
s32 TObjPlayer__sub_80016D78();
M2C_UNK obj_clearFlags30(void *, M2C_UNK);
s32 TObjPlayer__sub_800AED14(void *arg0);
s32 TObjPlayer__sub_80016FF8();
M2C_UNK obj_clearFlags30(void *, M2C_UNK);
s32 TObjPlayer__sub_800AEDB4(void *arg0);
M2C_UNK apply_actor_gravity(void *, M2C_UNK, f32);
f32 TObjPlayer__sub_800178C8(void *, s32, Vec_800AE18C *, void *, f32, f32);
s32 select_enemy_destination(void *, Vec_800AE18C *, int);
M2C_UNK copy_position_if_valid__10TObjPlayerFii(void *, Vec_800AE18C *);
M2C_UNK TObjPlayer__sub_800A7798(void *, f32);
void *copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
f32 horizontal_distance_squared(int, void *);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK advance_animation_playback();
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
M2C_UNK play_effect_if_v2__10TObjPlayerFi(int);
M2C_UNK play_sound_effect(void *, void *, int, int);
extern u8 **lbl_805D50D4;
extern const f32 lbl_805D9BD8;
extern const f32 lbl_805D9BF0;
extern const f32 lbl_805D9C34;
extern const f32 lbl_805D9C38;
u16 find_nearest_visible_player(void *, int, f32);
s32 check_path_obstructed(void *, void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
u8 *get_player_data__10TObjPlayerFi(s32);
s32 obj_testFlags30(void *, int);
s32 obj_getField1c(void *);
s32 get_current_floor();
s32 get_field_3e4__10TObjPlayerFPv(int);
u32 csnVector(void *, void *, int);
u8 *get_enemy_entity(u16);
u8 *get_player_by_client_id(u16);
M2C_UNK TBoss6Type1__sub_803D9370(void *, void *);
extern M2C_UNK lbl_8043B0B4[];
extern s32 lbl_805D586C;
extern s32 lbl_805D5870;
void TObjPlayer__sub_800AEE54(u8 *arg0);
s32 get_current_floor();
s32 get_field_3e4__10TObjPlayerFPv(int);
M2C_UNK copy_position__20TBoss3VoloptHiraisinFi(void *);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_800ACA0C(void *);
M2C_UNK TObjPlayer__sub_800ACB58(void *);
M2C_UNK update_ground_effect__10TObjPlayerFPv(void *);
void update_invincibility__10TObjPlayerFPv(void *arg0);
M2C_UNK TObjPlayer__sub_800ACFE8(void *);
M2C_UNK TObjPlayer__sub_800AD3D8(void *);
M2C_UNK TObjPlayer__sub_800ADAAC(void *);
M2C_UNK TObjPlayer__sub_800AE18C(u8 *arg0);
M2C_UNK TObjPlayer__sub_800AE450(void *);
M2C_UNK TObjPlayer__sub_800AE7F4(void *);
M2C_UNK TObjPlayer__sub_800AEBB8(void *);
u8 *get_enemy_entity(u16);
M2C_UNK update_prev_position__10TObjPlayerFPv(void *);
M2C_UNK submit_cursor_candidate(void *, int);
u8 *get_player_by_client_id(u16);
M2C_UNK minimap_render_dot(void *, int, int, int, f32);
extern const f32 lbl_805D9BDC;
void run_task__11TObjEneMojaFPv(u8 *arg0);
}

extern "C" {

void enter_state_3__10TObjPlayerFPv(void *arg0);
void update_down_state__10TObjPlayerFPv(void *arg0);
void update_invincibility__10TObjPlayerFPv(void *arg0);
void update_meseta_anim_state__10TObjPlayerFPv(void *arg0);
void update_state_flags__10TObjPlayerFPv(void *arg0);
M2C_UNK advance_animation_playback();
M2C_UNK apply_actor_gravity(void *, M2C_UNK, f32);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);

void update_state_flags__10TObjPlayerFPv(void *arg0) {
    s16 temp_r0;
    void *temp_r5;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    switch (temp_r0) {
    case 4:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xF9FFF9FF);
        temp_r5 = M2C_FIELD(arg0, void **, 0xA4);
        M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x18) & 0xFBFFFFFF);
        M2C_FIELD(arg0, s16 *, 0x33E) = (s16) M2C_FIELD(arg0, s16 *, 0x32C);
        M2C_FIELD(arg0, s32 *, 0x388) = 0;
        break;
    default:
        M2C_FIELD(arg0, s16 *, 0x326) = 8;
    case 8:
        M2C_FIELD(arg0, s16 *, 0xB8) = 6;
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFDBFFFF);
        break;
    }
    M2C_FIELD(arg0, s32 *, 0x374) = 0;
}

extern const f32 lbl_805D9BD8;
extern const s32 lbl_805D9BFC;

void update_invincibility__10TObjPlayerFPv(void *arg0) {
    s16 temp_r4;
    void *temp_r4_2;

    advance_animation_playback();
    if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x800000)) {
        apply_actor_gravity(arg0, 0, lbl_805D9BD8);
    }
    update_collisions__10TObjPlayerFPv(arg0);
    temp_r4 = M2C_FIELD(arg0, s16 *, 0x33C);
    M2C_FIELD(arg0, s16 *, 0x33C) = (s16) (temp_r4 - 1);
    if (temp_r4 < 0) {
        M2C_FIELD(arg0, s32 *, 0x30) &= 0xFFFFFEFF;
        temp_r4_2 = M2C_FIELD(arg0, void **, 0xA4);
        M2C_FIELD(temp_r4_2, s32 *, 0x18) |= lbl_805D9BFC;
        M2C_FIELD(arg0, s16 *, 0x33C) = (s16) M2C_FIELD(arg0, s16 *, 0x33A);
        M2C_FIELD(arg0, s16 *, 0x33E) = (s16) M2C_FIELD(arg0, s16 *, 0x32C);
    }
}

extern const s32 lbl_805D9BFC;

void update_down_state__10TObjPlayerFPv(void *arg0) {
    s16 temp_r0;
    s32 gbits;
    void *temp_r6;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    switch (temp_r0) {
    case 4:
        M2C_FIELD(arg0, s32 *, 0x30) &= 0xFFFFFEFF;
        temp_r6 = M2C_FIELD(arg0, void **, 0xA4);
        M2C_FIELD(temp_r6, s32 *, 0x18) |= lbl_805D9BFC;
        M2C_FIELD(arg0, s16 *, 0x33E) = (s16) M2C_FIELD(arg0, s16 *, 0x32C);
        M2C_FIELD(arg0, s32 *, 0x388) = 0;
        break;
    default:
        M2C_FIELD(arg0, s16 *, 0x326) = 7;
        M2C_FIELD(arg0, s16 *, 0x33C) = 0xF;
    case 7:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFF9BFFFF);
        break;
    }
    M2C_FIELD(arg0, s32 *, 0x374) = 0;
}

void TObjPlayer__sub_800ADE48(Moja_800ADE48 *self) {
    switch (self->attack_kind) {
    case 2:
        self->mode = 6;
        self->action = 5;
        break;
    case 1:
        self->mode = 5;
        self->action = 2;
        break;
    case 0:
    default:
        self->mode = 4;
        self->action = 3;
        break;
    }
    self->phase = 0;
    self->flags |= 0x200000;
    self->flags &= 0xF9FBFFFF;
    self->collision->flags |= 1;
    self->f374 = 0;
}

M2C_UNK TObjPlayer__sub_800AE18C(u8 *arg0) {
    f32 temp_f0_2;
    u8 *temp_r4;
    u8 *temp_r7;
    switch (M2C_FIELD(arg0, s16 *, 0x328)) {
    case 0:
        apply_actor_gravity((void *) arg0, 0, lbl_805D9BD8);
        if (objInBand__FP7GameObjf((void *) (arg0), lbl_805D9BD8) != 0) {
            play_sound_effect(copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), 0x3AD0A), arg0 + 0x38, 0, 0);
            play_effect_if_v2__10TObjPlayerFi(-0x200);
        }
        if (M2C_FIELD(arg0, u32 *, 0xB4) != 0x20U) {
            TObjPlayer__sub_800A7798((void *) (arg0), M2C_FIELD(lbl_805D50D4[M2C_FIELD(arg0, s32 *, 0x368)], f32 *, 0xC));
            M2C_FIELD(arg0, s16 *, 0xB8) = 2;
            {
            Vec_800AE18C v = *(Vec_800AE18C *)(M2C_FIELD(arg0, u8 **, 0x2A8) + 0x2FC);
            if (select_enemy_destination((void *) (arg0), &v, 1) != 0) {
                Vec_800AE18C v2 = *(Vec_800AE18C *)(arg0 + 0x2FC);
                copy_position_if_valid__10TObjPlayerFii((void *) (arg0), &v2);
            }
            }
            M2C_FIELD(arg0, s16 *, 0x328) = 1;
            M2C_FIELD(arg0, s32 *, 0x388) = 0;
            M2C_FIELD(arg0, s16 *, 0x33C) = 0x96;
        }
        break;
    case 1:
    default:
        temp_r7 = M2C_FIELD(arg0, u8 **, 0x2A8);
        if (temp_r7 != NULL) {
            Vec_800AE18C v3 = *(Vec_800AE18C *)(temp_r7 + 0x2FC);
            temp_r4 = lbl_805D50D4[M2C_FIELD(arg0, s32 *, 0x368)];
            if (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x350), f32 *, 0) * M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x350), f32 *, 0) < TObjPlayer__sub_800178C8((void *) (arg0), M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x350), s32 *, 8), &v3, temp_r4, M2C_FIELD(temp_r4, f32 *, 8), lbl_805D9BF0)) {
                M2C_FIELD(arg0, u8 **, 0x2A8) = NULL;
            }
            if (horizontal_distance_squared((int) (arg0 + 0x29C), (void *) (arg0 + 0x38)) < (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x350), f32 *, 4) + M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xA4), f32 *, 0xC)) * (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x350), f32 *, 4) + M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xA4), f32 *, 0xC))
                || --M2C_FIELD(arg0, s16 *, 0x33C) < 0) {
                M2C_FIELD(arg0, s32 *, 0x384) = 0;
            }
        }
        if (objInBand__FP7GameObjf((void *) (arg0), lbl_805D9C34) != 0 || objInBand__FP7GameObjf((void *) (arg0), lbl_805D9C38) != 0) {
            play_sound_effect(copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), 0x3A801), arg0 + 0x38, 0, 0);
            play_effect_if_v2__10TObjPlayerFi(-0x400);
        }
        break;
    }
    ((M2C_UNK (*)(void *)) advance_animation_playback)((void *) (arg0));
    update_collisions__10TObjPlayerFPv((void *) (arg0));
}

void enter_state_3__10TObjPlayerFPv(void *arg0) {
    void *temp_r5;

    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 3) {
        M2C_FIELD(arg0, s16 *, 0x326) = 3;
        switch ((s32) M2C_FIELD(arg0, s32 *, 0x388)) {
        case 1:
            M2C_FIELD(arg0, s16 *, 0x328) = 0;
            M2C_FIELD(arg0, s16 *, 0xB8) = 1;
            break;
        default:
            M2C_FIELD(arg0, s16 *, 0x328) = 0;
            M2C_FIELD(arg0, s16 *, 0xB8) = 2;
            break;
        }
        M2C_FIELD(arg0, s32 *, 0x384) = -1;
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xF9FBFFFF);
        temp_r5 = M2C_FIELD(arg0, void **, 0xA4);
        M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x18) | 1);
        M2C_FIELD(arg0, s32 *, 0x374) = 0;
    }
}

void update_meseta_anim_state__10TObjPlayerFPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if ((temp_r0 >= 3) || (temp_r0 < 0)) {
        M2C_FIELD(arg0, s16 *, 0x328) = 0;
        M2C_FIELD(arg0, s32 *, 0x388) = 1;
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x40000);
    }
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x374);
    switch (temp_r0_2) {
    case 0:
        M2C_FIELD(arg0, s16 *, 0x326) = 0;
        M2C_FIELD(arg0, s16 *, 0xB8) = 2;
        return;
    case 1:
        M2C_FIELD(arg0, s16 *, 0x326) = 1;
        M2C_FIELD(arg0, s16 *, 0xB8) = 5;
        return;
    default:
        M2C_FIELD(arg0, s16 *, 0x326) = 0;
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        return;
    }
}
s32 TObjPlayer__sub_800AED14(void *arg0) {
    void *temp_r3;
    if (TObjPlayer__sub_80016D78() != 0) {
        switch (M2C_FIELD(arg0, s16 *, 0x326)) {
        case 0:
        case 1:
            M2C_FIELD(arg0, s16 *, 0x326) = 0;
            M2C_FIELD(arg0, s16 *, 0x328) = 0;
            M2C_FIELD(arg0, s32 *, 0x388) = 1;
            M2C_FIELD(arg0, s32 *, 0x384) = -1;
            M2C_FIELD(arg0, s16 *, 0x33C) = 0;
            M2C_FIELD(arg0, s32 *, 0x374) = 0;
            M2C_FIELD(arg0, s16 *, 0xB8) = 2;
            obj_clearFlags30(arg0, 0x06040000);
            temp_r3 = M2C_FIELD(arg0, void **, 0xA4);
            M2C_FIELD(temp_r3, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x18) | 1);
            break;
        }
        return 1;
    }
    return 0;
}
s32 TObjPlayer__sub_800AEDB4(void *arg0) {
    void *temp_r3;
    if (TObjPlayer__sub_80016FF8() != 0) {
        switch (M2C_FIELD(arg0, s16 *, 0x326)) {
        case 0:
        case 1:
            M2C_FIELD(arg0, s16 *, 0x326) = 0;
            M2C_FIELD(arg0, s16 *, 0x328) = 0;
            M2C_FIELD(arg0, s32 *, 0x388) = 1;
            M2C_FIELD(arg0, s32 *, 0x384) = -1;
            M2C_FIELD(arg0, s16 *, 0x33C) = 0;
            M2C_FIELD(arg0, s32 *, 0x374) = 0;
            M2C_FIELD(arg0, s16 *, 0xB8) = 2;
            obj_clearFlags30(arg0, 0x06040000);
            temp_r3 = M2C_FIELD(arg0, void **, 0xA4);
            M2C_FIELD(temp_r3, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x18) | 1);
            break;
        }
        return 1;
    }
    return 0;
}
void TObjPlayer__sub_800AEE54(u8 *arg0) {
    s32 best_id;
    s32 i;
    s32 id;
    u8 *p;
    f32 best;
    f32 d;
    u8 *q;
    u16 tid;
    if (M2C_FIELD(arg0, s32 *, 0x374) != 1 && ((M2C_FIELD(arg0, s16 *, 0x326) != 0 && M2C_FIELD(arg0, u8 **, 0x2A8) == NULL) || ((VObj_18_cc39a7 *)(arg0))->m17(0x1E) != 0)) {
        if (obj_testFlags30((void *) (arg0), 0x10) != 0) {
            i = 0;
            best_id = 0xFFFF;
            Vec_800AEE54 v = *(Vec_800AEE54 *)lbl_8043B0B4;
            best = M2C_FIELD(M2C_FIELD(arg0, f32 **, 0x350), f32 *, 0) * M2C_FIELD(M2C_FIELD(arg0, f32 **, 0x350), f32 *, 0);
            for (; i < lbl_805D586C + lbl_805D5870; i++) {
                p = get_player_data__10TObjPlayerFi(i);
                if (p == NULL) {
                    break;
                }
                id = obj_getField1c(p);
                if ((u16)id < 0x4000 && (u16)id != M2C_FIELD(arg0, u16 *, 0x1C) && !(M2C_FIELD(p, s32 *, 0x30) & 0x02000800)) {
                    f32 xx;
                    f32 zz;
                    VecCopy__FP3VecPC3Vec(&v, p + 0x2FC);
                    TBoss6Type1__sub_803D9370(&v, arg0 + 0x2FC);
                    xx = v.x * v.x;
                    zz = v.z * v.z;
                    d = xx + zz;
                    if (d < best && check_path_obstructed((void *) (arg0), p + 0x2FC) != 1 && csnVector(arg0 + 0x2FC, p + 0x2FC, -1) == 0U) {
                        best_id = id;
                        best = d;
                    }
                }
            }
            M2C_FIELD(arg0, u16 *, 0x338) = best_id;
        } else {
            M2C_FIELD(arg0, u16 *, 0x338) = find_nearest_visible_player((void *) (arg0), 0, M2C_FIELD(M2C_FIELD(arg0, f32 **, 0x350), f32 *, 0));
        }
        tid = M2C_FIELD(arg0, u16 *, 0x338);
        if (tid < 0x1000U) {
            q = get_player_by_client_id(tid);
            if (q != NULL) {
                if (get_field_3e4__10TObjPlayerFPv((int) (q)) == get_current_floor()) {
                    M2C_FIELD(arg0, u8 **, 0x2A8) = q;
                    return;
                }
            }
            M2C_FIELD(arg0, u8 **, 0x2A8) = NULL;
            return;
        }
        if (tid < 0x4000U) {
            M2C_FIELD(arg0, u8 **, 0x2A8) = get_enemy_entity(tid);
            return;
        }
        M2C_FIELD(arg0, u16 *, 0x338) = 0xFFFFU;
        M2C_FIELD(arg0, u8 **, 0x2A8) = NULL;
    }
}
void run_task__11TObjEneMojaFPv(u8 *arg0) {
    f32 temp_f1;
    s16 temp_r0;
    s32 temp_r30;
    u16 temp_r3;
    u8 *temp_r3_2;
    u8 *temp_r4;
    if (check_demo_mode__10TObjPlayerFv() == 1) {
        TObjPlayer__sub_800ACA0C((void *) (arg0));
        return;
    }
    temp_r3 = M2C_FIELD(arg0, u16 *, 0x338);
    if (temp_r3 < 0x1000U) {
        temp_r3_2 = (u8 *)(get_player_by_client_id(temp_r3));
        if (temp_r3_2 != NULL) {
            if (get_field_3e4__10TObjPlayerFPv((int) (temp_r3_2)) == get_current_floor()) {
                M2C_FIELD(arg0, u8 **, 0x2A8) = temp_r3_2;
                goto done;
            }
        }
        M2C_FIELD(arg0, u8 **, 0x2A8) = NULL;
    done:;
    } else if (temp_r3 < 0x4000U) {
        M2C_FIELD(arg0, u8 **, 0x2A8) = get_enemy_entity(temp_r3);
    } else {
        M2C_FIELD(arg0, u16 *, 0x338) = 0xFFFFU;
        M2C_FIELD(arg0, u8 **, 0x2A8) = NULL;
    }
    {
        switch (M2C_FIELD(arg0, s16 *, 0x326)) {
        case 0:
            TObjPlayer__sub_800AEBB8((void *) (arg0));
            break;
        case 1:
            TObjPlayer__sub_800AE7F4((void *) (arg0));
            break;
        case 2:
            TObjPlayer__sub_800AE450((void *) (arg0));
            break;
        case 3:
            TObjPlayer__sub_800AE18C((u8 *)((void *) (arg0)));
            break;
        case 4:
            TObjPlayer__sub_800ADAAC((void *) (arg0));
            break;
        case 5:
            TObjPlayer__sub_800AD3D8((void *) (arg0));
            break;
        case 6:
            TObjPlayer__sub_800ACFE8((void *) (arg0));
            break;
        case 7:
            update_invincibility__10TObjPlayerFPv((void *) (arg0));
            break;
        case 8:
            update_ground_effect__10TObjPlayerFPv((void *) (arg0));
            break;
        case 9:
            TObjPlayer__sub_800ACB58((void *) (arg0));
            break;
        }
    }
    update_prev_position__10TObjPlayerFPv((void *) (arg0));
    copy_position__20TBoss3VoloptHiraisinFi((void *) (arg0));
    submit_cursor_candidate((void *) (arg0), (int) (-1));
    temp_r4 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x2A8));
    if ((temp_r4 != NULL) && (M2C_FIELD(temp_r4, s32 *, 0x30) & 0x02000800)) {
        M2C_FIELD(arg0, s32 *, 0x384) = -1;
        M2C_FIELD(arg0, s16 *, 0x33C) = 0;
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFDFFFFF);
        M2C_FIELD(arg0, u8 **, 0x2A8) = NULL;
    }
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x2B4);
    M2C_FIELD(arg0, f32 *, 0x2B4) = (f32) (temp_f1 + lbl_805D9BDC);
    minimap_render_dot((void *) ((u8 *)(arg0) + 0x38), (int) (-0x5DB4), (int) (1), (int) (0), (f32) (temp_f1));
}

}
