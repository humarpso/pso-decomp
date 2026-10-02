#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Obj_80053CEC { u8 pad[0x38C]; void *target; u8 pad390[0x10]; s32 f3a0; u8 pad3a4[4]; s32 f3a8; u8 pad3ac[4]; s32 f3b0; s32 f3b4; };

struct S_80053B48 { u8 pad0[0x3a0]; s32 f3a0; };

struct Obj_80053AD4 { u8 pad0[0x3B0]; s32 i3B0; s32 i3B4; f32 f3B8; f32 f3BC; f32 f3C0; };
typedef struct Vec_80053D4C {
    f32 x, y, z;
} Vec_80053D4C;

typedef struct Spot_80053D4C {
    Vec_80053D4C pos;
    u8 padc[0x18 - 0xC];
} Spot_80053D4C;

typedef struct Part_80053D4C {
    Vec_80053D4C pos;
    u8 padc[0x1C - 0xC];
    Vec_80053D4C local;
    u8 pad28[0x2C - 0x28];
} Part_80053D4C;

typedef struct Obj_80053D4C {
    u8 pad0[0x38];
    Vec_80053D4C pos;
    u8 pad44[0x60 - 0x44];
    s32 angle;
    u8 pad64[0x394 - 0x64];
    Part_80053D4C *parts;
    u8 pad398[0x438 - 0x398];
    Spot_80053D4C spots[3];
} Obj_80053D4C;

struct Vec_80053E40 { f32 x, y, z; };
struct XZ_80053E40 { f32 x, z; };
struct Obj_80053E40 {
    u8 pad0[0x38];
    Vec_80053E40 pos;
    u8 pad44[0x60 - 0x44];
    void *x60;
    u8 pad64[0x3D0 - 0x64];
    s32 count;
};

struct RecoveredGlobal_80054530_lbl_80485EC8 {
    M2C_UNK value;
    u8 remaining[0x1DC];
};

struct V_80054224 { f32 x, y, z; };

struct S_80054224 { u8 pad0[0x38]; V_80054224 pos; u8 pad44[0x39c - 0x44]; f32 f39c; };

struct Boss_800542B0 {
    u8 pad0[0x374];
    s32 state;
    u8 pad378[0x3D0 - 0x378];
    s32 f3d0;
    u8 pad3d4[0x3F8 - 0x3D4];
    void *items[13];
};

typedef void (Boss_800542B0::*Act_800542B0)();

struct Entry_800542B0 {
    s32 f0;
    s32 f4;
    Act_800542B0 enter;
    Act_800542B0 a;
    Act_800542B0 b;
};

struct RecoveredGlobal_8005455C_lbl_80485EC8 {
    M2C_UNK value;
    u8 remaining[0x1DC];
};

struct Obj_80054738 {
    u8 pad0[0x32C];
    s16 x32c;
    u8 pad32e[0x33E - 0x32E];
    s16 x33e;
    u8 pad340[0x374 - 0x340];
    s32 x374;
    u8 pad378[0x38C - 0x378];
    s32 x38c;
    u8 pad390[0x3DC - 0x390];
    f32 x3dc;
    f32 x3e0;
    void m();
};
typedef void (Obj_80054738::*Act_80054738)();
struct Ent_80054738 { u8 pad[0x14]; Act_80054738 a; Act_80054738 b; };

extern "C" {
void TBoss4DarkFalz__sub_8004B16C(void *, s32);
void TBoss4Type2__sub_80053C8C(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void TBoss4DarkFalz__sub_8004B16C(void *, s32);
void TBoss4Type2__sub_80053CEC(Obj_80053CEC *self, s32 arg1);
f32 calc_boss4_scale__10TObjPlayerFi(void *);
extern const f32 lbl_805D8B64;
extern const f32 lbl_805D8B68;
extern const f32 lbl_805D8B6C;
void TBoss4Type2__sub_80053B48(S_80053B48 *o, s32 *a, s32 *b);
void TBoss4Type2__sub_80053BF4(void *arg0, u32 arg1);

extern const f32 lbl_805D8B20;
extern const f32 lbl_805D8B58;
extern const f32 lbl_805D8B5C;
extern const f32 lbl_805D8B60;
void TBoss4Type2__sub_80053AD4(Obj_80053AD4 *arg0);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);
void TBoss6Type1__sub_803D9370(Vec_80053D4C *, Vec_80053D4C *);
void fn_80053D4C(Obj_80053D4C *arg0);
void TBoss4Type2__sub_800542B0(Boss_800542B0 *arg0, s32 arg1);
int TObjPlayer__sub_803D9B2C(void);
int pop_matrix(void);
void VecCopy__FP3VecPC3Vec(void *, void *);
int rotate_matrix_y(void *, void *);
void TObjPlayer__sub_803D8CD4(int);
void set_position_vec3__10TObjPlayerFPvPv(int, void *);
void TCameraCtrl__sub_803D8934(int, void *, void *);
u8 *get_player_data__10TObjPlayerFi(s32);
s32 get_field_3e0__12TBoss3VoloptFPv(void *);
Vec_80053E40 *get_position_ptr__10TObjPlayerFPv(void *);
f32 TBoss6Kakusan__sub_803D8BD8(void *);
void TNpcPlayer__sub_803D97B4(void *);
s32 project_actor_to_ground(void *, void *, int);
f32 TObjPlayer__sub_803E1A58(void *, void *);
void TBoss4DarkFalz__sub_8004C220(void *, void *);
void save_position__14TBoss4DarkFalzFi(void *);
void set_indexed_flags(void *, int, int);
extern XZ_80053E40 lbl_804860C0[];
extern f32 lbl_804860A8[];
extern s32 lbl_805D586C;
extern const f32 lbl_805D8B08;
extern const f32 lbl_805D8B18;
extern const f32 lbl_805D8B20;
extern const f32 lbl_805D8B44;
extern const f32 lbl_805D8B70;

extern RecoveredGlobal_80054530_lbl_80485EC8 lbl_80485EC8;
extern const f32 lbl_805D8B20;
void TBoss4Type2__sub_80054530(u8 *arg0, s32 arg1);
extern u8 *lbl_8048615C[];
u8 *TBoss4Type2__sub_80054384(void *self, s32 i, s32 j);
void VecCopy__FP3VecPC3Vec(void *, void *);
void TBoss4Zako__sub_803D8910(void *, void *);
void TBoss4Type2__sub_80054224(S_80054224 *o, void *src, V_80054224 *in);
s32 TObjFish__sub_8001ED9C(s32, s32);
M2C_UNK TObjFish__sub_8001EDB0(s32, s32);
s32 TObjFish__sub_8001EDC4(s32, s32);
M2C_UNK clear_render_callback__8TObjFishFv(s32);
M2C_UNK TObjFish__sub_800E3074(s32);
M2C_UNK update_camera_target__14TBoss6PlotFalzFv();
M2C_UNK TBoss6PlotFalz__sub_802AC008(f32, f32);
M2C_UNK set_global_param__8TObjFishFi();
M2C_UNK TObjEneSlimeOne__sub_803E4AF4(s32, s32, f32);
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK clear_global_state__10TObjPlayerFv();
extern s32 lbl_80485EB0[];
extern RecoveredGlobal_80054530_lbl_80485EC8 lbl_80485EC8;
void TObjFish__sub_800543A4(u8 *arg0);
void request_destroy__11TBoss4Type2FUi(void *);
extern Entry_800542B0 lbl_80485C48[];

extern const f32 lbl_805D8B78;
extern const f32 lbl_805D8B7C;
void fn_8005455C(u8 *arg0);

s32 is_field378_zero__14TBoss4DarkFalzFPv(s32);
M2C_UNK fn_80053440(void *);
M2C_UNK TRaderMapCore__sub_80053670(void *);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
M2C_UNK submit_cursor_candidate(void *, M2C_UNK);
extern const f32 lbl_805D8B80;

void calc_scaled_field__11TBoss4Type2FPvii(void *arg0, s32 arg1, s32 arg2);
f32 calc_wave_offset__11TBoss4Type2Ff(f32 farg0);
s32 TBoss4Type2__sub_80141FA8(s32, s32);
f32 TBoss8Dragon__sub_803D64DC(s32);

void render_and_update_effects__10TObjPlayerFPv(void* p);
void render_effects__10TObjPlayerFPv(void* p);
void snapshot_position__10TObjPlayerFPv(u8 *arg0);
int TOHangerMachine01__sub_803D9C00(void*);
int TObjPlayer__sub_800531C8(void*);
int end_effect_render__13TParticleCtrlFv(void);
int toggle_particle_effect__10TObjPlayerFv(void*);

#pragma push
#pragma fp_contract on
void TBoss4Type2__sub_80053AD4(Obj_80053AD4 *arg0) {
    arg0->f3B8 = lbl_805D8B5C * (lbl_805D8B60 + (f32)arg0->i3B0) - lbl_805D8B58;
    arg0->f3BC = lbl_805D8B20;
    arg0->f3C0 = lbl_805D8B5C * (lbl_805D8B60 + (f32)arg0->i3B4) - lbl_805D8B58;
}
#pragma pop

void TBoss4Type2__sub_80053B48(S_80053B48 *o, s32 *a, s32 *b) {
    f32 s;
    s32 v;
    v = o->f3a0 + (s32)(lbl_805D8B64 * calc_boss4_scale__10TObjPlayerFi(o));
    v += 1;
    if (v >= 4) {
        v -= 4;
    }
    *a = v;
    s = calc_boss4_scale__10TObjPlayerFi(o);
    if (s <= lbl_805D8B68) {
        *b = 0;
    } else if (s <= lbl_805D8B6C) {
        *b = 1;
    } else {
        *b = 2;
    }
}

void TBoss4Type2__sub_80053BF4(void *arg0, u32 arg1) {
    s32 n;
    M2C_FIELD(arg0, s32 *, 0x3A4) = (s32) ((arg1 >> 4U) & 3);
    M2C_FIELD(arg0, s32 *, 0x3A0) = (s32) ((arg1 >> 6U) & 3);
    M2C_FIELD(arg0, s32 *, 0x3AC) = (s32) ((arg1 >> 8U) & 3);
    M2C_FIELD(arg0, s32 *, 0x3A8) = (s32) ((arg1 >> 0xAU) & 3);
    if (M2C_FIELD(arg0, s32 *, 0x3AC) > 2 || M2C_FIELD(arg0, s32 *, 0x3A8) > 2) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x3B0) = (s32) ((arg1 >> 0xCU) & 0xF);
    M2C_FIELD(arg0, s32 *, 0x3B4) = (s32) ((arg1 >> 0x10U) & 0xF);
    ((void (*)(void *))TBoss4Type2__sub_80053AD4)(arg0);
    n = arg1 & 0xF;
    if (n < 0 || n >= 0xB) {
        return;
    }
    ((M2C_UNK (*)(void *, int))TBoss4Type2__sub_800542B0)(arg0, n);
}

void TBoss4Type2__sub_80053C8C(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 *temp_r3;
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x38C));
    if (temp_r3 != NULL) {
        TBoss4DarkFalz__sub_8004B16C(temp_r3, ((((((((((((M2C_FIELD(arg0, s32 *, 0x3A0) * 0x10) & 0x30 & ~0xF) | (arg1 & 0xF)) & ~0xC0) | ((arg2 << 6) & 0xC0)) & ~0x300) | ((M2C_FIELD(arg0, s32 *, 0x3A8) << 8) & 0x300)) & ~0xC00) | ((arg3 << 0xA) & 0xC00)) & ~0xF000) | ((M2C_FIELD(arg0, s32 *, 0x3B0) << 0xC) & 0xF000)) & ~0xF0000) | ((M2C_FIELD(arg0, s32 *, 0x3B4) << 0x10) & 0xF0000));
    }
}
void TBoss4Type2__sub_80053CEC(Obj_80053CEC *self, s32 arg1) {
    if (self->target != 0) {
        TBoss4DarkFalz__sub_8004B16C(self->target, (arg1 & 0xF) | ((self->f3a0 & 3) << 4) | ((self->f3a0 & 3) << 6) | ((self->f3a8 & 3) << 8) | ((self->f3a8 & 3) << 10) | ((self->f3b0 & 0xF) << 12) | ((self->f3b4 & 0xF) << 16));
    }
}

#pragma push
#pragma fp_contract on
void fn_80053D4C(Obj_80053D4C *arg0) {
    Part_80053D4C *q;
    s32 i;
    f32 s;
    f32 c;
    q = arg0->parts;
    for (i = 0; i < 3; i++, q++) {
        Vec_80053D4C v = arg0->spots[i].pos;
        VecCopy__FP3VecPC3Vec(&q->local, &v);
        TBoss6Type1__sub_803D9370(&v, &arg0->pos);
        s = TBoss8Dragon__sub_803D64C0(-arg0->angle);
        c = TBoss8Dragon__sub_803D64DC(-arg0->angle);
        Vec_80053D4C t = v;
        v.x = c * t.x + s * t.z;
        v.z = -s * t.x + c * t.z;
        VecCopy__FP3VecPC3Vec(q, &v);
    }
}
#pragma pop

void TObjPlayer__sub_80053E40(Obj_80053E40 *o) {
    XZ_80053E40 pts[7];
    Vec_80053E40 in;
    Vec_80053E40 out;
    s32 i;
    s32 p;
    u8 *pl;
    s32 j;

    TObjPlayer__sub_803D9B2C();
    TObjPlayer__sub_803D8CD4(0);
    set_position_vec3__10TObjPlayerFPvPv(0, &o->pos);
    rotate_matrix_y(0, o->x60);
    for (i = 0; i < o->count; i++) {
        in.x = lbl_804860C0[i].x;
        in.y = lbl_805D8B20;
        in.z = lbl_804860C0[i].z;
        TCameraCtrl__sub_803D8934(0, &in, &out);
        pts[i].x = out.x;
        pts[i].z = out.z;
    }
    pop_matrix();
    for (p = 0; p < lbl_805D586C; p++) {
        pl = get_player_data__10TObjPlayerFi(p);
        if (pl != NULL && get_field_3e0__12TBoss3VoloptFPv(pl) == 0xE) {
            Vec_80053E40 pos = *get_position_ptr__10TObjPlayerFPv(pl);
            Vec_80053E40 d;
            Vec_80053E40 q;
            for (j = 0; j < o->count; j++) {
                f32 r = lbl_804860A8[j];
                f32 dist;
                VecCopy__FP3VecPC3Vec(&d, &pos);
                d.x = d.x - pts[j].x;
                d.y = lbl_805D8B20;
                d.z = d.z - pts[j].z;
                dist = TBoss6Kakusan__sub_803D8BD8(&d);
                if (!(dist > r)) {
                    if (lbl_805D8B20 == dist) {
                        VecCopy__FP3VecPC3Vec(&d, &pos);
                        d.y = lbl_805D8B20;
                        if (lbl_805D8B20 == TBoss6Kakusan__sub_803D8BD8(&d)) {
                            d.y = lbl_805D8B20;
                            d.x = lbl_805D8B18;
                            d.z = lbl_805D8B20;
                        }
                    }
                    TNpcPlayer__sub_803D97B4(&d);
                    {
                        f32 s = lbl_805D8B08 + r;
                        d.x *= s;
                        d.z *= s;
                    }
                    pos.x = d.x + pts[j].x;
                    pos.z = d.z + pts[j].z;
                    VecCopy__FP3VecPC3Vec(&q, &pos);
                    for (;;) {
                        f32 m;
                        q.y += lbl_805D8B44;
                        if (project_actor_to_ground(o, &q, 0) != 0) {
                            break;
                        }
                        q.y = lbl_805D8B20;
                        m = TBoss6Kakusan__sub_803D8BD8(&q) - lbl_805D8B70;
                        TNpcPlayer__sub_803D97B4(&q);
                        q.x *= m;
                        q.z *= m;
                    }
                    VecCopy__FP3VecPC3Vec(&pos, &q);
                }
            }
            if (TObjPlayer__sub_803E1A58(get_position_ptr__10TObjPlayerFPv(pl), &pos) > lbl_805D8B20) {
                TBoss4DarkFalz__sub_8004C220(pl, &pos);
                save_position__14TBoss4DarkFalzFi(pl);
                set_indexed_flags(pl, 0, 0x900000);
                *(u32 *)(pl + 0x30) &= ~0x20;
            }
        }
    }
}

extern const f32 lbl_805D8B18;
extern const f32 lbl_805D8B60;
extern const f32 lbl_805D8B74;

f32 calc_wave_offset__11TBoss4Type2Ff(f32 farg0) {
    return lbl_805D8B60 * (lbl_805D8B18 - TBoss8Dragon__sub_803D64DC((s32) (lbl_805D8B74 * farg0)));
}

extern M2C_UNK lbl_80437628;

void calc_scaled_field__11TBoss4Type2FPvii(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) (arg1 + (s32) (M2C_FIELD(arg0, f32 *, 0x39C) * (f32) TBoss4Type2__sub_80141FA8(arg1, arg2)));
}
typedef char RecoveredGlobal_80054530_lbl_80485EC8_size[sizeof(RecoveredGlobal_80054530_lbl_80485EC8) == 0x1E0 ? 1 : -1];

void TBoss4Type2__sub_80054224(S_80054224 *o, void *src, V_80054224 *in) {
    V_80054224 v = *in;
    ((void (*)(void *))TBoss6Type1__sub_803D9370)(&v);
    v.x *= o->f39c;
    v.y *= o->f39c;
    v.z *= o->f39c;
    VecCopy__FP3VecPC3Vec(&o->pos, src);
    TBoss4Zako__sub_803D8910(&o->pos, &v);
}

void TBoss4Type2__sub_800542B0(Boss_800542B0 *arg0, s32 arg1) {
    s32 i;
    void **p;

    arg0->state = arg1;
    for (i = 8; i < 13; i++) {
        p = &arg0->items[i];
        if (*p != NULL) {
            request_destroy__11TBoss4Type2FUi(*p);
            *p = NULL;
        }
    }
    arg0->f3d0 = 5;
    TBoss4Type2__sub_80054530((u8 *)arg0, lbl_80485C48[arg0->state].f4);
    Act_800542B0 f = lbl_80485C48[arg0->state].enter;
    if (f) {
        (arg0->*f)();
    }
}

u8 *TBoss4Type2__sub_80054384(void *self, s32 i, s32 j) {
    return lbl_8048615C[i] + (j - 1) * 0x4000;
}

#pragma push
#pragma opt_propagation off
void TObjFish__sub_800543A4(u8 *arg0) {
    s32 i;
    s32 off;
    s32 a;
    set_global_flag__10TObjPlayerFv();
    for (i = 0; i < 6; i++) {
        TObjFish__sub_8001EDB0(M2C_FIELD(arg0, s32 *, 0x390), lbl_80485EB0[i]);
        set_global_param__8TObjFishFi();
        switch (i) {
        case 2:
        case 3:
        case 4:
            TBoss6PlotFalz__sub_802AC008(M2C_FIELD(arg0, f32 *, 0x3DC), M2C_FIELD(arg0, f32 *, 0x3E0));
            off = (i - 2) * 4 + 0x42C;
            TObjFish__sub_800E3074(*(s32 *)(arg0 + off));
            a = TObjFish__sub_8001EDC4(M2C_FIELD(arg0, s32 *, 0x390), lbl_80485EB0[i]);
            TObjEneSlimeOne__sub_803E4AF4(a, TObjFish__sub_8001ED9C(M2C_FIELD(arg0, s32 *, 0x390), M2C_FIELD((u8 *)&lbl_80485EC8.value + (M2C_FIELD(arg0, s32 *, 0x3E4) << 5) + i * 4, s32 *, 8)), M2C_FIELD(arg0, f32 *, 0x3E8));
            clear_render_callback__8TObjFishFv(*(s32 *)(arg0 + off));
            update_camera_target__14TBoss6PlotFalzFv();
            break;
        case 5:
            TObjFish__sub_800E3074(M2C_FIELD(arg0, s32 *, 0x480));
            TObjEneSlimeOne__sub_803E4AF4(TObjFish__sub_8001EDC4(M2C_FIELD(arg0, s32 *, 0x390), lbl_80485EB0[i]), TObjFish__sub_8001ED9C(M2C_FIELD(arg0, s32 *, 0x390), M2C_FIELD((u8 *)&lbl_80485EC8.value + (M2C_FIELD(arg0, s32 *, 0x3E4) << 5) + i * 4, s32 *, 8)), M2C_FIELD(arg0, f32 *, 0x3E8));
            clear_render_callback__8TObjFishFv(M2C_FIELD(arg0, s32 *, 0x480));
            break;
        default:
            TObjEneSlimeOne__sub_803E4AF4(TObjFish__sub_8001EDC4(M2C_FIELD(arg0, s32 *, 0x390), lbl_80485EB0[i]), TObjFish__sub_8001ED9C(M2C_FIELD(arg0, s32 *, 0x390), M2C_FIELD((u8 *)&lbl_80485EC8.value + (M2C_FIELD(arg0, s32 *, 0x3E4) << 5) + i * 4, s32 *, 8)), M2C_FIELD(arg0, f32 *, 0x3E8));
            break;
        }
    }
    clear_global_state__10TObjPlayerFv();
    M2C_FIELD(arg0, s32 *, 0x3D4) = 0;
}
#pragma pop

void TBoss4Type2__sub_80054530(u8 *arg0, s32 arg1) {
    if (arg1 != -1) {
        M2C_FIELD(arg0, s32 *, 0x3E4) = arg1;
        M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) lbl_805D8B20;
        M2C_FIELD(arg0, s32 *, 0x3F0) = (s32) M2C_FIELD(((u8 *)(&lbl_80485EC8.value) + (arg1 << 5)), s32 *, 0);
    }
}

#pragma push
#pragma opt_common_subs off
typedef char RecoveredGlobal_8005455C_lbl_80485EC8_size[sizeof(RecoveredGlobal_8005455C_lbl_80485EC8) == 0x1E0 ? 1 : -1];
void fn_8005455C(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    s32 temp_r0;
    M2C_FIELD(arg0, s32 *, 0x3F4) = 0;
    M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) (M2C_FIELD(arg0, f32 *, 0x3E8) + M2C_FIELD(arg0, f32 *, 0x3EC));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x3F0);
    switch (temp_r0) {
    case 0:
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x3E8);
        if (temp_f1 >= lbl_805D8B78) {
            M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) (temp_f1 - lbl_805D8B78);
            M2C_FIELD(arg0, s32 *, 0x3F4) = 1;
        }
        break;
    case 1:
        if (M2C_FIELD(arg0, f32 *, 0x3E8) >= lbl_805D8B7C) {
            M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) lbl_805D8B7C;
            M2C_FIELD(arg0, s32 *, 0x3F4) = 1;
        }
        break;
    case 2:
        if (M2C_FIELD(arg0, f32 *, 0x3E8) >= lbl_805D8B7C) {
            M2C_FIELD(arg0, s32 *, 0x3E4) = (s32) M2C_FIELD(((u8 *)&lbl_80485EC8.value + (M2C_FIELD(arg0, s32 *, 0x3E4) << 5)), s32 *, 4);
            M2C_FIELD(arg0, s32 *, 0x3F0) = (s32) M2C_FIELD(&lbl_80485EC8.value, M2C_UNK *, (M2C_FIELD(arg0, s32 *, 0x3E4) << 5));
            M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) lbl_805D8B20;
            M2C_FIELD(arg0, s32 *, 0x3F4) = 1;
        }
        break;
    }
    temp_f1_2 = M2C_FIELD(arg0, f32 *, 0x3E8);
    if ((temp_f1_2 < lbl_805D8B20) || (temp_f1_2 >= lbl_805D8B78)) {
        M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) lbl_805D8B20;
    }
}
#pragma pop

void render_effects__10TObjPlayerFPv(void* p) { toggle_particle_effect__10TObjPlayerFv(p); TObjPlayer__sub_803D9B2C(); TOHangerMachine01__sub_803D9C00((char*)p + 0x38); rotate_matrix_y((void*)0, *(void**)((char*)p + 0x60)); ((int (*)(void*))TObjFish__sub_800543A4)(p); pop_matrix(); end_effect_render__13TParticleCtrlFv(); }

extern const f32 lbl_805D8B24;

void snapshot_position__10TObjPlayerFPv(u8 *arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
    M2C_FIELD(arg0, f32 *, 0x300) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) + lbl_805D8B24);
}

void render_and_update_effects__10TObjPlayerFPv(void* p) { ((int (*)(void*))TObjPlayer__sub_80053E40)(p); render_effects__10TObjPlayerFPv((void*)(p)); TObjPlayer__sub_800531C8(p); }

#pragma push
#pragma opt_common_subs off
void fn_80054738(Obj_80054738 *self) {
    Act_800542B0 act;
    if (is_field378_zero__14TBoss4DarkFalzFPv(self->x38c) != 0) {
        act = lbl_80485C48[self->x374].a;
        if (act) {
            (((Boss_800542B0 *)self)->*act)();
        }
    }
    act = lbl_80485C48[self->x374].b;
    if (act) {
        (((Boss_800542B0 *)self)->*act)();
    }
    ((M2C_UNK (*)(void *))fn_8005455C)(self);
    ((M2C_UNK (*)(void *))snapshot_position__10TObjPlayerFPv)(self);
    ((M2C_UNK (*)(void *))fn_80053D4C)(self);
    update_collisions__10TObjPlayerFPv(self);
    submit_cursor_candidate(self, -1);
    TRaderMapCore__sub_80053670(self);
    fn_80053440(self);
    {
        f32 x = self->x3dc;
        self->x3dc = x + lbl_805D8B80;
        if (self->x3dc < lbl_805D8B20) {
            self->x3dc = lbl_805D8B20;
        }
    }
    self->x3e0 = (f32)self->x32c / (f32)self->x33e;
}
#pragma pop
}
