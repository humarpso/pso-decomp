#include "types.h"

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
    s32 value;
    u8 remaining[0xC];
};

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual s32 m5(s32);
};

struct RecoveredGlobal_8015B644_lbl_804AFFF8 {
    s32 value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_8015B644___vt__19TOComputerMachine01 {
    s32 value;
    u8 remaining[0x40];
};

struct Node_8015B544 { u8 pad[4]; s32 val; u8 pad8[0x28]; Node_8015B544 *next; };

struct Res_8015B544 { u8 pad[0x2C]; Node_8015B544 *head; };

struct Mdl_8015B544 { u8 pad[8]; Res_8015B544 *res; };

struct Obj_8015B544 { u8 pad[0x42C]; Mdl_8015B544 *model; };

extern "C" {
s32 begin_effect_render__13TParticleCtrlFv();
s32 end_effect_render__13TParticleCtrlFv();
s32 scroll_ginja_mesh_uvs(int, int, int, int, int);
s32 rotate_matrix_y(int, int);
s32 push_matrix();
s32 pop_matrix();
s32 post_translate_matrix(void *);
s32 set_global_param__8TObjFishFi(int);
s32 draw_ginja_model(void *);
extern RecoveredGlobal_8015B350_TOComputerMachine01__data_8050DB50 TOComputerMachine01__scroll_mesh_ptrs;
extern s32 actor_frame_tick;
extern s32 TOComputerMachine01__last_render_frame_tick;
void render__19TOComputerMachine01Fv(u8 *arg0);
s32 reset_photon_effect__10TObjPlayerFPv(void *);
s32 refresh_collision_body_centers(void *);
s32 init_collision_body_parts(void *, void *, int);
s32 update_heal_gauge_state__13TOHealGeneralFPv(void *);
s32 init__5TOKeyFPv(void *, int);
extern RecoveredGlobal_8015B644_lbl_804AFFF8 lbl_804AFFF8;
extern s32 __vt__19TOComputerMachine01[];
extern s32 lbl_805D2EEC;
extern u8 *TOComputerMachine01__model_resource;
extern s32 tl_05;
extern const f32 lbl_805DB390;
extern const f32 lbl_805DB394;
u8 *TOComputerMachine01__ct(u8 *arg0, s32 arg1);
void TLobby__sub_8001FE7C(void *, s32);
extern RecoveredGlobal_8015B350_TOComputerMachine01__data_8050DB50 TOComputerMachine01__scroll_mesh_ptrs;
extern s32 TOComputerMachine01__last_render_frame_tick;
extern u8 *TOComputerMachine01__model_resource;
void reset_state__19TOComputerMachine01Fv(void);
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern s32 bm_fs_obj_kenkyu_com_resource_descriptor[];
extern RecoveredGlobal_8015B350_TOComputerMachine01__data_8050DB50 TOComputerMachine01__scroll_mesh_ptrs;
extern s32 TOComputerMachine01__last_render_frame_tick;
extern u8 *TOComputerMachine01__model_resource;
void load_model_resource__19TOComputerMachine01Fv(void);
}

extern "C" {

void *__dt__19TOComputerMachine01Fv(void *arg0, s16 arg1);
void *create__19TOComputerMachine01FPv(void *arg0);
s32 free_collision_body_parts(void *);
s32 unregister_object_by_id(void *);
s32 __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
s32 destroy_key_object__5TOKeyFPvs(void *, s32);

typedef char RecoveredGlobal_8015B350_TOComputerMachine01__data_8050DB50_size[sizeof(RecoveredGlobal_8015B350_TOComputerMachine01__data_8050DB50) == 0x10 ? 1 : -1];
void render__19TOComputerMachine01Fv(u8 *arg0) {
    u8 *temp_r31;
    u8 *temp_r31_2;
    u8 *temp_r31_3;
    u8 *temp_r31_4;
    *(s32 *)((s8 *)arg0 + 0xE0) = ((VObj_18_26a62c *)(arg0))->m8(*(f32 *)((s8 *)arg0 + 0xC0), *(f32 *)((s8 *)arg0 + 0xC4));
    if ((s32) *(s32 *)((s8 *)arg0 + 0xE0) == 1) {
        if ((s32) TOComputerMachine01__last_render_frame_tick != (s32) actor_frame_tick) {
            TOComputerMachine01__last_render_frame_tick = actor_frame_tick;
            scroll_ginja_mesh_uvs((int) (*(s32 *)((s8 *)(&TOComputerMachine01__scroll_mesh_ptrs.value) + 0)), (int) (0), (int) (2), (int) (7), (int) (1));
            scroll_ginja_mesh_uvs((int) (*(s32 *)((s8 *)(&TOComputerMachine01__scroll_mesh_ptrs.value) + 4)), (int) (0), (int) (-2), (int) (7), (int) (1));
            scroll_ginja_mesh_uvs((int) (*(s32 *)((s8 *)(&TOComputerMachine01__scroll_mesh_ptrs.value) + 8)), (int) (0), (int) (1), (int) (7), (int) (1));
            scroll_ginja_mesh_uvs((int) (*(s32 *)((s8 *)(&TOComputerMachine01__scroll_mesh_ptrs.value) + 0xC)), (int) (0), (int) (-1), (int) (7), (int) (1));
        }
        push_matrix();
        post_translate_matrix((void *) (arg0 + 0x38));
        rotate_matrix_y((int) (0), (int) (*(s32 *)((s8 *)arg0 + 0x60)));
        set_global_param__8TObjFishFi((int) (*(s32 *)((s8 *)arg0 + 0x24)));
        temp_r31 = (u8 *)(*(u8 **)((s8 *)arg0 + 0x34));
        draw_ginja_model((void *) (*(s32 *)((s8 *)temp_r31 + 4)));
        begin_effect_render__13TParticleCtrlFv();
        temp_r31_2 = (u8 *)(*(u8 **)((s8 *)temp_r31 + 0x2C));
        draw_ginja_model((void *) (*(s32 *)((s8 *)temp_r31_2 + 4)));
        temp_r31_3 = (u8 *)(*(u8 **)((s8 *)temp_r31_2 + 0x30));
        draw_ginja_model((void *) (*(s32 *)((s8 *)temp_r31_3 + 4)));
        temp_r31_4 = (u8 *)(*(u8 **)((s8 *)temp_r31_3 + 0x30));
        draw_ginja_model((void *) (*(s32 *)((s8 *)temp_r31_4 + 4)));
        draw_ginja_model((void *) (*(s32 *)((s8 *)(*(u8 **)((s8 *)temp_r31_4 + 0x30)) + 4)));
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

extern s32 __vt__19TOComputerMachine01[];

void reset_state__19TOComputerMachine01Fv(void) {
    s32 i;
    TOComputerMachine01__last_render_frame_tick = 0;
    for (i = 0; i < 0x4; i++) {
        ((s32 *)&TOComputerMachine01__scroll_mesh_ptrs)[i] = 0;
    }
    if ((*(void * *)&TOComputerMachine01__model_resource) != 0) {
        TLobby__sub_8001FE7C((*(void * *)&TOComputerMachine01__model_resource), 1);
        (*(void * *)&TOComputerMachine01__model_resource) = 0;
    }
}

void load_model_resource__19TOComputerMachine01Fv(void) {
    u8 *o;
    Node_8015B544 *n;
    o = (u8 *)alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    if (o != NULL) {
        o = load_resource_from_descriptor(o, 1, bm_fs_obj_kenkyu_com_resource_descriptor, 0, 0, 0);
    }
    TOComputerMachine01__model_resource = o;
    n = ((Obj_8015B544 *)o)->model->res->head;
    ((s32 *)&TOComputerMachine01__scroll_mesh_ptrs)[3] = n->val;
    ((s32 *)&TOComputerMachine01__scroll_mesh_ptrs)[2] = n->next->val;
    ((s32 *)&TOComputerMachine01__scroll_mesh_ptrs)[1] = n->next->next->val;
    ((s32 *)&TOComputerMachine01__scroll_mesh_ptrs)[0] = n->next->next->next->val;
    TOComputerMachine01__last_render_frame_tick = 0;
}

void *__dt__19TOComputerMachine01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__19TOComputerMachine01;
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
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8015B644___vt__19TOComputerMachine01 *)&__vt__19TOComputerMachine01).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D2EEC;
    ((VObj_18_1a504b *)(arg0))->m5(arg1);
    *(s32 *)((s8 *)arg0 + 0x34) = (s32) *(s32 *)((s8 *)(*(u8 **)((s8 *)TOComputerMachine01__model_resource + 0x42C)) + 8);
    *(s32 *)((s8 *)arg0 + 0x24) = (s32) *(s32 *)((s8 *)(*(u8 **)((s8 *)TOComputerMachine01__model_resource + 0x42C)) + 0xC);
    *(f32 *)((s8 *)arg0 + 0xC0) = (f32) lbl_805DB390;
    *(f32 *)((s8 *)arg0 + 0xC4) = (f32) lbl_805DB394;
    *(s32 *)((s8 *)arg0 + 0x30) = (s32) (*(s32 *)((s8 *)arg0 + 0x30) | 0x40000000);
    init_collision_body_parts((void *) (arg0), (void *) (&lbl_804AFFF8.value), (int) (1));
    refresh_collision_body_centers((void *) (arg0));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    update_heal_gauge_state__13TOHealGeneralFPv((void *) (arg0));
    return arg0;
}

}
