#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_8015a2b8 { char pad[0x18]; };
struct VObj_8015a2b8 : VBase_8015a2b8 {
    virtual M2C_UNK m0();
    virtual M2C_UNK m1();
    virtual M2C_UNK m2();
    virtual M2C_UNK m3();
    virtual M2C_UNK m4();
    virtual M2C_UNK m5();
    virtual M2C_UNK m6();
    virtual M2C_UNK m7();
    virtual M2C_UNK m8(f32, f32);
};

struct RecoveredGlobal_8015A418_lbl_804AFE78 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_8015A418_lbl_804AFE78_size[sizeof(RecoveredGlobal_8015A418_lbl_804AFE78) == 0x10 ? 1 : -1];

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct RecoveredGlobal_8015A4D0_lbl_804AFE88 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_8015A4D0___vt__18TOCapsuleAncient01 {
    M2C_UNK value;
    u8 remaining[0x40];
};

extern "C" {
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_8015A418_lbl_804AFE78 bm_fe_obj_o_capsule01_resource_descriptor;
extern u32 TOCapsuleAncient01__static_model_resource;
void load_resource_instance__18TOCapsuleAncient01Fv(void);
s32 is_split_screen();
s32 queue_destruction__7TObjectFv(void *);
s32 set_indexed_flags(void *, int, int);
s32 reset_photon_effect__10TObjPlayerFPv(void *);
s32 refresh_collision_body_centers(void *);
s32 init_collision_body_parts(void *, void *, int);
s32 update_heal_gauge_state__13TOHealGeneralFPv(void *);
s32 init__5TOKeyFPv(void *);
s32 get_game_play_mode();
extern RecoveredGlobal_8015A4D0_lbl_804AFE88 lbl_804AFE88;
extern M2C_UNK __vt__18TOCapsuleAncient01[];
extern s32 enable_v2_features;
extern s32 lbl_805D2ECC;
extern u32 TOCapsuleAncient01__static_model_resource;
extern const f32 lbl_805DB378;
extern const f32 lbl_805DB37C;
u8 *TOCapsuleAncient01__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
}

extern "C" {

void TOCapsuleAncient01__vt13(void *arg0);
void *__dt__18TOCapsuleAncient01Fv(void *arg0, s16 arg1);
void *create__18TOCapsuleAncient01FPv(void *arg0);
void destroy_static_instance__18TOCapsuleAncient01Fv(void);
void render__18TOCapsuleAncient01Fv(u8 *arg0);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK post_translate_matrix(void *);
M2C_UNK draw_ginja_model(int);
M2C_UNK free_collision_body_parts(void *);
M2C_UNK unregister_object_by_id(void *);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK translate_matrix(int, f32, f32, f32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK destroy_key_object__5TOKeyFPvs(void *, M2C_UNK);
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK set_global_param__8TObjFishFi(int);

void render__18TOCapsuleAncient01Fv(u8 *arg0) {
    u8 *temp_r31;
    u8 *temp_r31_2;

    M2C_FIELD(arg0, s32 *, 0xE0) = ((VObj_8015a2b8 *) arg0)->m8(M2C_FIELD(arg0, f32 *, 0xC0), M2C_FIELD(arg0, f32 *, 0xC4));
    if ((s32) M2C_FIELD(arg0, s32 *, 0xE0) == 1) {
        push_matrix();
        post_translate_matrix((void *) (arg0 + 0x38));
        rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
        temp_r31 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x34));
        translate_matrix((int) (0), (f32) (M2C_FIELD(temp_r31, f32 *, 8)), (f32) (M2C_FIELD(temp_r31, f32 *, 0xC)), (f32) (M2C_FIELD(temp_r31, f32 *, 0x10)));
        draw_ginja_model((int) (M2C_FIELD(temp_r31, s32 *, 4)));
        if ((s32) M2C_FIELD(arg0, s32 *, 0xCC) == 1) {
            begin_effect_render__13TParticleCtrlFv();
            temp_r31_2 = (unsigned char *) (M2C_FIELD(temp_r31, void **, 0x2C));
            push_matrix();
            translate_matrix((int) (0), (f32) (M2C_FIELD(temp_r31_2, f32 *, 8)), (f32) (M2C_FIELD(temp_r31_2, f32 *, 0xC)), (f32) (M2C_FIELD(temp_r31_2, f32 *, 0x10)));
            rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0xE4)));
            draw_ginja_model((int) (M2C_FIELD(temp_r31_2, s32 *, 4)));
            pop_matrix();
            end_effect_render__13TParticleCtrlFv();
        }
        pop_matrix();
    }
}

extern void *tl_05;

void *create__18TOCapsuleAncient01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xE8);
    if (o != NULL) {
        o = TOCapsuleAncient01__ct((u8 *)(o), (M2C_UNK)(tl_05), (s32)(arg0));
    }
    return o;
}

extern u32 TOCapsuleAncient01__static_model_resource;

void destroy_static_instance__18TOCapsuleAncient01Fv(void) {
    if ((u32) TOCapsuleAncient01__static_model_resource != 0U) {
        TLobby__sub_8001FE7C((void*)TOCapsuleAncient01__static_model_resource, 1);
        TOCapsuleAncient01__static_model_resource = 0U;
    }
}

extern M2C_UNK __vt__18TOCapsuleAncient01[];

void load_resource_instance__18TOCapsuleAncient01Fv(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 1, &bm_fe_obj_o_capsule01_resource_descriptor.value, 0, 0, 0));
    }
    (*(s32 *)&TOCapsuleAncient01__static_model_resource) = var_r0;
}

void *__dt__18TOCapsuleAncient01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TOCapsuleAncient01;
        unregister_object_by_id(arg0);
        free_collision_body_parts(arg0);
        destroy_key_object__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_8015A4D0_lbl_804AFE88_size[sizeof(RecoveredGlobal_8015A4D0_lbl_804AFE88) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_8015A4D0___vt__18TOCapsuleAncient01_size[sizeof(RecoveredGlobal_8015A4D0___vt__18TOCapsuleAncient01) == 0x44 ? 1 : -1];
u8 *TOCapsuleAncient01__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    init__5TOKeyFPv((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8015A4D0___vt__18TOCapsuleAncient01 *)&__vt__18TOCapsuleAncient01).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2ECC;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD((*(u8 * *)&TOCapsuleAncient01__static_model_resource), u8 **, 0x42C), s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(M2C_FIELD((*(u8 * *)&TOCapsuleAncient01__static_model_resource), u8 **, 0x42C), s32 *, 0xC);
    init_collision_body_parts((void *) (arg0), (void *) (&lbl_804AFE88.value), (int) (1));
    set_indexed_flags((void *) (arg0), (int) (0), (int) (0x1288));
    refresh_collision_body_centers((void *) (arg0));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    update_heal_gauge_state__13TOHealGeneralFPv((void *) (arg0));
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) lbl_805DB378;
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) lbl_805DB37C;
    M2C_FIELD(arg0, s32 *, 0xE4) = 0;
    if (((s32) enable_v2_features == 1) && (get_game_play_mode() == 1)) {
        queue_destruction__7TObjectFv((void *) (arg0));
    }
    if (is_split_screen() == 1) {
        queue_destruction__7TObjectFv((void *) (arg0));
    }
    return arg0;
}

void TOCapsuleAncient01__vt13(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xE4) = (s32) (M2C_FIELD(arg0, s32 *, 0xE4) + 0x222);
}

}
