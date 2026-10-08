#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8015A108_lbl_804AFDF8 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_8015A108_lbl_804AFDF8_size[sizeof(RecoveredGlobal_8015A108_lbl_804AFDF8) == 0x10 ? 1 : -1];

struct TOCakeshopCave01_80159E24 {
    u8 pad0[0xCC];
    f32 val[8];
    u8 state[8];
};

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct TOCakeshopCave01_8015A1C0 {
    u8 pad0[0xCC];
    f32 val[8];
    u8 state[8];
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

struct Model_80159F78 {
    u8 pad0[4];
    s32 m4;
    u8 m8[0x24];
    Model_80159F78 *child;
    Model_80159F78 *next;
};

struct Obj_80159F78 { u8 pad0[0xCC]; f32 val[8]; };

extern "C" {
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_8015A108_lbl_804AFDF8 lbl_804AFDF8;
extern u32 TOCakeshopCave01__data_805D58B0;
void TOCakeshopCave01__sub_8015A108(void);
s32 rand(void);
extern const f32 lbl_805DB358;
extern const f32 lbl_805DB35C;
extern const f32 TOCakeshopCave01__data_805DB360;
extern const f32 lbl_805DB364;
void update_blink_state__16TOCakeshopCave01FPvPv(void *arg0, void *arg1);
M2C_UNK reset_photon_effect__10TObjPlayerFPv(void *);
M2C_UNK refresh_collision_body_centers(void *);
s32 init_collision_body_parts(void *, void *, int);
M2C_UNK init_map_object_base(void *, s32);
extern M2C_UNK lbl_804AFE08[];
extern M2C_UNK __vt__16TOCakeshopCave01[];
extern s32 lbl_805D2EC4;
extern u32 TOCakeshopCave01__data_805D58B0;
extern s32 tl_05;
extern const f32 TOCakeshopCave01__data_805DB360;
extern const f32 lbl_805DB36C;
extern const f32 lbl_805DB370;
void *TOCakeshopCave01__ct(void *arg0_, void *arg1);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK scale_matrix(int, f32, f32, f32);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK draw_ginja_model(int);
extern const f32 TOCakeshopCave01__data_805DB360;
extern const f32 lbl_805DB368;
void render__16TOCakeshopCave01Fv(u8 *arg0);
}

extern "C" {

void *__dt__16TOCakeshopCave01Fv(void *arg0, s16 arg1);
void close_dialog_window__16TOCakeshopCave01Fv(void);
void *create__16TOCakeshopCave01FPv(void *arg0);
void run_task__16TOCakeshopCave01Fv(void* p);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK free_collision_body_parts(void *);
M2C_UNK unregister_object_by_id(void *);
M2C_UNK __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
M2C_UNK destroy_key_base__5TOKeyFPvs(void *, M2C_UNK);

void update_blink_state__16TOCakeshopCave01FPvPv(void *arg0, void *arg1) {
    TOCakeshopCave01_80159E24 *o = (TOCakeshopCave01_80159E24 *)arg0;
    s32 i = (s32)arg1;
    switch (o->state[i]) {
    default:
        o->val[i] += lbl_805DB358;
        if (lbl_805DB35C * (f32)rand() < o->val[i]) {
            o->state[i] = 1;
            o->val[i] = TOCakeshopCave01__data_805DB360;
        }
        break;
    case 1:
        o->val[i] -= lbl_805DB358;
        if (o->val[i] <= lbl_805DB364) {
            o->state[i] = 2;
            o->val[i] = lbl_805DB364;
        }
        break;
    case 2:
        o->val[i] += lbl_805DB358;
        if (TOCakeshopCave01__data_805DB360 < o->val[i]) {
            o->state[i] = 0;
        }
        break;
    }
}

void run_task__16TOCakeshopCave01Fv(void* p) { { int i; for (i = 0; i < 8; i++) { update_blink_state__16TOCakeshopCave01FPvPv((void *)(p), (void *)((void*)i)); } } }

void render__16TOCakeshopCave01Fv(u8 *arg0) {
    Model_80159F78 *m;
    s32 i;
    if (((VObj_18_26a62c *)(arg0))->m8(M2C_FIELD(arg0, f32 *, 0xC0), M2C_FIELD(arg0, f32 *, 0xC4)) != 0) {
        push_matrix();
        post_translate_matrix((void *) ((u8 *)(arg0) + 0x38));
        rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
        m = M2C_FIELD(arg0, Model_80159F78 **, 0x34);
        post_translate_matrix(m->m8);
        draw_ginja_model(m->m4);
        m = m->child;
        begin_effect_render__13TParticleCtrlFv();
        for (i = 0; i < 8; i++) {
            if (((Obj_80159F78 *)arg0)->val[i] < TOCakeshopCave01__data_805DB360) {
                push_matrix();
                post_translate_matrix(m->m8);
                scale_matrix(0, lbl_805DB368 - ((Obj_80159F78 *)arg0)->val[i], lbl_805DB368 - ((Obj_80159F78 *)arg0)->val[i], TOCakeshopCave01__data_805DB360);
                draw_ginja_model(m->m4);
                pop_matrix();
            }
            m = m->next;
        }
        end_effect_render__13TParticleCtrlFv();
        pop_matrix();
    }
}

void *create__16TOCakeshopCave01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xF4);
    if (o != NULL) {
        o = TOCakeshopCave01__ct((void *)(o), (void *)(arg0));
    }
    return o;
}

extern u32 TOCakeshopCave01__data_805D58B0;

void close_dialog_window__16TOCakeshopCave01Fv(void) {
    if ((u32) TOCakeshopCave01__data_805D58B0 != 0U) {
        TLobby__sub_8001FE7C((void*)TOCakeshopCave01__data_805D58B0, 1);
        TOCakeshopCave01__data_805D58B0 = 0U;
    }
}

extern M2C_UNK __vt__16TOCakeshopCave01[];

void TOCakeshopCave01__sub_8015A108(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 1, &lbl_804AFDF8.value, 0, 0, 0));
    }
    (*(s32 *)&TOCakeshopCave01__data_805D58B0) = var_r0;
}

void *__dt__16TOCakeshopCave01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TOCakeshopCave01;
        free_collision_body_parts(arg0);
        unregister_object_by_id(arg0);
        destroy_key_base__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
void *TOCakeshopCave01__ct(void *arg0_, void *arg1) {
    u8 *arg0 = (u8 *)arg0_;
    s32 i;
    init_map_object_base(arg0, tl_05);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TOCakeshopCave01;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2EC4;
    ((VObj_18_1a504b *)(arg0))->m5((s32)arg1);
    M2C_FIELD(arg0, s32 *, 0x34) = M2C_FIELD(M2C_FIELD(TOCakeshopCave01__data_805D58B0, u8 **, 0x42C), s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x24) = M2C_FIELD(M2C_FIELD(TOCakeshopCave01__data_805D58B0, u8 **, 0x42C), s32 *, 0xC);
    M2C_FIELD(arg0, f32 *, 0xC0) = lbl_805DB36C;
    M2C_FIELD(arg0, f32 *, 0xC4) = lbl_805DB370;
    M2C_FIELD(arg0, s32 *, 0x30) |= 0x40000000;
    init_collision_body_parts(arg0, lbl_804AFE08, 1);
    refresh_collision_body_centers(arg0);
    reset_photon_effect__10TObjPlayerFPv(arg0);
    for (i = 0; i < 8; i++) {
        ((TOCakeshopCave01_8015A1C0 *)arg0)->val[i] = TOCakeshopCave01__data_805DB360;
        ((TOCakeshopCave01_8015A1C0 *)arg0)->state[i] = 0;
    }
    return arg0;
}

}
