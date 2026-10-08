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

typedef struct Tunnel_8003B6E8 {
    u8 pad0[0x1C];
    f32 f1c;
    f32 f20;
    s32 f24;
    s32 f28;
    u8 pad2c[0x34 - 0x2C];
    s32 f34;
    s32 f38;
    u8 pad3c[0x44 - 0x3C];
    s32 f44;
    s32 f48;
    f32 f4c;
    f32 f50;
    f32 f54;
    s32 f58;
    s32 f5c;
    f32 f60;
    s32 f64;
    u8 f68[0x94 - 0x68];
    f32 f94;
    f32 f98;
    s32 f9c;
    s32 fa0;
    s32 fa4;
    s32 fa8;
    f32 fac;
    s32 fb0;
    s32 fb4;
    s32 fb8;
    s32 fbc;
    u8 padc0[0xD8 - 0xC0];
    s32 fd8;
} Tunnel_8003B6E8;

typedef struct Col_8003B6E8 {
    s32 a;
    f32 r;
    f32 g;
    f32 b;
} Col_8003B6E8;

typedef struct Vec_8003B6E8 {
    f32 x, y, z;
} Vec_8003B6E8;

extern "C" {
void release_children__15TObjBoss2TunnelFPvf(u32, f32);
s32 create_particle__20TAdLoadQuestPrtTxtGCFPvii(void *, s32, s32);
void enable__13TParticleCtrlFPv(void *);
extern Rec_8003C108 lbl_80483590[];
extern const f32 lbl_805D85B0;
extern const f32 lbl_805D8650;
void update_particles__15TObjBoss2TunnelFPv(S_8003C108 *o);
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
extern Models_8003B2EC *boss2_tunnel_instance;
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
f32 sin_table_lookup(s32);
s32 check_flag_or_state__15TObjBoss2TunnelFi(void *);
s32 is_flag_set__15TObjBoss2TunnelFv(void *);
void TObjBoss2Tunnel__sub_8007DEE4(void *, f32, f32, f32, f32, f32);
f32 get_random_float__8TObjFishFv(f32);
f32 update_position__15TObjBoss2TunnelFPv(void *);
s32 advance_phase__15TObjBoss2TunnelFPv(void *, f32 *);
void set_global_flag_100__15TObjBoss2TunnelFv(void);
void TObjBoss2Tunnel__sub_8003C2E4(void *);
void init_queue_from_start__15TObjBoss2TunnelFPv(void *);
void TObjBoss2Tunnel__sub_8003C2A0(void *);
s32 TFogCtrl__sub_800FAAE4(void);
void *__nw__7TObjectFUl(int);
void init__15TObjBoss2TunnelFPv(void *, void *);
f32 rand_signed_unit(void);
int rand(void);
void *__ct__13TObjBoss2DustFv(void *, void *, Vec_8003B6E8 *);
void play_sound_effect(int, void *, int, int);
void play_persistent_sound(int, void *, int, int, int);
void update_particles__15TObjBoss2TunnelFPv(S_8003C108 *o);
void enable_fog__15TObjBoss2TunnelFv(void *);
void enable_fog__15TObjBoss2TunnelFPv(void *);
s32 is_active__15TObjBoss2TunnelFv(void);
void TObjBoss2Tunnel__sub_801339EC(f32, f32, f32);
extern u32 TObjBoss2Tunnel__global_flags;
extern void *tl_05;
extern const f32 lbl_805D85B0;
extern const f32 TObjBoss2Tunnel__data_805D85E0;
extern const f32 lbl_805D85E4;
extern const f32 lbl_805D85F0;
extern const f32 lbl_805D8600;
extern const f32 lbl_805D8604;
extern const f32 lbl_805D8608;
extern const f32 lbl_805D860C;
extern const f32 lbl_805D8610;
extern const f32 TObjBoss2Tunnel__data_805D8614;
extern const f32 lbl_805D8618;
extern const f32 lbl_805D861C;
extern const f32 lbl_805D8620;
extern const f32 lbl_805D8624;
extern const f32 lbl_805D8628;
extern const f32 lbl_805D862C;
extern const f32 lbl_805D8630;
extern const f32 lbl_805D8634;
extern const f32 lbl_805D8638;
extern const f32 lbl_805D863C;
extern const f32 lbl_805D8640;
extern const f32 lbl_805D8644;
extern const f32 lbl_805D8648;
void run_task__15TObjBoss2TunnelFv(Tunnel_8003B6E8 *o);
}

extern "C" {

void TObjBoss2Tunnel__sub_8003B2B0(void);
void *__ct__7TObjectFP7TObject(void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_07;
extern void *TObjBoss2Tunnel_parent_object;

void TObjBoss2Tunnel__sub_8003B2B0(void) {
    void *o;
    o = __nw__7TObjectFUl(0x1C);
    if (o != NULL) {
        o = __ct__7TObjectFP7TObject(o, tl_07);
    }
    TObjBoss2Tunnel_parent_object = o;
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
        draw_ginja_object(boss2_tunnel_instance->models[13].obj);
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
            draw_ginja_object(boss2_tunnel_instance->models[18].obj);
            draw_ginja_object(boss2_tunnel_instance->models[21].obj);
            pop_matrix();
            push_matrix();
            rotate_matrix_z(0, o->fa8);
            translate_matrix(0, o->f98, TObjBoss2Tunnel__data_805D85E0, TObjBoss2Tunnel__data_805D85E0);
            draw_ginja_object(boss2_tunnel_instance->models[10].obj);
            pop_matrix();
            translate_matrix(0, TObjBoss2Tunnel__data_805D85E0, TObjBoss2Tunnel__data_805D85E0, lbl_805D85E4);
            push_matrix();
            translate_matrix(0, TObjBoss2Tunnel__data_805D85E0, o->fac, TObjBoss2Tunnel__data_805D85E0);
            rotate_matrix_z(0, o->fa0);
            translate_matrix(0, o->f98, TObjBoss2Tunnel__data_805D85E0, TObjBoss2Tunnel__data_805D85E0);
            draw_ginja_object(boss2_tunnel_instance->models[19].obj);
            pop_matrix();
            push_matrix();
            rotate_matrix_z(0, o->fa8);
            translate_matrix(0, o->f98, TObjBoss2Tunnel__data_805D85E0, TObjBoss2Tunnel__data_805D85E0);
            draw_ginja_object(boss2_tunnel_instance->models[11].obj);
            pop_matrix();
            post_translate_matrix(&v);
        } else {
            push_matrix();
            translate_matrix(0, TObjBoss2Tunnel__data_805D85E0, o->fac, TObjBoss2Tunnel__data_805D85E0);
            rotate_matrix_z(0, o->fa0);
            translate_matrix(0, o->f98, TObjBoss2Tunnel__data_805D85E0, TObjBoss2Tunnel__data_805D85E0);
            draw_ginja_object(boss2_tunnel_instance->models[lbl_804833B8[t]].obj);
            pop_matrix();
            push_matrix();
            rotate_matrix_z(0, o->fa8);
            translate_matrix(0, o->f98, TObjBoss2Tunnel__data_805D85E0, TObjBoss2Tunnel__data_805D85E0);
            draw_ginja_object(boss2_tunnel_instance->models[lbl_804833D0[t]].obj);
            pop_matrix();
            post_translate_matrix(&v);
        }
    }
    (*lbl_805D4BEC)->c = saved;
    pop_matrix();
    }
}

#pragma push
#pragma fp_contract on
struct S_8003C108;
s32 lbl_804833B8[6] = {
    0x14, 0xe, 0xf, 0x10,
    0x11, 0x13,
};
s32 lbl_804833D0[12] = {
    0xc, 0x6, 0x7, 0x8,
    0x9, 0xb, 0x5, 0x0,
    0x1, 0x2, 0x3, 0x4,
};
void *lbl_80483400[28] = {
    (void *)0x3f800000, (void *)0x3f800000, (void *)0x3f19999a, (void *)0x3ecccccd,
    (void *)0x3f800000, (void *)0x3f800000, (void *)0x3f4ccccd, (void *)0x3f000000,
    (void *)0x3f800000, (void *)0x3f4ccccd, (void *)0x3f19999a, (void *)0x3e99999a,
    (void *)0x3f800000, (void *)0x3f19999a, (void *)0x3f800000, (void *)0x3ecccccd,
    (void *)0x3f800000, (void *)0x3f800000, (void *)0x3f4ccccd, (void *)0x3ecccccd,
    (void *)0x3f800000, (void *)0x3f800000, (void *)0x3f19999a, (void *)0x3ecccccd,
    (void *)0x3f800000, (void *)0x3f800000, (void *)0x3f19999a, (void *)0x3ecccccd,
};
void *lbl_80483470[4] = {
    (void *)0x3f800000, (void *)0x3f4ccccd, (void *)0x3f4ccccd, (void *)0x3f4ccccd,
};
void *lbl_80483480[15] = {
    (void *)0x1, (void *)0xa, (void *)0x1, (void *)0x5,
    (void *)0x1, (void *)0x2, (void *)0x2, (void *)0x14,
    (void *)0x2, (void *)0x14, (void *)0x4, (void *)0x5,
    (void *)0x4, (void *)0x2, (void *)0xffffffff,
};
#define lbl_80483400 ((Col_8003B6E8 *)lbl_80483400)
#define lbl_80483470 ((Col_8003B6E8 *)lbl_80483470)
#define lbl_80483480 ((s32 *)lbl_80483480)
void run_task__15TObjBoss2TunnelFv(Tunnel_8003B6E8 *o) {
    f32 tmp;
    s32 flag;
    f32 prev;
    o->f5c++;
    if (o->f5c >= 30) {
        o->f5c = 0;
    }
    o->f9c = (s32)((f32)o->f9c + lbl_805D8600);
    o->fa4 = (s32)((f32)o->fa4 + lbl_805D8600);
    o->fa0 = (s32)(lbl_805D8604 * sin_table_lookup(o->fa4));
    o->fac = lbl_805D860C * sin_table_lookup(o->f9c) + lbl_805D8608;
    if (check_flag_or_state__15TObjBoss2TunnelFi(o) != 0) {
        o->fa8 = (o->fa0 * 2) / 3;
    } else {
        o->fa8 = o->fa0 / 2;
    }
    switch (o->f64) {
    case 0:
        if (check_flag_or_state__15TObjBoss2TunnelFi(o) != 0) {
            if (is_flag_set__15TObjBoss2TunnelFv(o) != 0) {
                o->f94 = lbl_805D8610;
            } else {
                o->f94 = TObjBoss2Tunnel__data_805D8614;
            }
            o->f64 = 1;
            TObjBoss2Tunnel__sub_8007DEE4(o->f68, lbl_805D8618, lbl_805D861C, lbl_805D8620, lbl_805D8624, lbl_805D8608);
            o->f98 = TObjBoss2Tunnel__data_805D85E0;
        }
        break;
    case 1:
        if (check_flag_or_state__15TObjBoss2TunnelFi(o) == 0) {
            o->f64 = 3;
            tmp = get_random_float__8TObjFishFv(o->f98);
            TObjBoss2Tunnel__sub_8007DEE4(o->f68, lbl_805D8618, lbl_805D861C, o->f98, -update_position__15TObjBoss2TunnelFPv(o->f68), lbl_805D8608);
        } else {
            if (advance_phase__15TObjBoss2TunnelFPv(o->f68, &tmp) != 0) {
                o->f64 = 2;
            }
            o->f98 = tmp * o->f94;
        }
        break;
    case 2:
        if (check_flag_or_state__15TObjBoss2TunnelFi(o) == 0) {
            o->f64 = 3;
            TObjBoss2Tunnel__sub_8007DEE4(o->f68, lbl_805D8618, lbl_805D861C, lbl_805D8620, TObjBoss2Tunnel__data_805D85E0, lbl_805D8608);
        }
        break;
    case 3:
        if (advance_phase__15TObjBoss2TunnelFPv(o->f68, &tmp) != 0) {
            o->f98 = TObjBoss2Tunnel__data_805D85E0;
            o->f64 = 0;
        } else {
            o->f98 = o->f94 * (lbl_805D8620 - tmp);
        }
        break;
    }
    switch (o->f24) {
    case 0:
        set_global_flag_100__15TObjBoss2TunnelFv();
        if (TObjBoss2Tunnel__global_flags & 0x100) {
            TObjBoss2Tunnel__global_flags &= ~0x100;
            o->f24 = 1;
        }
        break;
    case 1:
        o->f20 += lbl_805D8628;
        if (o->f20 > lbl_805D85B0) {
            o->f20 = lbl_805D85B0;
        }
        o->f1c += o->f20;
        o->f60 += o->f20;
        if (o->f1c >= 600.0f) {
            o->f1c -= 600.0f;
            o->f28++;
            if (o->f28 >= 6) {
                o->f28 = 0;
                TObjBoss2Tunnel__sub_8003C2E4(o);
                o->f24 = 2;
                o->fb0 = TFogCtrl__sub_800FAAE4();
            } else {
                init_queue_from_start__15TObjBoss2TunnelFPv(o);
            }
        }
        break;
    case 2: {
        o->f20 += lbl_805D8628;
        if (o->f20 > lbl_805D85B0) {
            o->f20 = lbl_805D85B0;
        }
        o->f1c += o->f20;
        if (o->f1c >= 600.0f) {
            o->f1c -= 600.0f;
            o->f28++;
            if (o->f28 >= 31) {
                o->f28 = 0;
            }
            TObjBoss2Tunnel__sub_8003C2E4(o);
        }
        if (TObjBoss2Tunnel__global_flags & 0x200) {
            void *p;
            TObjBoss2Tunnel__global_flags &= ~0x200;
            o->f24 = 3;
            o->f44 = 0;
            o->f50 = lbl_805D862C - (lbl_805D8630 * (o->f20 * o->f20)) / lbl_805D8634;
            o->f4c = o->f1c;
            o->f54 = o->f20;
            o->f48 = 0;
            p = __nw__7TObjectFUl(0x24);
            if (p != 0) {
                init__15TObjBoss2TunnelFPv(p, o);
            }
        }
        o->fd8--;
        if (o->fd8 <= 0) {
            Vec_8003B6E8 v;
            void *p;
            v.x = lbl_805D8638 * rand_signed_unit();
            v.y = lbl_805D8640 * (lbl_805D8644 * (f32)rand()) + lbl_805D863C;
            v.z = lbl_805D85F0;
            p = __nw__7TObjectFUl(0x30);
            if (p != 0) {
                __ct__13TObjBoss2DustFv(p, tl_05, &v);
            }
            o->fd8 = 10;
        }
        break;
    }
    case 3:
        flag = 0;
        prev = o->f4c;
        if ((f32)o->f48 <= TObjBoss2Tunnel__data_805D85E0) {
            o->f4c = prev + o->f54;
            if (o->f4c > o->f50) {
                o->f48 = 1;
                o->f50 = o->f4c;
                play_sound_effect(0x4003A80E, 0, 0, 0);
            } else {
                play_persistent_sound(0x4003B20C, o, 0, 0, 0);
            }
        } else {
            f32 lim;
            o->f4c = (f32)o->f48 * (o->f54 - lbl_805D8648 * (f32)o->f48) + o->f50;
            o->f48 = (s32)((f32)o->f48 + TObjBoss2Tunnel__data_805D8614);
            lim = o->f54 / lbl_805D8634;
            if ((f32)o->f48 >= lim) {
                o->f48 = (s32)lim;
                o->f58 = 0;
                o->f24 = 4;
            }
        }
        o->f20 = o->f4c - prev;
        o->f1c += o->f4c - prev;
        if (o->f34 == 6 || o->f38 == 6) {
            if (o->f1c >= 700.0f) {
                o->f1c -= 700.0f;
                flag = 1;
            }
        } else if (o->f1c >= 600.0f) {
            o->f1c -= 600.0f;
            flag = 1;
        }
        if (flag) {
            TObjBoss2Tunnel__sub_8003C2A0(o);
        }
        break;
    case 4:
        break;
    }
    if (o->f24 == 1 || o->f24 == 2) {
        play_persistent_sound(0x4003B20C, o, 0, 0, 0);
    }
    update_particles__15TObjBoss2TunnelFPv((S_8003C108 *)o);
    if (TObjBoss2Tunnel__global_flags & 2) {
        TObjBoss2Tunnel__global_flags &= ~2;
        TObjBoss2Tunnel__global_flags |= 1;
    } else if (TObjBoss2Tunnel__global_flags & 4) {
        TObjBoss2Tunnel__global_flags &= ~4;
        TObjBoss2Tunnel__global_flags &= ~1;
    }
    switch (o->fb4) {
    case 0:
        if (TObjBoss2Tunnel__global_flags & 0x400) {
            TObjBoss2Tunnel__global_flags &= ~0x400;
            o->fb4 = 1;
            o->fb8 = 0;
            o->fbc = 0;
            enable_fog__15TObjBoss2TunnelFv(o);
        }
        break;
    case 1:
        o->fb8++;
        if (lbl_80483480[o->fbc] <= o->fb8) {
            o->fb8 = 0;
            o->fbc++;
            if (o->fbc & 1) {
                enable_fog__15TObjBoss2TunnelFPv(o);
            } else {
                enable_fog__15TObjBoss2TunnelFv(o);
                play_sound_effect(0x4003A80B, 0, 0, 0);
                if (lbl_80483480[o->fbc] == -1) {
                    o->fb4 = 2;
                }
            }
        }
        break;
    case 2:
        if (TObjBoss2Tunnel__global_flags & 0x800) {
            TObjBoss2Tunnel__global_flags &= ~0x800;
            o->fb4 = 3;
            o->fb8 = 0;
            o->fbc = 0;
            enable_fog__15TObjBoss2TunnelFPv(o);
        }
        break;
    case 3:
        o->fb8++;
        if (lbl_80483480[o->fbc] <= o->fb8) {
            o->fbc++;
            o->fb8 = 0;
            if (o->fbc & 1) {
                enable_fog__15TObjBoss2TunnelFv(o);
            } else {
                enable_fog__15TObjBoss2TunnelFPv(o);
                play_sound_effect(0x4003A80B, 0, 0, 0);
                if (lbl_80483480[o->fbc] == -1) {
                    o->fb4 = 0;
                }
            }
        }
        break;
    }
    if (is_active__15TObjBoss2TunnelFv() == 0) {
        f32 d = o->f1c;
        Col_8003B6E8 *a = &lbl_80483400[o->f34];
        Col_8003B6E8 *b = &lbl_80483400[o->f38];
        if (d <= lbl_805D8638) {
            TObjBoss2Tunnel__sub_801339EC(a->r, a->g, a->b);
        } else if (d <= lbl_805D85E4) {
            f32 u;
            f32 t;
            t = (d - lbl_805D8638) / lbl_805D8638;
            u = TObjBoss2Tunnel__data_805D8614 - t;
            TObjBoss2Tunnel__sub_801339EC(a->r * u + b->r * t, a->g * u + b->g * t, a->b * u + b->b * t);
        } else {
            TObjBoss2Tunnel__sub_801339EC(b->r, b->g, b->b);
        }
    } else {
        TObjBoss2Tunnel__sub_801339EC(lbl_80483470->r, lbl_80483470->g, lbl_80483470->b);
    }
}
#pragma pop

void update_particles__15TObjBoss2TunnelFPv(S_8003C108 *o) {
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
            r = create_particle__20TAdLoadQuestPrtTxtGCFPvii(&lbl_80483590[i], 0x171, 1);
            if (r != 0) {
                enable__13TParticleCtrlFPv((void *)r);
                o->ptr[i] = r;
            }
        } else {
            release_children__15TObjBoss2TunnelFPvf(p, t);
        }
    }
}

}
