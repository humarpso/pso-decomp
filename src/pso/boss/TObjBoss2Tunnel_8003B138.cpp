#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

struct S_8003C108 {
    u8 pad0[0x20];
    f32 f20;
    u8 pad24[0xC8 - 0x24];
    u32 ptr[4];
};

struct Rec_8003C108 { s32 a, b, c; };

typedef s32 M2C_UNK;
struct Vec_8003B2EC { f32 x, y, z; };

struct Model_8003B2EC { s32 a; s32 b; s32 obj; s32 c; };

struct Models_8003B2EC { u8 pad[0x42C]; Model_8003B2EC *models; };

struct Fog_8003B2EC { s32 a; s32 b; s32 c; };

struct Tunnel_8003B2EC {
    u8 pad0[0x1C];
    f32 f1c;
    u8 pad20[0x4];
    s32 f24;
    u8 pad28[0x4];
    s32 f2c[6];
    u8 pad44[0x1C];
    f32 f60;
    u8 pad64[0x34];
    f32 f98;
    u8 pad9c[0x4];
    s32 fa0;
    u8 pada4[0x4];
    s32 fa8;
    f32 fac;
};

extern "C" {
void TObjBoss2Tunnel__sub_8003B250(u32, f32);
s32 TAdLoadQuestPrtTxtGC__sub_80086E28(void *, s32, s32);
void enable__13TParticleCtrlFPv(void *);
extern Rec_8003C108 lbl_80483590[];
extern const f32 lbl_805D85B0;
extern const f32 lbl_805D8650;
void TObjBoss2Tunnel__sub_8003C108(S_8003C108 *o);
s32 get_state_flag__9TMainTaskFv();
s32 TObjBoss2Tunnel__sub_8003C21C(void *, void *);
s32 is_any_teammate_in_state__10TObjPlayerFv();
M2C_UNK rotate_matrix_z(M2C_UNK, s32);
M2C_UNK translate_matrix(M2C_UNK, f32, f32, f32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
M2C_UNK set_global_param__8TObjFishFi(void *);
M2C_UNK draw_ginja_object(s32);
extern Vec_8003B2EC lbl_80435EB8[];
extern s32 lbl_804833B8[];
extern s32 lbl_804833D0[];
extern Models_8003B2EC *lbl_805D4BE8;
extern Fog_8003B2EC **lbl_805D4BEC;
extern const f32 TObjBoss2Tunnel__data_805D85E0;
extern const f32 lbl_805D85E4;
extern const f32 lbl_805D85E8;
extern const f32 lbl_805D85EC;
extern const f32 lbl_805D85F0;
extern const f32 lbl_805D85F4;
extern const f32 lbl_805D85F8;
extern const f32 lbl_805D85FC;
void render__15TObjBoss2TunnelFv(u8 *arg0);
}

extern "C" {

void TObjBoss2Tunnel__sub_8003B2B0(void);
void *__ct__7TObjectFP7TObject(void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_07;
extern void *lbl_805D4BF8;

void TObjBoss2Tunnel__sub_8003B2B0(void) {
    void *o;
    o = __nw__7TObjectFUl(0x1C);
    if (o != NULL) {
        o = __ct__7TObjectFP7TObject(o, tl_07);
    }
    lbl_805D4BF8 = o;
}

void render__15TObjBoss2TunnelFv(u8 *arg0) {
    s32 saved;
    s32 i;
    Tunnel_8003B2EC *o = (Tunnel_8003B2EC *)arg0;
    Vec_8003B2EC v = lbl_80435EB8[0];
    if (is_any_teammate_in_state__10TObjPlayerFv() == 0 && get_state_flag__9TMainTaskFv() == 0) {
    push_matrix();
    {
        Fog_8003B2EC *f = *lbl_805D4BEC;
        saved = f->c;
        f->c = f[TObjBoss2Tunnel__sub_8003C21C(o, lbl_805D4BEC)].c;
    }
    set_global_param__8TObjFishFi(lbl_805D4BEC);
    if (o->f24 == 0 || o->f24 == 1) {
        push_matrix();
        translate_matrix(0, TObjBoss2Tunnel__data_805D85E0, TObjBoss2Tunnel__data_805D85E0, -o->f60);
        draw_ginja_object(lbl_805D4BE8->models[13].obj);
        pop_matrix();
    }
    if (o->f24 == 3) {
        v.z = -o->f1c;
        if (o->f2c[0] == 6) {
            v.z -= lbl_805D85E4;
        } else {
            v.z -= lbl_805D85E8;
        }
        if (o->f2c[1] == 6) {
            v.z -= lbl_805D85EC;
        } else {
            v.z -= lbl_805D85F0;
        }
        if (o->f2c[2] == 6) {
            v.z -= lbl_805D85E4;
        } else {
            v.z -= lbl_805D85E8;
        }
    } else {
        v.z = -(lbl_805D85F4 + o->f1c);
    }
    post_translate_matrix(&v);
    v.z = lbl_805D85F0;
    for (i = 0; i < 6; i++) {
        s32 t = o->f2c[i];
        if (t == 6) {
            if (i != 0) {
                translate_matrix(0, TObjBoss2Tunnel__data_805D85E0, TObjBoss2Tunnel__data_805D85E0, lbl_805D85F8);
            }
            translate_matrix(0, TObjBoss2Tunnel__data_805D85E0, TObjBoss2Tunnel__data_805D85E0, lbl_805D85FC);
            push_matrix();
            translate_matrix(0, TObjBoss2Tunnel__data_805D85E0, o->fac, TObjBoss2Tunnel__data_805D85E0);
            rotate_matrix_z(0, o->fa0);
            translate_matrix(0, o->f98, TObjBoss2Tunnel__data_805D85E0, TObjBoss2Tunnel__data_805D85E0);
            draw_ginja_object(lbl_805D4BE8->models[18].obj);
            draw_ginja_object(lbl_805D4BE8->models[21].obj);
            pop_matrix();
            push_matrix();
            rotate_matrix_z(0, o->fa8);
            translate_matrix(0, o->f98, TObjBoss2Tunnel__data_805D85E0, TObjBoss2Tunnel__data_805D85E0);
            draw_ginja_object(lbl_805D4BE8->models[10].obj);
            pop_matrix();
            translate_matrix(0, TObjBoss2Tunnel__data_805D85E0, TObjBoss2Tunnel__data_805D85E0, lbl_805D85E4);
            push_matrix();
            translate_matrix(0, TObjBoss2Tunnel__data_805D85E0, o->fac, TObjBoss2Tunnel__data_805D85E0);
            rotate_matrix_z(0, o->fa0);
            translate_matrix(0, o->f98, TObjBoss2Tunnel__data_805D85E0, TObjBoss2Tunnel__data_805D85E0);
            draw_ginja_object(lbl_805D4BE8->models[19].obj);
            pop_matrix();
            push_matrix();
            rotate_matrix_z(0, o->fa8);
            translate_matrix(0, o->f98, TObjBoss2Tunnel__data_805D85E0, TObjBoss2Tunnel__data_805D85E0);
            draw_ginja_object(lbl_805D4BE8->models[11].obj);
            pop_matrix();
            post_translate_matrix(&v);
        } else {
            push_matrix();
            translate_matrix(0, TObjBoss2Tunnel__data_805D85E0, o->fac, TObjBoss2Tunnel__data_805D85E0);
            rotate_matrix_z(0, o->fa0);
            translate_matrix(0, o->f98, TObjBoss2Tunnel__data_805D85E0, TObjBoss2Tunnel__data_805D85E0);
            draw_ginja_object(lbl_805D4BE8->models[lbl_804833B8[t]].obj);
            pop_matrix();
            push_matrix();
            rotate_matrix_z(0, o->fa8);
            translate_matrix(0, o->f98, TObjBoss2Tunnel__data_805D85E0, TObjBoss2Tunnel__data_805D85E0);
            draw_ginja_object(lbl_805D4BE8->models[lbl_804833D0[t]].obj);
            pop_matrix();
            post_translate_matrix(&v);
        }
    }
    (*lbl_805D4BEC)->c = saved;
    pop_matrix();
    }
}

void TObjBoss2Tunnel__sub_8003C108(S_8003C108 *o) {
    f32 t;
    s32 i;
    u32 r;
    u32 p;
    if (o->f20 < lbl_805D85B0) {
        t = lbl_805D8650 * (o->f20 / lbl_805D85B0);
    } else {
        t = lbl_805D8650;
    }
    for (i = 0; i < 4; i++) {
        p = o->ptr[i];
        if (p == 0) {
            r = TAdLoadQuestPrtTxtGC__sub_80086E28(&lbl_80483590[i], 0x171, 1);
            if (r != 0) {
                enable__13TParticleCtrlFPv((void *)r);
                o->ptr[i] = r;
            }
        } else {
            TObjBoss2Tunnel__sub_8003B250(p, t);
        }
    }
}

}
