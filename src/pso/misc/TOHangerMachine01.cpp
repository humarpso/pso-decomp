#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Base { char pad[0x18]; };

struct VObj : Base {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual M2C_UNK m8(f32, f32);
};

struct RecoveredGlobal_80168F94_lbl_804B26C8 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_80168F94_lbl_804B26C8_size[sizeof(RecoveredGlobal_80168F94_lbl_804B26C8) == 0x10 ? 1 : -1];

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct RecoveredGlobal_8016904C_lbl_804B26D8 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_8016904C___vt__17TOHangerMachine01 {
    M2C_UNK value;
    u8 remaining[0x38];
};

extern "C" {
void run_task__17TOHangerMachine01Fv(u8 *arg0);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK rotate_matrix_z(int, int);
M2C_UNK rotate_matrix_x(int, int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK draw_ginja_model(int);
extern const f32 lbl_805DB6A8;
void render__17TOHangerMachine01Fv(u8 *arg0);
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_80168F94_lbl_804B26C8 lbl_804B26C8;
extern u32 TOHangerMachine01__bml_resource;
void load_shared_resource__17TOHangerMachine01Fv(void);
s32 reset_photon_effect__10TObjPlayerFPv(void *);
s32 refresh_collision_body_centers(void *);
s32 init_collision_body_parts(void *, void *, int);
s32 init_map_object_base(void *, int);
extern RecoveredGlobal_8016904C_lbl_804B26D8 hanger_machine01_collision_body_parts;
extern M2C_UNK __vt__17TOHangerMachine01[];
extern s32 lbl_805D2FFC;
extern u32 TOHangerMachine01__bml_resource;
extern s32 tl_05;
extern const f32 lbl_805DB6AC;
extern const f32 lbl_805DB6B0;
u8 *TOHangerMachine01__ct(u8 *arg0, s32 arg1);
}

extern "C" {

void TOHangerMachine01__sub_80169168(void);
void *__dt__17TOHangerMachine01Fv(void *arg0, s16 arg1);
void *create__17TOHangerMachine01FPv(void *arg0);
void free_static_model__17TOHangerMachine01Fv(void);
s32 is_valid_slot__17TOHangerMachine01FiUs(int arg0, u16 arg1);
void TLobby__sub_8001FE7C(void*, int);
void TOHangceilingCave01KeyQuick__sub_80168D30(void);
M2C_UNK free_collision_body_parts(void *);
M2C_UNK unregister_object_by_id(M2C_UNK *);
M2C_UNK __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
M2C_UNK destroy_key_base__5TOKeyFPvs(void *, M2C_UNK);
s32 is_not_split_screen__13TRaderMapCoreFv();
void set_scale__27TOHangceilingCave01KeyQuickFPvf(void* p, f32 v);

void run_task__17TOHangerMachine01Fv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0xC8) = (s32) (M2C_FIELD(arg0, s32 *, 0xC8) + 0x888);
}

#pragma push
#pragma fp_contract on
void render__17TOHangerMachine01Fv(u8 *arg0) {
    u8 *p;
    if (((VObj *)arg0)->m8(M2C_FIELD(arg0, f32 *, 0xC0), M2C_FIELD(arg0, f32 *, 0xC4)) != 0) {
        push_matrix();
        post_translate_matrix((void *) (arg0 + 0x38));
        rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
        p = (u8 *)(M2C_FIELD(arg0, u8 **, 0x34));
        post_translate_matrix((void *) (p + 8));
        draw_ginja_model((int) (M2C_FIELD(p, s32 *, 4)));
        p = (u8 *)(M2C_FIELD(p, u8 **, 0x2C));
        if (lbl_805DB6A8 < M2C_FIELD(arg0, f32 *, 0x6C)) {
            post_translate_matrix((void *) (p + 8));
            draw_ginja_model((int) (M2C_FIELD(p, s32 *, 4)));
        }
        p = (u8 *)(M2C_FIELD(p, u8 **, 0x30));
        post_translate_matrix((void *) (p + 8));
        draw_ginja_model((int) (M2C_FIELD(p, s32 *, 4)));
        p = (u8 *)(M2C_FIELD(p, u8 **, 0x30));
        post_translate_matrix((void *) (p + 8));
        draw_ginja_model((int) (M2C_FIELD(p, s32 *, 4)));
        p = (u8 *)(M2C_FIELD(p, u8 **, 0x2C));
        push_matrix();
        post_translate_matrix((void *) (p + 8));
        rotate_matrix_z((int) (0), (int) (M2C_FIELD(p, s32 *, 0x1C)));
        rotate_matrix_x((int) (0), (int) (M2C_FIELD(p, s32 *, 0x14)));
        rotate_matrix_y((int) (0), (int) (M2C_FIELD(p, s32 *, 0x18) + M2C_FIELD(arg0, s32 *, 0xC8)));
        begin_effect_render__13TParticleCtrlFv();
        draw_ginja_model((int) (M2C_FIELD(p, s32 *, 4)));
        end_effect_render__13TParticleCtrlFv();
        pop_matrix();
        p = (u8 *)(M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x34), void **, 0x2C), void **, 0x30), void **, 0x30), void **, 0x30));
        post_translate_matrix((void *) (p + 8));
        draw_ginja_model((int) (M2C_FIELD(p, s32 *, 4)));
        p = (u8 *)(M2C_FIELD(p, u8 **, 0x2C));
        push_matrix();
        post_translate_matrix((void *) (p + 8));
        rotate_matrix_z((int) (0), (int) (M2C_FIELD(p, s32 *, 0x1C)));
        rotate_matrix_x((int) (0), (int) (M2C_FIELD(p, s32 *, 0x14)));
        rotate_matrix_y((int) (0), (int) (M2C_FIELD(p, s32 *, 0x18) + M2C_FIELD(arg0, s32 *, 0xC8)));
        begin_effect_render__13TParticleCtrlFv();
        draw_ginja_model((int) (M2C_FIELD(p, s32 *, 4)));
        end_effect_render__13TParticleCtrlFv();
        pop_matrix();
        p = (u8 *)(M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x34), void **, 0x2C), void **, 0x30), void **, 0x30), void **, 0x30), void **, 0x30));
        if (lbl_805DB6A8 < M2C_FIELD(arg0, f32 *, 0x68)) {
            post_translate_matrix((void *) (p + 8));
            draw_ginja_model((int) (M2C_FIELD(p, s32 *, 4)));
        }
        pop_matrix();
    }
}
#pragma pop

void *create__17TOHangerMachine01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xCC);
    if (o != NULL) {
        o = TOHangerMachine01__ct((u8 *)(o), (s32)(arg0));
    }
    return o;
}

extern u32 TOHangerMachine01__bml_resource;

void free_static_model__17TOHangerMachine01Fv(void) {
    if ((u32) TOHangerMachine01__bml_resource != 0U) {
        TLobby__sub_8001FE7C((void*)TOHangerMachine01__bml_resource, 1);
        TOHangerMachine01__bml_resource = 0U;
    }
}

extern M2C_UNK __vt__17TOHangerMachine01[];

void load_shared_resource__17TOHangerMachine01Fv(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 1, &lbl_804B26C8.value, 0, 0, 0));
    }
    (*(s32 *)&TOHangerMachine01__bml_resource) = var_r0;
}

void *__dt__17TOHangerMachine01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TOHangerMachine01;
        unregister_object_by_id((M2C_UNK *)arg0);
        free_collision_body_parts(arg0);
        destroy_key_base__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 local_client_id;

typedef char RecoveredGlobal_8016904C_lbl_804B26D8_size[sizeof(RecoveredGlobal_8016904C_lbl_804B26D8) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_8016904C___vt__17TOHangerMachine01_size[sizeof(RecoveredGlobal_8016904C___vt__17TOHangerMachine01) == 0x3C ? 1 : -1];
u8 *TOHangerMachine01__ct(u8 *arg0, s32 arg1) {
    init_map_object_base((void *) (arg0), (int) (tl_05));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8016904C___vt__17TOHangerMachine01 *)&__vt__17TOHangerMachine01).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2FFC;
    ((VObj_18_1a504b *)(arg0))->m5(arg1);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD((*(u8 * *)&TOHangerMachine01__bml_resource), u8 **, 0x42C), s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(M2C_FIELD((*(u8 * *)&TOHangerMachine01__bml_resource), u8 **, 0x42C), s32 *, 0xC);
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) lbl_805DB6AC;
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) lbl_805DB6B0;
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x40000000);
    init_collision_body_parts((void *) (arg0), (void *) (&hanger_machine01_collision_body_parts.value), (int) (1));
    refresh_collision_body_centers((void *) (arg0));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    M2C_FIELD(arg0, s32 *, 0xC8) = 0;
    return arg0;
}

s32 is_valid_slot__17TOHangerMachine01FiUs(int arg0, u16 arg1) {
    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        return 1;
    }
    return (u32)__cntlzw((u32)(local_client_id - (u16)arg1)) >> 5;
}

void TOHangerMachine01__sub_80169168(void) {  }

}
