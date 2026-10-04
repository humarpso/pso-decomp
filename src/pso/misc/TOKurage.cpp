#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8016E800_lbl_804B2E6C { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_8016E800_lbl_804B2E6C_size[sizeof(RecoveredGlobal_8016E800_lbl_804B2E6C) == 0x10 ? 1 : -1];

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct VBase_18_26a62c { char pad[0x18]; };
struct VObj_18_26a62c : VBase_18_26a62c {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};

struct Vec_8016DB24 { f32 x, y, z; };

struct TOKurage_8016DB24 {
    u8 pad0[0x38];
    Vec_8016DB24 pos;
    Vec_8016DB24 prev;
    u8 pad50[0x10];
    s32 angle;
    u8 pad64[8];
    f32 radius;
    u8 pad70[0x4C];
    void *anim;
    u8 padC0[0x10];
    f32 baseY;
    u8 padD4[4];
    Vec_8016DB24 vel;
    Vec_8016DB24 home;
    f32 bobPos;
    f32 bobSpeed;
    f32 lift;
    s16 timer;
    s16 phase;
    u8 state;
    u8 rising;
    u8 turnDir;
};

extern "C" {
void rotate_matrix_zyx(s32, s32, s32, s32);
void push_matrix(void);
void pop_matrix(void);
void post_translate_matrix(void *);
void set_global_param__8TObjFishFi(s32);
s32 set_chunk_material_color(void *);
void TObjEneSlimeOne__sub_803E4B54(s32, s32, s32, f32);
extern u8 lbl_804A7418[];
extern s32 lbl_805D5660;
extern s32 some_id_805c6f74;
extern const f32 lbl_805DB7A8;
extern const f32 lbl_805DB7C8;
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK update_anim_phase__17TOBarrierEnergy01FPv(void *);
M2C_UNK fn_8016D8F8(void *);
void check_player_distance__8TOKurageFPv(u8 *arg0);
void update_state__8TOKurageFPv(void *arg0);
void TOKurage__sub_8016DA34(void *self);
s32 rand(void);
f32 sin_table_lookup(s32);
M2C_UNK vec3_add_to(void *, void *);
M2C_UNK rotate_vector_by_matrix(int, void *, void *);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK subtract_vector(void *, void *);
M2C_UNK normalize_vector(void *);
M2C_UNK push_matrix_from(void *);
M2C_UNK pop_matrices(int);
f32 xyz_distance(void *, void *);
extern u8 lbl_8058D490[];
void run_task__8TOKurageFv(TOKurage_8016DB24 *o);
}

struct RecoveredGlobal_8016E8A8___vt__8TOKurage { M2C_UNK value; u8 remaining[0x38]; };

extern "C" {
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_8016E800_lbl_804B2E6C lbl_804B2E6C;
extern u32 TOKurage__data_805D5A38;
void TOKurage__sub_8016E800(void);
u8 *get_bml_motion(s32, s32);
s32 TObjFish__sub_8001EDB0(int, int);
s32 get_bml_model(int, int);
s32 init_map_object_base(void *);
void init__8TOKurageFPv(u8 *arg0);
extern M2C_UNK __vt__8TOKurage[];
extern s32 lbl_805D3060;
extern u32 TOKurage__data_805D5A38;
extern const f32 TOKurage__data_805DB7AC;
extern const f32 lbl_805DB7D8;
extern const f32 lbl_805DB820;
extern const f32 lbl_805DB824;
u8 *TOKurage__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
s32 fn_800FD8B4(void *);
void debug_printf_at(s32 id, const char *fmt, ...);
extern const char lbl_80441EA0[];
extern const char lbl_80441EB0[];
extern const char lbl_80441EBC[];
void TOKurage__sub_8016DA34(void *self);
}

extern "C" {

void *__dt__8TOKurageFv(void *arg0, s16 arg1);
void check_player_distance__8TOKurageFPv(u8 *arg0);
void *create__8TOKurageFPv(void *arg0);
void destroy_static_instance__8TOKurageFv(void);
void init__8TOKurageFPv(u8 *arg0);
void update_state__8TOKurageFPv(void *arg0);
void TLobby__sub_8001FE7C(void*, int);
s32 is_any_player_within_radius_xz(f32);
f32 xyz_distance(void *, void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_key_base__5TOKeyFPvs(void *, int);

void check_player_distance__8TOKurageFPv(u8 *arg0) {
    if ((xyz_distance(arg0 + 0xE4, arg0 + 0x38) > M2C_FIELD(arg0, f32 *, 0x6C)) && ((u8) M2C_FIELD(arg0, u8 *, 0x100) != 4)) {
        M2C_FIELD(arg0, u8 *, 0x100) = 3U;
    }
}

void update_state__8TOKurageFPv(void *arg0) {
    f32 temp_f0;

    temp_f0 = M2C_FIELD(arg0, f32 *, 0x68);
    if (is_any_player_within_radius_xz(temp_f0 * temp_f0) == 1) {
        M2C_FIELD(arg0, s8 *, 0x100) = 4;
    }
}

extern const f32 lbl_805DB7A8;
extern const f32 TOKurage__data_805DB7AC;

void TOKurage__sub_8016DA34(void *self) {
    if (fn_800FD8B4(self) == 1) {
        debug_printf_at(0x13001C, lbl_80441EA0);
        debug_printf_at(0x13001D, lbl_80441EB0);
        debug_printf_at(0x13001E, lbl_80441EBC);
    }
}

void init__8TOKurageFPv(u8 *arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0xCC, arg0 + 0x38);
    VecCopy__FP3VecPC3Vec(arg0 + 0xE4, arg0 + 0x38);
    M2C_FIELD(arg0, f32 *, 0xD8) = (f32) lbl_805DB7A8;
    M2C_FIELD(arg0, f32 *, 0xDC) = (f32) lbl_805DB7A8;
    M2C_FIELD(arg0, f32 *, 0xE0) = (f32) lbl_805DB7A8;
    M2C_FIELD(arg0, f32 *, 0xF8) = (f32) lbl_805DB7A8;
    M2C_FIELD(arg0, s8 *, 0x100) = 0;
    M2C_FIELD(arg0, s8 *, 0x101) = 0;
    M2C_FIELD(arg0, s16 *, 0xFC) = 0x1E;
    M2C_FIELD(arg0, s16 *, 0xFE) = 0;
    M2C_FIELD(arg0, f32 *, 0x104) = (f32) TOKurage__data_805DB7AC;
    M2C_FIELD(arg0, f32 *, 0x108) = (f32) TOKurage__data_805DB7AC;
    M2C_FIELD(arg0, f32 *, 0x10C) = (f32) TOKurage__data_805DB7AC;
    M2C_FIELD(arg0, f32 *, 0x110) = (f32) TOKurage__data_805DB7AC;
}

#pragma push
#pragma fp_contract on
void run_task__8TOKurageFv(TOKurage_8016DB24 *o) {
    f32 y;
    VecCopy__FP3VecPC3Vec(&o->prev, &o->pos);
    if (check_demo_mode__10TObjPlayerFv() == 1) {
        TOKurage__sub_8016DA34(o);
        return;
    }
    if (o->anim != 0) {
        update_anim_phase__17TOBarrierEnergy01FPv(o);
    }
    y = 3.2f * sin_table_lookup(o->phase) + o->baseY;
    if (o->rising == 0) {
        o->lift = 5.0f * (y - o->pos.y);
        if (o->lift < 0.1f) {
            o->lift = 0.1f;
        } else if (o->lift > 4.0f) {
            o->lift = 4.0f;
        }
        o->bobSpeed = 2.0f * (0.01f * o->lift) + 0.3f;
        o->vel.y = 0.1f * (0.027f * o->lift) + o->vel.y;
        o->vel.y = o->vel.y - 0.027f;
    } else {
        o->lift = -7.0f * (y - o->pos.y);
        if (o->lift < 0.1f) {
            o->lift = 0.1f;
        } else if (o->lift > 4.0f) {
            o->lift = 4.0f;
        }
        o->bobSpeed = 2.0f * (0.1f * o->lift) + 0.32f;
        o->vel.y = o->vel.y - 0.5f * (0.027f * o->lift);
        o->vel.y = o->vel.y - 0.027f;
        o->bobPos = o->bobPos + o->bobSpeed;
        if (o->bobPos > 5.0f) {
            o->bobPos = 0.0f;
            o->rising = 0;
        }
    }
    switch (o->state) {
    case 0:
        o->vel.x *= 0.8f;
        o->vel.z *= 0.8f;
        break;
    case 1:
        if (o->rising == 0) {
            Vec_8016DB24 dir;
            Vec_8016DB24 out;
            dir.x = 2.0f * (0.0015f * (2.0f * (3.0517578125e-05f * (f32)rand()) - 1.0f));
            dir.y = 0.0f;
            dir.z = 2.0f * (0.0015f * (3.0517578125e-05f * (f32)rand())) + 0.05f;
            push_matrix_from(lbl_8058D490);
            rotate_matrix_y(0, o->angle);
            rotate_vector_by_matrix(0, &dir, &out);
            pop_matrices(1);
            o->vel.x += out.x;
            o->vel.z += out.z;
            o->vel.x *= 0.72f;
            o->vel.z *= 0.72f;
        } else {
            o->vel.x *= 0.85f;
            o->vel.z *= 0.85f;
        }
        break;
    case 2:
        if (o->turnDir == 0) {
            o->angle = (f32)o->angle + (200.0f * (3.0517578125e-05f * (f32)rand()) + 200.0f);
        } else {
            o->angle = (f32)o->angle - (200.0f * (3.0517578125e-05f * (f32)rand()) + 200.0f);
        }
        if (o->rising == 0) {
            Vec_8016DB24 dir;
            Vec_8016DB24 out;
            dir.x = 2.0f * (0.025f * (2.0f * (3.0517578125e-05f * (f32)rand()) - 1.0f));
            dir.y = 0.0f;
            dir.z = 2.0f * (0.025f * (3.0517578125e-05f * (f32)rand())) + 0.05f;
            push_matrix_from(lbl_8058D490);
            rotate_matrix_y(0, o->angle);
            rotate_vector_by_matrix(0, &dir, &out);
            pop_matrices(1);
            o->vel.x += out.x;
            o->vel.z += out.z;
            o->vel.x *= 0.85f;
            o->vel.z *= 0.85f;
        } else {
            o->vel.x *= 0.75f;
            o->vel.z *= 0.75f;
        }
        break;
    case 3: {
        Vec_8016DB24 d;
        VecCopy__FP3VecPC3Vec(&d, &o->home);
        subtract_vector(&d, &o->pos);
        normalize_vector(&d);
        d.x /= 5.0f;
        d.y /= 5.0f;
        d.z /= 5.0f;
        VecCopy__FP3VecPC3Vec(&o->vel, &d);
        if (xyz_distance(&o->home, &o->pos) < o->radius / 5.0f) {
            o->state = 1;
        }
        break;
    }
    case 4: {
        Vec_8016DB24 d;
        VecCopy__FP3VecPC3Vec(&d, &o->pos);
        subtract_vector(&d, &o->home);
        normalize_vector(&d);
        d.x /= 5.0f;
        d.y /= 5.0f;
        d.z /= 5.0f;
        VecCopy__FP3VecPC3Vec(&o->vel, &d);
        break;
    }
    }
    vec3_add_to(&o->pos, &o->vel);
    if (o->pos.y > 12.0f + y) {
        o->pos.y = 12.0f + y;
    } else if (o->pos.y < y - 6.0f) {
        o->pos.y = y - 6.0f;
    }
    if (o->timer != 0) {
        o->timer--;
    } else {
        switch (o->state) {
        case 0:
            o->state = 1;
            o->timer = 2.0f * (20.0f * (3.0517578125e-05f * (f32)rand())) + 20.0f;
            break;
        case 1:
            if (3.0517578125e-05f * (f32)rand() < 0.5f) {
                o->state = 2;
                o->timer = 50.0f * (3.0517578125e-05f * (f32)rand()) + 50.0f;
                if (3.0517578125e-05f * (f32)rand() < 0.5f) {
                    o->turnDir = 0;
                } else {
                    o->turnDir = 1;
                }
            } else {
                o->state = 0;
                o->timer = 30.0f * (3.0517578125e-05f * (f32)rand()) + 30.0f;
            }
            break;
        case 2:
            if (3.0517578125e-05f * (f32)rand() < 0.4f) {
                o->state = 2;
                o->timer = 50.0f * (3.0517578125e-05f * (f32)rand()) + 50.0f;
                if (3.0517578125e-05f * (f32)rand() < 0.5f) {
                    o->turnDir = 0;
                } else {
                    o->turnDir = 1;
                }
            } else {
                o->state = 1;
                o->timer = 2.0f * (30.0f * (3.0517578125e-05f * (f32)rand())) + 30.0f;
            }
            break;
        case 3:
            if (o->turnDir == 0) {
                o->angle = (f32)o->angle + (200.0f * (3.0517578125e-05f * (f32)rand()) + 200.0f);
            } else {
                o->angle = (f32)o->angle - (200.0f * (3.0517578125e-05f * (f32)rand()) + 200.0f);
            }
            if (o->rising == 0) {
                push_matrix_from(lbl_8058D490);
                rotate_matrix_y(0, o->angle);
                pop_matrices(1);
            }
            if (xyz_distance(&o->home, &o->pos) < o->radius / 5.0f) {
                o->state = 1;
            }
            break;
        case 4: {
            Vec_8016DB24 d;
            VecCopy__FP3VecPC3Vec(&d, &o->pos);
            subtract_vector(&d, &o->home);
            normalize_vector(&d);
            d.x /= 5.0f;
            d.y /= 5.0f;
            d.z /= 5.0f;
            VecCopy__FP3VecPC3Vec(&o->vel, &d);
            break;
        }
        }
    }
    check_player_distance__8TOKurageFPv((u8 *)o);
    update_state__8TOKurageFPv(o);
    fn_8016D8F8(o);
    o->phase += (s32)(40.0f * (3.0517578125e-05f * (f32)rand()) + 160.0f);
}
#pragma pop

void render__8TOKurageFv(u8 *arg0) {
    if (((VObj_18_26a62c *)(arg0))->m8(*(f32 *)(arg0 + 0xC0), *(f32 *)(arg0 + 0xC4)) != 0) {
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_zyx(0, *(s32 *)(arg0 + 0x5C), *(s32 *)(arg0 + 0x60), *(s32 *)(arg0 + 0x64));
        set_global_param__8TObjFishFi(*(s32 *)(arg0 + 0x24));
        switch (*(u8 *)(arg0 + 0x100)) {
        case 4:
            lbl_805D5660 = some_id_805c6f74;
            some_id_805c6f74 |= 0x10;
            if (*(f32 *)(arg0 + 0x104) < lbl_805DB7A8) {
                *(u8 *)(arg0 + 0x100) = 3;
            } else {
                *(f32 *)(arg0 + 0x104) -= lbl_805DB7C8;
            }
            break;
        default:
            if (((s32 (*)(void *, f32))is_any_player_within_radius_xz)(arg0, *(f32 *)(arg0 + 0x70) * *(f32 *)(arg0 + 0x70)) == 0 &&
                *(f32 *)(arg0 + 0x104) < lbl_805DB7A8) {
                *(f32 *)(arg0 + 0x104) = TOKurage__data_805DB7AC;
            }
            lbl_805D5660 = some_id_805c6f74;
            some_id_805c6f74 |= 0x10;
            break;
        }
        set_chunk_material_color(arg0 + 0x104);
        TObjEneSlimeOne__sub_803E4B54(*(s32 *)(arg0 + 0x34), *(s32 *)(arg0 + 0xBC), *(s32 *)(arg0 + 0xC8), *(f32 *)(arg0 + 0xB0));
        set_chunk_material_color(lbl_804A7418);
        some_id_805c6f74 = lbl_805D5660;
        pop_matrix();
    }
}

extern void *tl_05;

void *create__8TOKurageFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x114);
    if (o != NULL) {
        o = TOKurage__ct((u8 *)(o), (M2C_UNK)(tl_05), (s32)(arg0));
    }
    return o;
}

extern u32 TOKurage__data_805D5A38;

void destroy_static_instance__8TOKurageFv(void) {
    if ((u32) TOKurage__data_805D5A38 != 0U) {
        TLobby__sub_8001FE7C((void*)TOKurage__data_805D5A38, 1);
        TOKurage__data_805D5A38 = 0U;
    }
}

extern M2C_UNK __vt__8TOKurage[];

void TOKurage__sub_8016E800(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 1, &lbl_804B2E6C.value, 0, 0, 0));
    }
    (*(s32 *)&TOKurage__data_805D5A38) = var_r0;
}

void *__dt__8TOKurageFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__8TOKurage;
        destroy_key_base__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
u8 *TOKurage__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    init_map_object_base((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8016E8A8___vt__8TOKurage *)&__vt__8TOKurage).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3060;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    M2C_FIELD(arg0, s32 *, 0x34) = get_bml_model((int) ((*(s32 *)&TOKurage__data_805D5A38)), (int) (0));
    M2C_FIELD(arg0, s32 *, 0x24) = TObjFish__sub_8001EDB0((int) ((*(s32 *)&TOKurage__data_805D5A38)), (int) (0));
    M2C_FIELD(arg0, u8 **, 0xBC) = get_bml_motion((*(s32 *)&TOKurage__data_805D5A38), 0);
    M2C_FIELD(arg0, u8 **, 0xC8) = get_bml_motion((*(s32 *)&TOKurage__data_805D5A38), 1);
    M2C_FIELD(arg0, f32 *, 0xB8) = (f32) lbl_805DB7D8;
    M2C_FIELD(arg0, f32 *, 0xB4) = (f32) ((f32) M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xBC), u32 *, 4) - TOKurage__data_805DB7AC);
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) lbl_805DB820;
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) lbl_805DB824;
    init__8TOKurageFPv((u8 *)((void *) (arg0)));
    return arg0;
}

}
