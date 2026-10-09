#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

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

struct RecoveredGlobal_8015B350_TOComputerMachine01__data_8050DB50 {
    M2C_UNK value;
    u8 remaining[0xC];
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

struct RecoveredGlobal_8015B644_lbl_804AFFF8 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_8015B644___vt__19TOComputerMachine01 {
    M2C_UNK value;
    u8 remaining[0x40];
};

typedef s32 M2C_UNK;
struct Node_8015B544 { u8 pad[4]; s32 val; u8 pad8[0x28]; Node_8015B544 *next; };

struct Res_8015B544 { u8 pad[0x2C]; Node_8015B544 *head; };

struct Mdl_8015B544 { u8 pad[8]; Res_8015B544 *res; };

struct Obj_8015B544 { u8 pad[0x42C]; Mdl_8015B544 *model; };

extern "C" {
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK scroll_ginja_mesh_uvs(int, int, int, int, int);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK draw_ginja_model(void *);
extern RecoveredGlobal_8015B350_TOComputerMachine01__data_8050DB50 TOComputerMachine01__scroll_mesh_ptrs;
extern s32 lbl_805D53A4;
extern s32 TOComputerMachine01__data_805D58E4;
void render__19TOComputerMachine01Fv(u8 *arg0);
s32 reset_photon_effect__10TObjPlayerFPv(void *);
s32 refresh_collision_body_centers(void *);
s32 init_collision_body_parts(void *, void *, int);
s32 update_heal_gauge_state__13TOHealGeneralFPv(void *);
s32 init__5TOKeyFPv(void *, int);
extern RecoveredGlobal_8015B644_lbl_804AFFF8 lbl_804AFFF8;
extern M2C_UNK __vt__19TOComputerMachine01[];
extern s32 lbl_805D2EEC;
extern u8 *TOComputerMachine01__data_805D58E0;
extern s32 tl_05;
extern const f32 lbl_805DB390;
extern const f32 lbl_805DB394;
u8 *TOComputerMachine01__ct(u8 *arg0, s32 arg1);
void TLobby__sub_8001FE7C(void *, s32);
extern RecoveredGlobal_8015B350_TOComputerMachine01__data_8050DB50 TOComputerMachine01__scroll_mesh_ptrs;
extern s32 TOComputerMachine01__data_805D58E4;
extern u8 *TOComputerMachine01__data_805D58E0;
void reset_state__19TOComputerMachine01Fv(void);
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern M2C_UNK lbl_804AFFE8[];
extern RecoveredGlobal_8015B350_TOComputerMachine01__data_8050DB50 TOComputerMachine01__scroll_mesh_ptrs;
extern s32 TOComputerMachine01__data_805D58E4;
extern u8 *TOComputerMachine01__data_805D58E0;
void load_model_resource__19TOComputerMachine01Fv(void);
}

extern "C" {

void *__dt__19TOComputerMachine01Fv(void *arg0, s16 arg1);
void *create__19TOComputerMachine01FPv(void *arg0);
M2C_UNK free_collision_body_parts(void *);
M2C_UNK unregister_object_by_id(void *);
M2C_UNK __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
M2C_UNK destroy_key_object__5TOKeyFPvs(void *, M2C_UNK);

typedef char RecoveredGlobal_8015B350_TOComputerMachine01__data_8050DB50_size[sizeof(RecoveredGlobal_8015B350_TOComputerMachine01__data_8050DB50) == 0x10 ? 1 : -1];
void render__19TOComputerMachine01Fv(u8 *arg0) {
    u8 *temp_r31;
    u8 *temp_r31_2;
    u8 *temp_r31_3;
    u8 *temp_r31_4;
    M2C_FIELD(arg0, s32 *, 0xE0) = ((VObj_18_26a62c *)(arg0))->m8(M2C_FIELD(arg0, f32 *, 0xC0), M2C_FIELD(arg0, f32 *, 0xC4));
    if ((s32) M2C_FIELD(arg0, s32 *, 0xE0) == 1) {
        if ((s32) TOComputerMachine01__data_805D58E4 != (s32) lbl_805D53A4) {
            TOComputerMachine01__data_805D58E4 = lbl_805D53A4;
            scroll_ginja_mesh_uvs((int) (M2C_FIELD(&TOComputerMachine01__scroll_mesh_ptrs.value, s32 *, 0)), (int) (0), (int) (2), (int) (7), (int) (1));
            scroll_ginja_mesh_uvs((int) (M2C_FIELD(&TOComputerMachine01__scroll_mesh_ptrs.value, s32 *, 4)), (int) (0), (int) (-2), (int) (7), (int) (1));
            scroll_ginja_mesh_uvs((int) (M2C_FIELD(&TOComputerMachine01__scroll_mesh_ptrs.value, s32 *, 8)), (int) (0), (int) (1), (int) (7), (int) (1));
            scroll_ginja_mesh_uvs((int) (M2C_FIELD(&TOComputerMachine01__scroll_mesh_ptrs.value, s32 *, 0xC)), (int) (0), (int) (-1), (int) (7), (int) (1));
        }
        push_matrix();
        post_translate_matrix((void *) (arg0 + 0x38));
        rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
        temp_r31 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x34));
        draw_ginja_model((void *) (M2C_FIELD(temp_r31, s32 *, 4)));
        begin_effect_render__13TParticleCtrlFv();
        temp_r31_2 = (u8 *)(M2C_FIELD(temp_r31, u8 **, 0x2C));
        draw_ginja_model((void *) (M2C_FIELD(temp_r31_2, s32 *, 4)));
        temp_r31_3 = (u8 *)(M2C_FIELD(temp_r31_2, u8 **, 0x30));
        draw_ginja_model((void *) (M2C_FIELD(temp_r31_3, s32 *, 4)));
        temp_r31_4 = (u8 *)(M2C_FIELD(temp_r31_3, u8 **, 0x30));
        draw_ginja_model((void *) (M2C_FIELD(temp_r31_4, s32 *, 4)));
        draw_ginja_model((void *) (M2C_FIELD(M2C_FIELD(temp_r31_4, u8 **, 0x30), s32 *, 4)));
        end_effect_render__13TParticleCtrlFv();
        pop_matrix();
    }
}

void *create__19TOComputerMachine01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xE8);
    if (o != NULL) {
        o = TOComputerMachine01__ct((u8 *)(o), (s32)(arg0));
    }
    return o;
}

extern M2C_UNK __vt__19TOComputerMachine01[];

void reset_state__19TOComputerMachine01Fv(void) {
    s32 i;
    TOComputerMachine01__data_805D58E4 = 0;
    for (i = 0; i < 0x4; i++) {
        ((s32 *)&TOComputerMachine01__scroll_mesh_ptrs)[i] = 0;
    }
    if ((*(void * *)&TOComputerMachine01__data_805D58E0) != 0) {
        TLobby__sub_8001FE7C((*(void * *)&TOComputerMachine01__data_805D58E0), 1);
        (*(void * *)&TOComputerMachine01__data_805D58E0) = 0;
    }
}

void load_model_resource__19TOComputerMachine01Fv(void) {
    u8 *o;
    Node_8015B544 *n;
    o = (u8 *)alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    if (o != NULL) {
        o = load_resource_from_descriptor(o, 1, lbl_804AFFE8, 0, 0, 0);
    }
    TOComputerMachine01__data_805D58E0 = o;
    n = ((Obj_8015B544 *)o)->model->res->head;
    ((s32 *)&TOComputerMachine01__scroll_mesh_ptrs)[3] = n->val;
    ((s32 *)&TOComputerMachine01__scroll_mesh_ptrs)[2] = n->next->val;
    ((s32 *)&TOComputerMachine01__scroll_mesh_ptrs)[1] = n->next->next->val;
    ((s32 *)&TOComputerMachine01__scroll_mesh_ptrs)[0] = n->next->next->next->val;
    TOComputerMachine01__data_805D58E4 = 0;
}

void *__dt__19TOComputerMachine01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TOComputerMachine01;
        free_collision_body_parts(arg0);
        unregister_object_by_id(arg0);
        destroy_key_object__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_8015B644_lbl_804AFFF8_size[sizeof(RecoveredGlobal_8015B644_lbl_804AFFF8) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_8015B644___vt__19TOComputerMachine01_size[sizeof(RecoveredGlobal_8015B644___vt__19TOComputerMachine01) == 0x44 ? 1 : -1];
u8 *TOComputerMachine01__ct(u8 *arg0, s32 arg1) {
    init__5TOKeyFPv((void *) (arg0), (int) (tl_05));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8015B644___vt__19TOComputerMachine01 *)&__vt__19TOComputerMachine01).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2EEC;
    ((VObj_18_1a504b *)(arg0))->m5(arg1);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD(TOComputerMachine01__data_805D58E0, u8 **, 0x42C), s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(M2C_FIELD(TOComputerMachine01__data_805D58E0, u8 **, 0x42C), s32 *, 0xC);
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) lbl_805DB390;
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) lbl_805DB394;
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x40000000);
    init_collision_body_parts((void *) (arg0), (void *) (&lbl_804AFFF8.value), (int) (1));
    refresh_collision_body_centers((void *) (arg0));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    update_heal_gauge_state__13TOHealGeneralFPv((void *) (arg0));
    return arg0;
}

}
