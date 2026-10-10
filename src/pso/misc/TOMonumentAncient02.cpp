#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct RecoveredGlobal_80172EA0_lbl_804B39A8 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_80172EA0___vt__19TOMonumentAncient02 {
    M2C_UNK value;
    u8 remaining[0x38];
};

struct Node_80172AE0 { u8 pad0[4]; s32 f4; f32 x; f32 y; f32 z; u8 pad14[0x2C - 0x14]; Node_80172AE0 *child; };

struct Model_80172AE0 { u8 pad0[4]; s32 f4; u8 mtx[0x2C - 8]; Node_80172AE0 *child; };

struct VBase_80172AE0 { char pad[0x18]; };

struct VObj_80172AE0 : VBase_80172AE0 {
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

struct Mon_80172AE0 : VObj_80172AE0 {
    u8 pad1C[0x24 - 0x1C];
    s32 f24;
    u8 pad28[0x34 - 0x28];
    Model_80172AE0 *model;
    u8 pos38[0x60 - 0x38];
    s32 f60;
    u8 pad64[0x68 - 0x64];
    f32 f68;
    f32 f6C;
    f32 f70;
    u8 pad74[0xC0 - 0x74];
    f32 fC0;
    f32 fC4;
    s32 fC8;
    s32 fCC;
    u8 padD0[0xD8 - 0xD0];
    f32 fD8;
    u8 padDC[0xEC - 0xDC];
    s32 fEC;
};

extern "C" {
s32 create_particle_emitter(s32, s32);
u32 init_collision_body_parts(void *, s32, s32);
u8 * init_map_object_base(void *);
s32 get_global_state__14TOKeyMachine01Fv(void);
s32 get_game_play_mode(void);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK reset_photon_effect__10TObjPlayerFPv(void *);
M2C_UNK refresh_collision_body_centers(void *);
M2C_UNK set_type__14TOKeyAncient01FPv(void *);
extern RecoveredGlobal_80172EA0_lbl_804B39A8 monument_ancient02_collision_parts;
extern M2C_UNK __vt__19TOMonumentAncient02[];
extern s32 enable_v2_features;
extern s32 TOMonumentAncient02__name;
extern u32 TOMonumentAncient02__data_805D5A68;
extern const f32 lbl_805DB92C;
extern const f32 lbl_805DB934;
extern const f32 lbl_805DB938;
u8 *TOMonumentAncient02__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
u8 *load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
u8 *alloc__23TAdSinglePlyChrSelectGCFPv(s32);
s32 get_global_state__14TOKeyMachine01Fv(void);
extern u8 monument_ancient02_resource_table[];
extern u32 TOMonumentAncient02__data_805D5A68;
void load_resources__19TOMonumentAncient02Fv(void);
s32 rand(void);
int rotate_matrix_y(int, int);
int push_matrix();
int pop_matrix();
int post_translate_matrix(void *);
int set_global_param__8TObjFishFi(int);
int draw_ginja_model(int);
void translate_matrix(s32, f32, f32, f32);
int begin_effect_render__13TParticleCtrlFv();
int end_effect_render__13TParticleCtrlFv();
void set_chunk_material_color(void *);
extern s32 lbl_805D5660;
extern s32 some_id_805c6f74;
extern u8 chunk_material_color_half_alpha_f32[];
extern const f32 lbl_805DB920;
extern const f32 lbl_805DB924;
extern const f32 lbl_805DB928;
extern const f32 lbl_805DB92C;
extern const f32 lbl_805DB930;
void render__19TOMonumentAncient02Fv(Mon_80172AE0 *self);
}

extern "C" {

void *__dt__19TOMonumentAncient02Fv(void *arg0, s16 arg1);
void *create__19TOMonumentAncient02FPv(void *arg0);
void free_shared_data__19TOMonumentAncient02Fv(void);
void run_task__19TOMonumentAncient02Fv(u8 *arg0);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK play_persistent_sound(s32, void *, void *, M2C_UNK, M2C_UNK);
void free_collision_body_parts(void *);
void unregister_object_by_id(void *);
M2C_UNK submit_cursor_candidate(void *, M2C_UNK);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_key_base__5TOKeyFPvs(void *, int);
M2C_UNK enable__13TParticleCtrlFPv(void *);
s32 is_not_split_screen__13TRaderMapCoreFv();
void request_destroy__11TBoss4Type2FUi(void *);

void run_task__19TOMonumentAncient02Fv(u8 *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0xAC);
    switch (temp_r0) {
    default:
        M2C_FIELD(arg0, s32 *, 0xAC) = 1;
        if ((u32) M2C_FIELD(arg0, u32 *, 0xE8) != 0U) {
            enable__13TParticleCtrlFPv(M2C_FIELD(arg0, void **, 0xE8));
        }
        return;
    case 1:
        if ((is_not_split_screen__13TRaderMapCoreFv() != 1) && ((s32) M2C_FIELD(arg0, s32 *, 0xEC) == 1)) {
            submit_cursor_candidate(arg0, -1);
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0xE8) != 0U) {
            enable__13TParticleCtrlFPv(M2C_FIELD(arg0, void **, 0xE8));
            return;
        }
        break;
    case 2:
        play_persistent_sound(M2C_FIELD(arg0, s32 *, 0xD4), arg0, arg0 + 0x38, 0, 0);
        break;
    }
}

extern void *tl_05;

#pragma push
#pragma fp_contract on
#pragma opt_common_subs off
void render__19TOMonumentAncient02Fv(Mon_80172AE0 *self) {
    Model_80172AE0 *m;
    Node_80172AE0 *n;
    self->fEC = self->m8(self->fC0, self->fC4);
    if (self->fEC == 1) {
        push_matrix();
        if (self->fC8 == 1) {
            self->f68 = lbl_805DB920 * (lbl_805DB924 * (f32)rand()) - lbl_805DB928;
            self->f70 = lbl_805DB920 * (lbl_805DB924 * (f32)rand()) - lbl_805DB928;
            post_translate_matrix(&self->f68);
        }
        post_translate_matrix(self->pos38);
        rotate_matrix_y(0, self->f60);
        set_global_param__8TObjFishFi(self->f24);
        m = self->model;
        post_translate_matrix(m->mtx);
        draw_ginja_model(m->f4);
        if (self->fC8 == 1) {
            if (self->fCC != 0) {
                self->fD8 += lbl_805DB928;
                if (lbl_805DB92C <= self->fD8) {
                    self->fD8 = lbl_805DB92C;
                    self->fCC = 0;
                }
            } else {
                self->fD8 -= lbl_805DB928;
                if (self->fD8 <= lbl_805DB930) {
                    self->fD8 = lbl_805DB930;
                    self->fCC = 1;
                }
            }
            n = m->child;
            push_matrix();
            translate_matrix(0, n->x, n->y, n->z);
            begin_effect_render__13TParticleCtrlFv();
            lbl_805D5660 = some_id_805c6f74;
            some_id_805c6f74 = some_id_805c6f74 | 0x20;
            set_chunk_material_color(&self->fD8);
            draw_ginja_model(n->f4);
            set_chunk_material_color(chunk_material_color_half_alpha_f32);
            some_id_805c6f74 = lbl_805D5660;
            end_effect_render__13TParticleCtrlFv();
            pop_matrix();
        }
        pop_matrix();
    }
}
#pragma pop

void *create__19TOMonumentAncient02FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xF0);
    if (o != NULL) {
        o = TOMonumentAncient02__ct((u8 *)(o), (M2C_UNK)(tl_05), (s32)(arg0));
    }
    return o;
}

extern u32 TOMonumentAncient02__data_805D5A68;

void free_shared_data__19TOMonumentAncient02Fv(void) {
    if ((u32) TOMonumentAncient02__data_805D5A68 != 0U) {
        TLobby__sub_8001FE7C((void*)TOMonumentAncient02__data_805D5A68, 1);
        TOMonumentAncient02__data_805D5A68 = 0U;
    }
}

extern M2C_UNK __vt__19TOMonumentAncient02[];

void load_resources__19TOMonumentAncient02Fv(void) {
    u8 *tbl = monument_ancient02_resource_table;
    u8 *p;
    switch (get_global_state__14TOKeyMachine01Fv()) {
    default:
        p = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (p != NULL) {
            p = load_resource_from_descriptor(p, 5, tbl + 0x8, 0, 0, 0);
        }
        TOMonumentAncient02__data_805D5A68 = (u32)p;
        break;
    case 4:
        p = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (p != NULL) {
            p = load_resource_from_descriptor(p, 5, tbl + 0x20, 0, 0, 0);
        }
        TOMonumentAncient02__data_805D5A68 = (u32)p;
        break;
    case 7:
        p = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (p != NULL) {
            p = load_resource_from_descriptor(p, 5, tbl + 0x38, 0, 0, 0);
        }
        TOMonumentAncient02__data_805D5A68 = (u32)p;
        break;
    }
}

void *__dt__19TOMonumentAncient02Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TOMonumentAncient02;
        request_destroy__11TBoss4Type2FUi(M2C_FIELD(arg0, void **, 0xE8));
        unregister_object_by_id(arg0);
        free_collision_body_parts(arg0);
        destroy_key_base__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_80172EA0_lbl_804B39A8_size[sizeof(RecoveredGlobal_80172EA0_lbl_804B39A8) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_80172EA0___vt__19TOMonumentAncient02_size[sizeof(RecoveredGlobal_80172EA0___vt__19TOMonumentAncient02) == 0x3C ? 1 : -1];
u8 *TOMonumentAncient02__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    s32 temp_r3;
    init_map_object_base(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80172EA0___vt__19TOMonumentAncient02 *)&__vt__19TOMonumentAncient02).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) TOMonumentAncient02__name;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD((*(u8 * *)&TOMonumentAncient02__data_805D5A68), u8 **, 0x42C), s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(M2C_FIELD((*(u8 * *)&TOMonumentAncient02__data_805D5A68), u8 **, 0x42C), s32 *, 0xC);
    init_collision_body_parts(arg0, (s32) &monument_ancient02_collision_parts.value, 1);
    refresh_collision_body_centers((void *) (arg0));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    temp_r3 = get_global_state__14TOKeyMachine01Fv();
    switch (temp_r3) {
    default:
        M2C_FIELD(arg0, s32 *, 0xD0) = 0x2C;
        M2C_FIELD(arg0, s32 *, 0xD4) = 0x4C119;
        break;
    case 4:
        M2C_FIELD(arg0, s32 *, 0xD0) = 0x2D;
        M2C_FIELD(arg0, s32 *, 0xD4) = 0x44116;
        break;
    case 7:
        M2C_FIELD(arg0, s32 *, 0xD0) = 0x2E;
        M2C_FIELD(arg0, s32 *, 0xD4) = 0x4004C10F;
        break;
    }
    M2C_FIELD(arg0, s32 *, 0xAC) = 0;
    M2C_FIELD(arg0, s32 *, 0xC8) = 0;
    M2C_FIELD(arg0, s32 *, 0xCC) = 0;
    set_type__14TOKeyAncient01FPv((void *) (arg0 + 0x98));
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) lbl_805DB934;
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) lbl_805DB938;
    M2C_FIELD(arg0, f32 *, 0xD8) = (f32) lbl_805DB92C;
    M2C_FIELD(arg0, f32 *, 0xDC) = (f32) lbl_805DB92C;
    M2C_FIELD(arg0, f32 *, 0xE0) = (f32) lbl_805DB92C;
    M2C_FIELD(arg0, f32 *, 0xE4) = (f32) lbl_805DB92C;
    M2C_FIELD(arg0, s32 *, 0xE8) = create_particle_emitter((s32) (arg0 + 0x38), 0x7F);
    M2C_FIELD(arg0, s32 *, 0xEC) = 1;
    if ((s32) enable_v2_features == 1) {
        if (get_game_play_mode() == 1) {
            queue_destruction__7TObjectFv((void *) (arg0));
        }
    }
    return arg0;
}

}
