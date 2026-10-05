#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct ButterflyLobbyBase_80350958 { char pad[0x18]; };
struct ButterflyLobbyVObj_80350958 : ButterflyLobbyBase_80350958 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

struct Obj_80350AE4 { u8 pad[0x90]; s32 state; f32 val; };

struct Vec_80350BC4 { f32 x, y, z; };

struct Butterfly_80350BC4 {
    u8 pad00[0x38];
    Vec_80350BC4 pos;
    u8 pad44[0x60 - 0x44];
    s32 angY;
    u8 pad64[0x9C - 0x64];
    f32 baseY;
    u8 padA0[0xA4 - 0xA0];
    f32 vx, vy, vz;
    f32 anim;
    f32 animSpd;
    f32 tilt;
    s16 timer;
    s16 phase;
    u8 state;
    u8 rising;
    u8 dir;
};

extern "C" {
s32 is_connected__6TLobbyFv();
s32 is_lobby_obj_active__6TLobbyFv();
void TObjButterflyLobby__sub_80350AE4(Obj_80350AE4 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
u32 csnVector(void *, void *, int);
void TObjButterflyLobby__sub_80350AE4(Obj_80350AE4 *arg0);
s32 rand();
f32 sin_table_lookup(int);
void rotate_vector_by_matrix(int, void *, void *);
M2C_UNK rotate_matrix_y(int, int);
void push_matrix_from(void *);
void pop_matrices(int);
extern u8 lbl_8058D490[];
void run_task__18TObjButterflyLobbyFv(Butterfly_80350BC4 *o);
}

extern "C" {

void init_params__18TObjButterflyLobbyFPv(u8 *arg0);
void render__18TObjButterflyLobbyFPv(u8 *arg0);
void render__18TObjButterflyLobbyFv(void *arg0);
M2C_UNK post_translate_matrix(void *);
M2C_UNK scale_matrix(int, f32, f32, f32);
M2C_UNK rotate_matrix_x(int, int);
M2C_UNK draw_ginja_model_with_motion(int, void *, f32);
s32 get_bml_motion(void *, int);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 rand();
M2C_UNK set_global_param__8TObjFishFi(s32);

extern s32 lbl_805D6EB8;

void render__18TObjButterflyLobbyFPv(u8 *arg0) {
    f32 temp_f1;

    push_matrix();
    post_translate_matrix((void *) (arg0 + 0x38));
    rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    rotate_matrix_x((int) (0), (int) (-0x2000));
    if ((s32) M2C_FIELD(arg0, s32 *, 0x90) != 3) {
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x94);
        scale_matrix((int) (0), (f32) (temp_f1), (f32) (temp_f1), (f32) (temp_f1));
    }
    draw_ginja_model_with_motion((int) (M2C_FIELD(arg0, s32 *, 0xC4)), (void *) (get_bml_motion((void *) (lbl_805D6EB8), (int) (0))), (f32) (M2C_FIELD(arg0, f32 *, 0xB0)));
    pop_matrix();
}

void init_params__18TObjButterflyLobbyFPv(u8 *arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x98, arg0 + 0x38);
    M2C_FIELD(arg0, f32 *, 0xA4) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0xA8) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0xAC) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0xB0) = (f32) (0.5f * (3.0517578125e-05f * (f32) rand()));
    M2C_FIELD(arg0, f32 *, 0xB8) = 0.0f;
    M2C_FIELD(arg0, s8 *, 0xC0) = 0;
    M2C_FIELD(arg0, s8 *, 0xC1) = 0;
    M2C_FIELD(arg0, s16 *, 0xBC) = 0x1E;
    M2C_FIELD(arg0, s16 *, 0xBE) = 0;
}

void render__18TObjButterflyLobbyFv(void *arg0) {
    if ((((ButterflyLobbyVObj_80350958*)arg0)->m8(400.0f, 20.0f) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x90) != 0)) {
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0xC8));
        render__18TObjButterflyLobbyFPv((u8 *)(arg0));
    }
}
void TObjButterflyLobby__sub_80350AE4(Obj_80350AE4 *arg0) {
    switch (arg0->state) {
    case 0:
        if (is_connected__6TLobbyFv() != 0) {
            arg0->state = 2;
        }
        break;
    case 2:
        arg0->val += 0.1f;
        if (arg0->val >= 1.0f) {
            arg0->val = 1.0f;
            arg0->state = 3;
        }
        break;
    case 1:
        arg0->val -= 0.1f;
        if (arg0->val <= 0.0f) {
            arg0->val = 0.0f;
            arg0->state = 0;
        }
        break;
    case 3:
    default:
        if (is_lobby_obj_active__6TLobbyFv() != 0) {
            arg0->state = 1;
        }
        break;
    }
}
#pragma push
#pragma fp_contract on
typedef s32 M2C_UNK;
struct Obj_80350AE4;
#define FRND() (3.0517578125e-05f * (f32)rand())
void run_task__18TObjButterflyLobbyFv(Butterfly_80350BC4 *o) {
    f32 base;
    TObjButterflyLobby__sub_80350AE4((Obj_80350AE4 *)o);
    base = 3.2f * sin_table_lookup(o->phase) + o->baseY;
    if (o->rising == 0) {
        o->tilt = 5.0f * (base - o->pos.y);
        if (o->tilt < -4.0f) {
            o->tilt = -4.0f;
        } else if (o->tilt > 4.0f) {
            o->tilt = 4.0f;
        }
        o->animSpd = 2.0f * (0.01f * o->tilt) + 0.3f;
        o->vy += 0.1f * (0.027f * o->tilt);
        o->anim += o->animSpd;
        if (o->anim > 5.0f) {
            o->anim = 0.0f;
        }
    } else {
        o->tilt = -7.0f * (base - o->pos.y);
        if (o->tilt < 0.1f) {
            o->tilt = 0.1f;
        } else if (o->tilt > 4.0f) {
            o->tilt = 4.0f;
        }
        o->animSpd = 2.0f * (0.1f * o->tilt) + 0.32f;
        o->vy -= 0.5f * (0.027f * o->tilt);
        o->vy -= 0.027f;
        o->anim += o->animSpd;
        if (o->anim > 5.0f) {
            o->anim = 0.0f;
            o->rising = 0;
        }
    }
    switch (o->state) {
    case 0:
        o->vx *= 0.8f;
        o->vz *= 0.8f;
        break;
    case 1:
        if (o->rising == 0) {
            Vec_80350BC4 in;
            Vec_80350BC4 out;
            in.x = 2.0f * (0.0015f * (2.0f * FRND() - 1.0f));
            in.y = 0.0f;
            in.z = 2.0f * (0.0015f * FRND()) + 0.05f;
            push_matrix_from(lbl_8058D490);
            rotate_matrix_y(0, o->angY);
            rotate_vector_by_matrix(0, &in, &out);
            pop_matrices(1);
            o->vx += out.x;
            o->vz += out.z;
            o->vx *= 0.72f;
            o->vz *= 0.72f;
        } else {
            o->vx *= 0.85f;
            o->vz *= 0.85f;
        }
        break;
    case 2:
        if (o->dir == 0) {
            o->angY += 200.0f * FRND() + 200.0f;
        } else {
            o->angY -= 200.0f * FRND() + 200.0f;
        }
        if (o->rising == 0) {
            Vec_80350BC4 in;
            Vec_80350BC4 out;
            in.x = 2.0f * (0.025f * (2.0f * FRND() - 1.0f));
            in.y = 0.0f;
            in.z = 2.0f * (0.025f * FRND()) + 0.05f;
            push_matrix_from(lbl_8058D490);
            rotate_matrix_y(0, o->angY);
            rotate_vector_by_matrix(0, &in, &out);
            pop_matrices(1);
            o->vx += out.x;
            o->vz += out.z;
            o->vx *= 0.85f;
            o->vz *= 0.85f;
        } else {
            o->vx *= 0.75f;
            o->vz *= 0.75f;
        }
        break;
    }
    {
    Vec_80350BC4 p;
    VecCopy__FP3VecPC3Vec(&p, &o->pos);
    p.y += o->vy;
    if (csnVector(&o->pos, &p, -1) == 0) {
        VecCopy__FP3VecPC3Vec(&o->pos, &p);
    } else {
        o->baseY = o->pos.y;
        if (o->vy < 0.0f) {
            o->baseY += 10.0f;
        } else {
            o->baseY -= 10.0f;
        }
    }
    p.x += o->vx;
    if (csnVector(&o->pos, &p, -1) == 0) {
        VecCopy__FP3VecPC3Vec(&o->pos, &p);
    }
    p.z += o->vz;
    if (csnVector(&o->pos, &p, -1) == 0) {
        VecCopy__FP3VecPC3Vec(&o->pos, &p);
    }
    }
    if (o->pos.y > 12.0f + base) {
        o->pos.y = 12.0f + base;
    } else if (o->pos.y < base - 6.0f) {
        o->pos.y = base - 6.0f;
    }
    if (o->timer != 0) {
        o->timer--;
    } else {
        switch (o->state) {
        case 0:
            o->state = 1;
            o->timer = 2.0f * (20.0f * FRND()) + 20.0f;
            break;
        case 1:
            if (FRND() < 0.5f) {
                o->state = 2;
                o->timer = 50.0f * FRND() + 50.0f;
                if (FRND() < 0.5f) {
                    o->dir = 0;
                } else {
                    o->dir = 1;
                }
            } else {
                o->state = 0;
                o->timer = 30.0f * FRND() + 30.0f;
            }
            break;
        case 2:
            if (FRND() < 0.4f) {
                o->state = 2;
                o->timer = 50.0f * FRND() + 50.0f;
                if (FRND() < 0.5f) {
                    o->dir = 0;
                } else {
                    o->dir = 1;
                }
            } else {
                o->state = 1;
                o->timer = 2.0f * (30.0f * FRND()) + 30.0f;
            }
            break;
        }
    }
    o->phase += (s32)(40.0f * FRND() + 160.0f);
}
#pragma pop

}

extern "C" {
s32 TObjFish__sub_8001EDB0(void *, int);
s32 get_bml_model(void *, int);
M2C_UNK copy_xyz__10TObjPlayerFPvPv(void *, void *);
M2C_UNK TPhotonMagicSquare__sub_801A2640();
s32 is_lobby_event_active();
extern M2C_UNK __vt__18TObjButterflyLobby[];
extern s32 lbl_805D4360;
u8 *TObjButterflyLobby__ct(u8 *arg0, int arg1, u8 *arg2);
}

extern "C" {

void *TObjButterflyLobby__create(void *arg0);
void *__dt__18TObjButterflyLobbyFv(void *arg0, s16 arg1);
void destroy_instance__18TObjButterflyLobbyFv(void);
void TLobby__sub_8001FE7C(void*, int);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_particle__13TParticleCtrlFPvs(void *, int);

extern M2C_UNK __vt__18TObjButterflyLobby[];

void *__dt__18TObjButterflyLobbyFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TObjButterflyLobby;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_05;

u8 *TObjButterflyLobby__ct(u8 *arg0, int arg1, u8 *arg2) {
    TPhotonMagicSquare__sub_801A2640();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TObjButterflyLobby;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D4360;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (arg2 + 0xC));
    copy_xyz__10TObjPlayerFPvPv((void *) (arg0 + 0x5C), (void *) (arg2 + 0x18));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x68), (void *) (arg2 + 0x24));
    if (is_lobby_event_active() != 0) {
        M2C_FIELD(arg0, s32 *, 0x90) = 0;
    } else {
        M2C_FIELD(arg0, s32 *, 0x90) = 3;
    }
    M2C_FIELD(arg0, f32 *, 0x94) = 1.0f;
    if ((s32) M2C_FIELD(arg2, s32 *, 0x30) < 1) {
        M2C_FIELD(arg0, s32 *, 0xC4) = get_bml_model((void *) (lbl_805D6EB8), (int) (0));
        M2C_FIELD(arg0, s32 *, 0xC8) = TObjFish__sub_8001EDB0((void *) (lbl_805D6EB8), (int) (0));
    } else {
        M2C_FIELD(arg0, s32 *, 0xC4) = get_bml_model((void *) (lbl_805D6EB8), (int) (1));
        M2C_FIELD(arg0, s32 *, 0xC8) = TObjFish__sub_8001EDB0((void *) (lbl_805D6EB8), (int) (1));
    }
    init_params__18TObjButterflyLobbyFPv((u8 *) (arg0));
    return arg0;
}

void *TObjButterflyLobby__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xCC);
    if (o != NULL) {
        o = TObjButterflyLobby__ct((u8 *)(o), (int)(tl_05), (u8 *)(arg0));
    }
    return o;
}

void destroy_instance__18TObjButterflyLobbyFv(void) {
    if ((u32) lbl_805D6EB8 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D6EB8, 1);
        lbl_805D6EB8 = 0U;
    }
}

}
