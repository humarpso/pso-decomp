#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
#define PADV virtual void CAT(pv, __LINE__)();
#define PADV4 virtual void CAT(pa, __LINE__)(); virtual void CAT(pb, __LINE__)(); virtual void CAT(pc, __LINE__)(); virtual void CAT(pd, __LINE__)();
struct Base_Sub_800D1F84 { char pad[0x14]; };
struct V_Sub_800D1F84 : Base_Sub_800D1F84 {
    PADV4
    PADV
    virtual s32 m5();
};

struct Entry_800D20BC { u32 id; f32 dist; };

struct Vec_800D20BC { f32 x, y, z; };

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct VBase_18_f1aa6a { char pad[0x18]; };

struct VObj_18_f1aa6a : VBase_18_f1aa6a {
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
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual M2C_UNK m63(s32, void *);
};

struct M2CCopy_18 { u8 bytes[0x18]; };

struct Vec_800D23D4 { f32 x, y, z; };

struct Desc_800D23D4 { Vec_800D23D4 *pos; s32 a; s32 angle; f32 b; f32 c; f32 d; };

struct Ids_800D23D4 { u16 v[4]; };

struct Idx_800D23D4 { s32 v[4]; };

extern "C" {
f32 TObjGyaranzoMissile__sub_800D40EC(s32);
extern f32 lbl_805D51F0;
extern f32 TObjGyaranzoMissile__speed_scale;
extern f32 TObjGyaranzoMissile__max_range;
void TObjGyaranzoMissile__sub_800D1F84(u8 *arg0);
s32 check_path_obstructed(void *, void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
u8 *get_player_data__10TObjPlayerFi(s32);
s32 obj_testFlags30(void *, int);
u16 obj_getField1c(void *);
void copy_from__19TObjGyaranzoMissileFPvPv(void* p, void* q);
s32 is_valid_and_active__10TObjPlayerFUi(void *);
M2C_UNK subtract_vector(void *, void *);
extern Entry_800D20BC TObjGyaranzoMissile_target_slots[];
extern s32 lbl_805D586C;
extern s32 lbl_805D5870;
extern const f32 lbl_805DA258;
extern const f32 lbl_805DA260;
void select_targets__19TObjGyaranzoMissileFPv(u8 *arg0);
M2C_UNK spawn_particle_effect(void *, int);
M2C_UNK render_anim_model_at_pos__12TBoss3VoloptFPv(void *);
s32 TObjGyaranzoMissile__sub_800D40FC(int);
M2C_UNK TObjGyaranzoMissile__ct(void *, void *, void *, u16);
s32 copy_target_state__14TObjEnePanarmsFPvPv(void *, s32);
M2C_UNK play_sound_effect(int, void *, int, int);
void *__nw__7TObjectFUl(int);
extern s32 gyaranzo_missile_volley_end_time;
void spawn_missile_volley__19TObjGyaranzoMissileFPv(u8 *arg0);
}

extern "C" {

void copy_from__19TObjGyaranzoMissileFPvPv(void* p, void* q);
void update__19TObjGyaranzoMissileFPv(u8 *arg0);
M2C_UNK advance_animation_playback(void *);
M2C_UNK TBoss3Volopt__sub_800D8D88(void *, s32);
M2C_UNK TObjEneMe3SinowZoa__sub_800D758C(void *);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, M2C_UNK, s32);

void TObjGyaranzoMissile__sub_800D1F84(u8 *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x350), f32 *, 4) = TObjGyaranzoMissile__sub_800D40EC(1);
    lbl_805D51F0 = TObjGyaranzoMissile__sub_800D40EC(2);
    TObjGyaranzoMissile__speed_scale = TObjGyaranzoMissile__sub_800D40EC(3);
    TObjGyaranzoMissile__max_range = TObjGyaranzoMissile__sub_800D40EC(4);
}

void update__19TObjGyaranzoMissileFPv(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r5;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) | 4);
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x30) | 0x04000000;
        M2C_FIELD(arg0, s32 *, 0x30) = temp_r4;
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        TBoss3Volopt__sub_800D8D88(arg0 + 0x2FC, temp_r4);
        TObjEneMe3SinowZoa__sub_800D758C(arg0 + 0x3D0);
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
    case 1:
        advance_animation_playback(arg0);
        if (((V_Sub_800D1F84 *) (arg0 + 0x3D0))->m5() == 1) {
            M2C_FIELD(arg0, s32 *, 0x37C) = -1;
        }
        return;
    case -1:
        temp_r5 = M2C_FIELD(arg0, s32 *, 0x388);
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (temp_r5 & ~5);
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFBFFFFFF);
        update_if_active__15TObjEneMe1GiGueFPv(arg0, 0, temp_r5);
        break;
    }
}

void select_targets__19TObjGyaranzoMissileFPv(u8 *arg0) {
    s32 count;
    s32 n;
    s32 best;
    s32 i;
    u8 *p;
    s32 j;
    s32 k;
    f32 dist;
    Vec_800D20BC d;
    TObjGyaranzoMissile_target_slots[0].id = 0xFFFF;
    TObjGyaranzoMissile_target_slots[0].dist = lbl_805DA258;
    n = 0;
    best = 0;
    k = obj_testFlags30(arg0, 0x10);
    count = lbl_805D586C;
    if (k != 0) {
        count += lbl_805D5870;
    }
    for (i = 0; i < count; i++) {
        p = get_player_data__10TObjPlayerFi(i);
        if (is_valid_and_active__10TObjPlayerFUi(p) == 0) continue;
        if (p == arg0) continue;
        if (M2C_FIELD(p, u32 *, 0x30) & 0x2000800) continue;
        VecCopy__FP3VecPC3Vec(&d, p + 0x2FC);
        subtract_vector(&d, arg0 + 0x2FC);
        dist = d.x * d.x + d.z * d.z;
        if (!(dist < lbl_805DA260)) continue;
        if (check_path_obstructed(arg0, p + 0x2FC) == 1) continue;
        TObjGyaranzoMissile_target_slots[n].dist = dist;
        TObjGyaranzoMissile_target_slots[n].id = obj_getField1c(p);
        if (n > 0 && TObjGyaranzoMissile_target_slots[n].dist > TObjGyaranzoMissile_target_slots[best].dist) {
            best = n;
        }
        n++;
        if (n >= 4) break;
    }
    {
        Entry_800D20BC def = { 0xFFFF, 0.0f };
        switch (n) {
        case 0:
            for (i = 0; i < 4; i++) {
                copy_from__19TObjGyaranzoMissileFPvPv(&TObjGyaranzoMissile_target_slots[i], &def);
            }
            break;
        case 2:
            for (i = n; i < 4; i++) {
                copy_from__19TObjGyaranzoMissileFPvPv(&TObjGyaranzoMissile_target_slots[i], &TObjGyaranzoMissile_target_slots[i % n]);
            }
            break;
        default:
            for (i = n; i < 4; i++) {
                copy_from__19TObjGyaranzoMissileFPvPv(&TObjGyaranzoMissile_target_slots[i], &TObjGyaranzoMissile_target_slots[best]);
            }
            break;
        }
    }
    M2C_FIELD(arg0, s32 *, 0x3CC) = n;
    for (i = 0; i < 3; i++) {
        for (j = i + 1; j < 4; j++) {
            if (TObjGyaranzoMissile_target_slots[i].dist > TObjGyaranzoMissile_target_slots[j].dist) {
                Entry_800D20BC tmp;
                copy_from__19TObjGyaranzoMissileFPvPv(&tmp, &TObjGyaranzoMissile_target_slots[i]);
                copy_from__19TObjGyaranzoMissileFPvPv(&TObjGyaranzoMissile_target_slots[i], &TObjGyaranzoMissile_target_slots[j]);
                copy_from__19TObjGyaranzoMissileFPvPv(&TObjGyaranzoMissile_target_slots[j], &tmp);
            }
        }
    }
    for (i = 0; i < 4; i++) {
        *(u32 *)(arg0 + i * 4 + 0x3BC) = TObjGyaranzoMissile_target_slots[i].id;
    }
}

void copy_from__19TObjGyaranzoMissileFPvPv(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); }
#define V ((VObj_18_f1aa6a *)(arg0))
#define NEW(d, id) { void *o = __nw__7TObjectFUl(0xDC); if (o != NULL) { TObjGyaranzoMissile__ct(o, arg0, &d, id); } }
#pragma pool_data off
void spawn_missile_volley__19TObjGyaranzoMissileFPv(u8 *arg0) {
    Vec_800D23D4 pos;
    s32 i;
    gyaranzo_missile_volley_end_time = TObjGyaranzoMissile__sub_800D40FC(1) + 0x96;
    render_anim_model_at_pos__12TBoss3VoloptFPv(arg0);
    {
        Desc_800D23D4 d1 = { &pos, -0x1000, M2C_FIELD(arg0, s32 *, 0x60) + 0x800, 1024.0f, 3.0f, 0.0f };
        Desc_800D23D4 d2 = { &pos, -0x2000, M2C_FIELD(arg0, s32 *, 0x60) + 0x800, 2048.0f, 10.0f, 0.4f };
        Desc_800D23D4 d3 = { &pos, -0x1000, M2C_FIELD(arg0, s32 *, 0x60) - 0x800, 1024.0f, 3.0f, 0.0f };
        Desc_800D23D4 d4 = { &pos, -0x2000, M2C_FIELD(arg0, s32 *, 0x60) - 0x800, 2048.0f, 10.0f, 0.4f };
        u16 ids[4] = { 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF };
        s32 idx[4] = { 0, 3, 1, 2 };
        for (i = 0; i < 4; i++) {
            ids[i] = *(s32 *)(arg0 + idx[i] * 4 + 0x3BC);
        }
        V->m63(0x10, &pos);
        NEW(d1, ids[0]);
        NEW(d2, ids[1]);
        spawn_particle_effect(&pos, 0xF3);
        V->m63(0x14, &pos);
        NEW(d3, ids[0]);
        NEW(d4, ids[1]);
        spawn_particle_effect(&pos, 0xF3);
        if (M2C_FIELD(arg0, s32 *, 0x3A8) >= 1) {
            V->m63(0x11, &pos);
            NEW(d1, ids[0]);
            NEW(d2, ids[1]);
            spawn_particle_effect(&pos, 0xF3);
            V->m63(0x15, &pos);
            NEW(d3, ids[2]);
            NEW(d4, ids[3]);
            spawn_particle_effect(&pos, 0xF3);
        }
        if (M2C_FIELD(arg0, s32 *, 0x3A8) >= 2) {
            V->m63(0x12, &pos);
            NEW(d1, ids[0]);
            NEW(d2, ids[1]);
            spawn_particle_effect(&pos, 0xF3);
            V->m63(0x16, &pos);
            NEW(d3, ids[2]);
            NEW(d4, ids[3]);
            spawn_particle_effect(&pos, 0xF3);
            V->m63(0x13, &pos);
            NEW(d1, ids[2]);
            NEW(d2, ids[3]);
            spawn_particle_effect(&pos, 0xF3);
            V->m63(0x17, &pos);
            NEW(d3, ids[2]);
            NEW(d4, ids[3]);
            spawn_particle_effect(&pos, 0xF3);
        }
    }
    play_sound_effect(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003AD0A), arg0 + 0x38, 0, 0);
}
#pragma pool_data reset

}
