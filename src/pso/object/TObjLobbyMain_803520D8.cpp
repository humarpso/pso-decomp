#include "types.h"
#pragma readonly_strings on
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Vec3_80352240 {
    f32 x;
    f32 y;
    f32 z;
};

extern "C" {
extern const s32 lbl_80479078[18] = {5, 5, 5, 5, 5, 5, 5, 0, 1, 2, 5, 5, 5, 5, 5, 3, 4, 4};
const char *lbl_805D4370 = "TObjLobbyMain";
}

struct Base_8035240C { u8 pad[0x18]; };

struct Obj_8035240C : Base_8035240C {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual s32 v8(f32, f32);
};

struct Obj_8035255C { u8 pad0[0xB0]; f32 f_b0; u8 padB4[0x1C]; s16 idx; };

struct Fish_8035255C { s32 a; u32 cnt; };

extern "C" {
void TObjLobbyMain__sub_80352624(u8 *arg0);
void TObjLobbyMain__sub_803525F0(u8 *arg0);
s32 fn_80352094();
void TObjLobbyMain__sub_803520DC(u8 *arg0);
void TObjLobbyMain__sub_803521A4(u8 *arg0);
void set_param_ptr__11TBoss4Type2FPvi(void *, int);
void copy_pos__11TNowLoadingFPvPv(void *, void *);
void matrix_mult_vec(int, Vec3_80352240 *, Vec3_80352240 *);
void TObjPlayer__sub_803D8CD4(int);
void rotate_matrix_y(int, s32);
void push_matrix();
void pop_matrix();
void post_translate_matrix(void *);
void TObjLobbyMain__sub_80352240(u8 *arg0);
s32 get_bml_motion(void *, s32);
s32 get_bml_model(void *, s32);
M2C_UNK scale_matrix(int, f32, f32, f32);
void rotate_matrix_y(int, s32);
void push_matrix();
void pop_matrix();
void post_translate_matrix(void *);
M2C_UNK set_global_param__8TObjFishFi(void *);
M2C_UNK draw_ginja_object();
M2C_UNK draw_ginja_model_with_motion(s32, s32, f32);
extern void *TObjLobbyMain__data_805D6EC8;
extern void *lbl_805D6ECC;
void render__13TObjLobbyMainFv(u8 *arg0);
s32 get_bml_motion(void *, s32);
extern void *TObjLobbyMain__data_805D6EC8;
void TObjLobbyMain__sub_8035255C(Obj_8035255C *o);
}

extern "C" {

void TObjLobbyMain__sub_803520D8(void);
void reset_state__13TObjLobbyMainFPv(void *arg0);
void update_computer_machines__13TObjLobbyMainFv(void);
void update_particles__13TObjLobbyMainFPv(void *arg0);
M2C_UNK PPCSync();
M2C_UNK scroll_ginja_mesh_uvs(s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK clear_active_flag__13TParticleCtrlFPv(void *);
M2C_UNK enable__13TParticleCtrlFPv(void *);
s32 fn_80352094();

void TObjLobbyMain__sub_803520D8(void) {  }

void TObjLobbyMain__sub_803520DC(u8 *arg0) {
    u32 temp_r0;
    M2C_FIELD(arg0, u32 *, 0xCC) = ((u32)fn_80352094());
    temp_r0 = M2C_FIELD(arg0, u32 *, 0xCC);
    switch (temp_r0) {
    case 1:
        M2C_FIELD(arg0, s16 *, 0xD0) = 0xC;
        return;
    case 5:
        M2C_FIELD(arg0, s16 *, 0xD0) = 0xF;
        return;
    case 7:
        M2C_FIELD(arg0, s16 *, 0xD0) = 0xA;
        return;
    case 3:
        M2C_FIELD(arg0, s16 *, 0xD0) = 0x10;
        return;
    case 9:
        M2C_FIELD(arg0, s16 *, 0xD0) = 0x11;
        return;
    case 8:
        M2C_FIELD(arg0, s16 *, 0xD0) = 0xB;
        return;
    case 4:
        M2C_FIELD(arg0, s16 *, 0xD0) = 0xE;
        return;
    case 10:
        M2C_FIELD(arg0, s16 *, 0xD0) = 1;
        return;
    case 11:
        M2C_FIELD(arg0, s16 *, 0xD0) = 0xD;
        return;
    default:
        M2C_FIELD(arg0, s16 *, 0xD0) = (s16) M2C_FIELD(arg0, s16 *, 0xD2);
        return;
    }
}

void TObjLobbyMain__sub_803521A4(u8 *arg0) {
    u32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, u32 *, 0x84);
    switch (temp_r0) {
    case 1:
        M2C_FIELD(arg0, s16 *, 0xD2) = 1;
        return;
    case 2:
        M2C_FIELD(arg0, s16 *, 0xD2) = 2;
        return;
    case 3:
        M2C_FIELD(arg0, s16 *, 0xD2) = 3;
        return;
    case 4:
        M2C_FIELD(arg0, s16 *, 0xD2) = 4;
        return;
    case 5:
        M2C_FIELD(arg0, s16 *, 0xD2) = 5;
        return;
    case 6:
        M2C_FIELD(arg0, s16 *, 0xD2) = 6;
        return;
    case 7:
        M2C_FIELD(arg0, s16 *, 0xD2) = 7;
        return;
    case 8:
        M2C_FIELD(arg0, s16 *, 0xD2) = 8;
        return;
    case 9:
        M2C_FIELD(arg0, s16 *, 0xD2) = 9;
        return;
    default:
        M2C_FIELD(arg0, s16 *, 0xD2) = 0;
        return;
    }
}

void TObjLobbyMain__sub_80352240(u8 *arg0) {
    switch (*(s16 *)(arg0 + 0xD0)) {
    case 3:
    if (*(void **)(arg0 + 0xD8) != NULL) {
        Vec3_80352240 v = {0.0f, 0.0f, 18.0f};
        set_param_ptr__11TBoss4Type2FPvi(*(void **)(arg0 + 0xD8), 0x222);
        push_matrix();
        TObjPlayer__sub_803D8CD4(0);
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, *(s32 *)(arg0 + 0x60));
        matrix_mult_vec(0, &v, &v);
        copy_pos__11TNowLoadingFPvPv(*(void **)(arg0 + 0xD8), &v);
        pop_matrix();
    }
    if (*(void **)(arg0 + 0xDC) != NULL) {
        Vec3_80352240 v = {0.0f, 0.0f, -18.0f};
        set_param_ptr__11TBoss4Type2FPvi(*(void **)(arg0 + 0xDC), 0x222);
        push_matrix();
        TObjPlayer__sub_803D8CD4(0);
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, *(s32 *)(arg0 + 0x60));
        matrix_mult_vec(0, &v, &v);
        copy_pos__11TNowLoadingFPvPv(*(void **)(arg0 + 0xDC), &v);
        pop_matrix();
    }
        break;
    }
}

void update_particles__13TObjLobbyMainFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0xC8) == 2) {
        switch ((s16) M2C_FIELD(arg0, s16 *, 0xD0)) {
        case 3:
            if ((u32) M2C_FIELD(arg0, u32 *, 0xD8) != 0U) {
                clear_active_flag__13TParticleCtrlFPv(M2C_FIELD(arg0, void **, 0xD8));
            }
            if ((u32) M2C_FIELD(arg0, u32 *, 0xDC) != 0U) {
                clear_active_flag__13TParticleCtrlFPv(M2C_FIELD(arg0, void **, 0xDC));
            }
            break;
        default:
            if ((u32) M2C_FIELD(arg0, u32 *, 0xD8) != 0U) {
                enable__13TParticleCtrlFPv(M2C_FIELD(arg0, void **, 0xD8));
            }
            if ((u32) M2C_FIELD(arg0, u32 *, 0xDC) != 0U) {
                enable__13TParticleCtrlFPv(M2C_FIELD(arg0, void **, 0xDC));
            }
            break;
        }
    } else {
        if ((u32) M2C_FIELD(arg0, u32 *, 0xD8) != 0U) {
            enable__13TParticleCtrlFPv(M2C_FIELD(arg0, void **, 0xD8));
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0xDC) != 0U) {
            enable__13TParticleCtrlFPv(M2C_FIELD(arg0, void **, 0xDC));
        }
    }
}

extern s32 lbl_805D53A4;
extern s32 lbl_805D6ED0;
extern s32 lbl_805D6ED4;
extern s32 lbl_805D6ED8;

void render__13TObjLobbyMainFv(u8 *arg0) {
    s16 idx;
    s32 r;
    if (lbl_805D6ECC != NULL && ((Obj_8035240C *)arg0)->v8(M2C_FIELD(arg0, f32 *, 0xC0), M2C_FIELD(arg0, f32 *, 0xC4)) != 0) {
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
        if (M2C_FIELD(arg0, s32 *, 0xC8) != 2) {
            scale_matrix(0, M2C_FIELD(arg0, f32 *, 0xD4), (1.0f), M2C_FIELD(arg0, f32 *, 0xD4));
        }
        set_global_param__8TObjFishFi(lbl_805D6ECC);
        idx = M2C_FIELD(arg0, s16 *, 0xD0);
        r = lbl_80479078[idx];
        if (r != 5) {
            r = get_bml_motion(TObjLobbyMain__data_805D6EC8, r);
            draw_ginja_model_with_motion(get_bml_model(TObjLobbyMain__data_805D6EC8, M2C_FIELD(arg0, s16 *, 0xD0)), r, M2C_FIELD(arg0, f32 *, 0xB0));
        } else {
            get_bml_model(TObjLobbyMain__data_805D6EC8, idx);
            draw_ginja_object();
        }
        pop_matrix();
    }
}

void update_computer_machines__13TObjLobbyMainFv(void) {
    if ((s32) lbl_805D6ED8 != (s32) lbl_805D53A4) {
        lbl_805D6ED8 = lbl_805D53A4;
        scroll_ginja_mesh_uvs(lbl_805D6ED0, 1, 1, 0xA, 1);
        scroll_ginja_mesh_uvs(lbl_805D6ED4, 0, -0x14, 0x1A, 1);
        PPCSync();
    }
}

void TObjLobbyMain__sub_8035255C(Obj_8035255C *o) {
    f32 a, b;
    s32 v = lbl_80479078[o->idx];
    if (v != 5) {
        a = (f32)((Fish_8035255C *)get_bml_motion(TObjLobbyMain__data_805D6EC8, v))->cnt;
        b = a - 1.0f;
        o->f_b0 += 1.0f;
        if (b < o->f_b0) {
            o->f_b0 -= b;
        }
    }
}

void TObjLobbyMain__sub_803525F0(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0xD4) += 0.1f;
    if (M2C_FIELD(arg0, f32 *, 0xD4) >= (1.0f)) {
        M2C_FIELD(arg0, s32 *, 0xC8) = 2;
        M2C_FIELD(arg0, f32 *, 0xD4) = (f32) (1.0f);
    }
}

void TObjLobbyMain__sub_80352624(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0xD4) -= 0.1f;
    if (M2C_FIELD(arg0, f32 *, 0xD4) <= (0.0f)) {
        M2C_FIELD(arg0, s32 *, 0xC8) = 1;
        M2C_FIELD(arg0, f32 *, 0xD4) = (f32) (0.0f);
        TObjLobbyMain__sub_803520DC((u8 *)(arg0));
        TObjLobbyMain__sub_80352240((u8 *)((void *) (arg0)));
        M2C_FIELD(arg0, f32 *, 0xB0) = (f32) (0.0f);
    }
}

void reset_state__13TObjLobbyMainFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0xCC) != fn_80352094()) {
        M2C_FIELD(arg0, s32 *, 0xC8) = 0;
        M2C_FIELD(arg0, f32 *, 0xD4) = (f32) (1.0f);
    }
}

}

#define TObjLobbyMain__sub_803520DC ((M2C_UNK (*)(void *))TObjLobbyMain__sub_803520DC)
#define TObjLobbyMain__sub_803521A4 ((M2C_UNK (*)(void *))TObjLobbyMain__sub_803521A4)
#define TObjLobbyMain__sub_80352240 ((s32 (*)(void *))TObjLobbyMain__sub_80352240)
#define TObjLobbyMain__sub_803520D8 ((M2C_UNK (*)(void *))TObjLobbyMain__sub_803520D8)
#define TObjLobbyMain__sub_8035255C ((M2C_UNK (*)(void *))TObjLobbyMain__sub_8035255C)
#define TObjLobbyMain__sub_803525F0 ((M2C_UNK (*)(void *))TObjLobbyMain__sub_803525F0)
#define TObjLobbyMain__sub_80352624 ((M2C_UNK (*)(void *))TObjLobbyMain__sub_80352624)
#define reset_state__13TObjLobbyMainFPv ((M2C_UNK (*)(void *))reset_state__13TObjLobbyMainFPv)
#define update_computer_machines__13TObjLobbyMainFv ((M2C_UNK (*)(void *))update_computer_machines__13TObjLobbyMainFv)
#define update_particles__13TObjLobbyMainFPv ((M2C_UNK (*)(void *))update_particles__13TObjLobbyMainFPv)
#define enable__13TParticleCtrlFPv ((s32 (*)(int))enable__13TParticleCtrlFPv)
#define TObjLobbyMain__data_805D6EC8 (*(u32 *)&TObjLobbyMain__data_805D6EC8)
#define lbl_805D6ECC (*(s32 *)&lbl_805D6ECC)
struct RecoveredGlobal_803527F0_lbl_804F0F24 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_803527F0_lbl_804F0F24_size[sizeof(RecoveredGlobal_803527F0_lbl_804F0F24) == 0x10 ? 1 : -1];

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct RecoveredGlobal_80352940_lbl_804F0F34 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_80352940___vt__13TObjLobbyMain {
    M2C_UNK value;
    u8 remaining[0x34];
};

extern "C" {
s32 get_bml_model(void *, s32);
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
int get_lobby_type__6TLobbyFv(void);
extern RecoveredGlobal_803527F0_lbl_804F0F24 lbl_804F0F24;
extern s32 lbl_805D6ED0;
extern s32 lbl_805D6ED4;
extern s32 lbl_805D6ED8;
void TObjLobbyMain__sub_803527F0(void);
u32 create_particle_emitter(void *, int);
s32 set_flags__11TBoss4Type2FPvUi(int, int);
s32 reset_photon_effect__10TObjPlayerFPv(void *);
s32 refresh_collision_body_centers(void *);
s32 init_collision_body_parts(void *, void *, int);
s32 init_map_object_base(void *);
extern RecoveredGlobal_80352940_lbl_804F0F34 lbl_804F0F34;
extern M2C_UNK __vt__13TObjLobbyMain[];
u8 *TObjLobbyMain__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
}

extern "C" {

void *__dt__13TObjLobbyMainFv(void *arg0, s16 arg1);
void *create__13TObjLobbyMainFPv(void *arg0);
void release_static_instance__13TObjLobbyMainFv(void);
void run_task__13TObjLobbyMainFv(void *arg0);
void TLobby__sub_8001FE7C(void*, int);
void free_collision_body_parts(void *);
void unregister_object_by_id(void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
s32 check_demo_mode__10TObjPlayerFv();
void destroy_key_base__5TOKeyFPvs(void *, int);
void queue_destruction__7TObjectFv(void *);

void run_task__13TObjLobbyMainFv(void *arg0) {
    s32 temp_r0;

    if (check_demo_mode__10TObjPlayerFv() == 1) {
        TObjLobbyMain__sub_803520D8(arg0);
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xC8);
    switch (temp_r0) {
    case 0:
        TObjLobbyMain__sub_80352624(arg0);
        break;
    case 1:
        TObjLobbyMain__sub_803525F0(arg0);
        break;
    default:
    case 2:
        reset_state__13TObjLobbyMainFPv(arg0);
        break;
    }
    update_computer_machines__13TObjLobbyMainFv(arg0);
    TObjLobbyMain__sub_8035255C(arg0);
    update_particles__13TObjLobbyMainFPv(arg0);
}

extern void *tl_05;

void *create__13TObjLobbyMainFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xE0);
    if (o != NULL) {
        o = TObjLobbyMain__ct((u8 *)(o), (M2C_UNK)(tl_05), (s32)(arg0));
    }
    return o;
}

void release_static_instance__13TObjLobbyMainFv(void) {
    if ((u32) TObjLobbyMain__data_805D6EC8 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjLobbyMain__data_805D6EC8, 1);
        TObjLobbyMain__data_805D6EC8 = 0U;
    }
}

extern M2C_UNK __vt__13TObjLobbyMain[];

void TObjLobbyMain__sub_803527F0(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 5, &lbl_804F0F24.value, 0, 0, 0));
    }
    (*(u8 * *)&TObjLobbyMain__data_805D6EC8) = (unsigned char *) ((void *) var_r0);
    lbl_805D6ECC = get_lobby_type__6TLobbyFv();
    lbl_805D6ED0 = M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(get_bml_model((*(u8 * *)&TObjLobbyMain__data_805D6EC8), 6), void **, 0x2C), void **, 0x30), void **, 0x30), void **, 0x30), void **, 0x30), void **, 0x30), void **, 0x30), s32 *, 4);
    lbl_805D6ED4 = M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(get_bml_model((*(u8 * *)&TObjLobbyMain__data_805D6EC8), 2), void **, 0x2C), void **, 0x30), void **, 0x30), void **, 0x30), s32 *, 4);
    lbl_805D6ED8 = 0;
}

void *__dt__13TObjLobbyMainFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TObjLobbyMain;
        if (M2C_FIELD(arg0, void **, 0xD8) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xD8)); M2C_FIELD(arg0, M2C_UNK *, 0xD8) = 0; }
        if (M2C_FIELD(arg0, void **, 0xDC) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xDC)); M2C_FIELD(arg0, M2C_UNK *, 0xDC) = 0; }
        unregister_object_by_id(arg0);
        free_collision_body_parts(arg0);
        destroy_key_base__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_80352940_lbl_804F0F34_size[sizeof(RecoveredGlobal_80352940_lbl_804F0F34) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_80352940___vt__13TObjLobbyMain_size[sizeof(RecoveredGlobal_80352940___vt__13TObjLobbyMain) == 0x38 ? 1 : -1];
u8 *TObjLobbyMain__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    u32 temp_r3;
    u32 temp_r3_2;
    init_map_object_base((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80352940___vt__13TObjLobbyMain *)&__vt__13TObjLobbyMain).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D4370;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    M2C_FIELD(arg0, u32 *, 0xD8) = create_particle_emitter((void *) (arg0 + 0x38), (int) (0x222));
    temp_r3 = M2C_FIELD(arg0, u32 *, 0xD8);
    if (temp_r3 != 0U) {
        set_flags__11TBoss4Type2FPvUi((int) (temp_r3), (int) (0x40));
        enable__13TParticleCtrlFPv((int) (M2C_FIELD(arg0, u32 *, 0xD8)));
    }
    M2C_FIELD(arg0, u32 *, 0xDC) = create_particle_emitter((void *) (arg0 + 0x38), (int) (0x222));
    temp_r3_2 = M2C_FIELD(arg0, u32 *, 0xDC);
    if (temp_r3_2 != 0U) {
        set_flags__11TBoss4Type2FPvUi((int) (temp_r3_2), (int) (0x40));
        enable__13TParticleCtrlFPv((int) (M2C_FIELD(arg0, u32 *, 0xDC)));
    }
    TObjLobbyMain__sub_803521A4((void *) (arg0));
    TObjLobbyMain__sub_803520DC((void *) (arg0));
    TObjLobbyMain__sub_80352240((void *) (arg0));
    M2C_FIELD(arg0, f32 *, 0xD4) = (f32) (1.0f);
    M2C_FIELD(arg0, s32 *, 0xC8) = 2;
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) (1.2e+02f);
    M2C_FIELD(arg0, f32 *, 0xB0) = (f32) (0.0f);
    init_collision_body_parts((void *) (arg0), (void *) (&lbl_804F0F34.value), (int) (1));
    refresh_collision_body_centers((void *) (arg0));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    return arg0;
}

}

#undef TObjLobbyMain__sub_803520DC
#undef TObjLobbyMain__sub_803521A4
#undef TObjLobbyMain__sub_80352240
#undef TObjLobbyMain__sub_803520D8
#undef TObjLobbyMain__sub_8035255C
#undef TObjLobbyMain__sub_803525F0
#undef TObjLobbyMain__sub_80352624
#undef reset_state__13TObjLobbyMainFPv
#undef update_computer_machines__13TObjLobbyMainFv
#undef update_particles__13TObjLobbyMainFPv
#undef enable__13TParticleCtrlFPv
#undef TObjLobbyMain__data_805D6EC8
#undef lbl_805D6ECC
