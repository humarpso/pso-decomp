#include "types.h"
typedef s32 M2C_UNK;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
struct VBase_18_801AB370 { char pad[0x18]; };

struct VObj_18_801AB370 : VBase_18_801AB370 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
};

struct Stack_801AB370 { f32 x, y, z; };

extern "C" {
u8 *photon_base_ct(void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK set_field_b8__14TObjEnePanarmsFPvs(void *, M2C_UNK);
void set_field_dc__10TObjPlayerFPvi(void *, s32);
void set_field_d8__10TObjPlayerFPvi(void *, s32);
void set_animation__10TObjPlayerFPvs(void *, s16);
u8 *find_entity_by_id(u16);
M2C_UNK init_collision_body_parts(void *, void *, int);
M2C_UNK refresh_collision_body_centers(void *);
M2C_UNK reset_photon_effect__10TObjPlayerFPv(void *);
M2C_UNK begin_photon_summon_camera(void *, int);
M2C_UNK spawn_photon_blast_opening_effects(int, int);
M2C_UNK spawn_photon_blast_attachment_effects(void *, M2C_UNK);
M2C_UNK TObjPlayer__sub_801AAE6C(void *, int);
M2C_UNK construct_photon_magic_square_normal(void *, void *, int, void *, int);
u8 *TPhotonRainbow__ct(u8 *arg0, s32 arg1_unused, s32 arg2);
s32 get_global_state__14TOKeyMachine01Fv();
M2C_UNK play_cue_stream_file(void *);
void *__nw__7TObjectFUl(int);
extern u8 lbl_80446D40[];
extern u8 lbl_80446D4C[];
extern s32 lbl_805D34E0;
extern u8 *photon_blast_shared_resource;
extern const f32 lbl_805DC15C;
extern "C" void TLobby__sub_801A1FD8();
extern "C" void TObjPlayer__sub_80019568();
extern "C" void TObjRoomId__sub_801A1E2C();
extern "C" void TParticleCtrl__sub_801A2124();
extern "C" void apply_object_set_data();
extern "C" void classify_actor_view_detail();
extern "C" void destroy__13TPhotonFarllaFPvs();
extern "C" void enter_scene__10TSceneSoraFi();
extern "C" void render__13TPhotonFarllaFPv();
extern "C" void render_shadows__7TObjectFv();
extern "C" void reset_movement__10TObjPlayerFPv();
extern "C" void run_task__13TPhotonFarllaFPv();
extern "C" void update_if_active__10TSceneSoraFPv();
extern "C" void update_object_view_visibility();
u8 *TPhotonFarlla__ct(u8 *arg0, u8 *arg1);
}

extern "C" {

#pragma push
#pragma opt_propagation off
void *lbl_804C3518[8] = {
    (void *)0x30000, (void *)0x0, (void *)0x3f800000, (void *)0x0,
    (void *)0x10000, (void *)0x8, (void *)0x3f800000, (void *)0x0,
};
void *lbl_804C3538[11] = {
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x432a0000,
    (void *)0x41f00000, (void *)0x0, (void *)0x2003, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0,
};
void *lbl_804C3564[17] = {
    (void *)0x0, (void *)0x0, (void *)&destroy__13TPhotonFarllaFPvs, (void *)&run_task__13TPhotonFarllaFPv,
    (void *)&render__13TPhotonFarllaFPv, (void *)&render_shadows__7TObjectFv, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&reset_movement__10TObjPlayerFPv, (void *)&TParticleCtrl__sub_801A2124, (void *)&update_object_view_visibility, (void *)&classify_actor_view_detail,
    (void *)&TObjRoomId__sub_801A1E2C, (void *)&TObjPlayer__sub_80019568, (void *)&enter_scene__10TSceneSoraFi, (void *)&update_if_active__10TSceneSoraFPv,
    (void *)0x0,
};
u8 *TPhotonFarlla__ct(u8 *arg0, u8 *arg1) {
    Stack_801AB370 pos;
    u8 *e;
    void *p;
    photon_base_ct(arg0);
    M2C_FIELD(arg0, u8 **, 0x18) = (u8 *)lbl_804C3564;
    M2C_FIELD(arg0, s32 *, 0) = lbl_805D34E0;
    M2C_FIELD(arg0, s32 *, 0x138) = 0;
    VecCopy__FP3VecPC3Vec(arg0 + 0x38, arg1);
    M2C_FIELD(arg0, u16 *, 0x17C) = M2C_FIELD(arg1, u16 *, 0xC);
    init_collision_body_parts(arg0, (u8 *)lbl_804C3538, 1);
    refresh_collision_body_centers(arg0);
    reset_photon_effect__10TObjPlayerFPv(arg0);
    M2C_FIELD(arg0, u8 **, 0x180) = find_entity_by_id(M2C_FIELD(arg0, u16 *, 0x17C));
    e = M2C_FIELD(arg0, u8 **, 0x180);
    if (e != NULL) {
        M2C_FIELD(arg0, s32 *, 0x60) = M2C_FIELD(e, s32 *, 0x60);
    }
    M2C_FIELD(arg0, s32 *, 0x34) = M2C_FIELD(M2C_FIELD(photon_blast_shared_resource, u8 **, 0x42C), s32 *, 0x8);
    M2C_FIELD(arg0, s32 *, 0x24) = M2C_FIELD(M2C_FIELD(photon_blast_shared_resource, u8 **, 0x42C), s32 *, 0xC);
    set_field_d8__10TObjPlayerFPvi(arg0, (s32) lbl_804C3518);
    set_field_dc__10TObjPlayerFPvi(arg0, M2C_FIELD(photon_blast_shared_resource, s32 *, 0x430));
    M2C_FIELD(arg0, s16 *, 0xB8) = 1;
    set_animation__10TObjPlayerFPvs(arg0, M2C_FIELD(arg0, s16 *, 0xB8));
    set_field_b8__14TObjEnePanarmsFPvs(arg0, M2C_FIELD(arg0, s16 *, 0xB8));
    M2C_FIELD(arg0, s16 *, 0x194) = 1;
    M2C_FIELD(arg0, s32 *, 0x198) = M2C_FIELD(arg1, s32 *, 0x10);
    M2C_FIELD(arg0, s32 *, 0x19C) = M2C_FIELD(arg1, s32 *, 0x14);
    M2C_FIELD(arg0, s32 *, 0x1A0) = 0;
    M2C_FIELD(arg0, s32 *, 0x134) = 1;
    ((VObj_18_801AB370 *) arg0)->m12();
    M2C_FIELD(arg0, s32 *, 0x1A4) = 0;
    switch (get_global_state__14TOKeyMachine01Fv()) {
    case 11: case 12: case 13: case 14:
    case 30: case 31: case 32: case 33:
        p = __nw__7TObjectFUl(0xAC);
        if (p != NULL) {
            ((u8 *(*)(void *, void *, void *, int)) TPhotonRainbow__ct)(p, arg0, arg0 + 0x38, 1);
        }
        break;
    default:
        p = __nw__7TObjectFUl(0xAC);
        if (p != NULL) {
            ((u8 *(*)(void *, void *, void *, int)) TPhotonRainbow__ct)(p, arg0, arg0 + 0x38, 0);
        }
        break;
    }
    TObjPlayer__sub_801AAE6C(arg0, M2C_FIELD(arg1, u8 *, 0x1C));
    if (M2C_FIELD(arg0, s32 *, 0x19C) == 1) {
        M2C_FIELD(arg0, s32 *, 0x154) |= 1;
    }
    M2C_FIELD(arg0, f32 *, 0x150) = M2C_FIELD(arg1, f32 *, 0x20);
    if (M2C_FIELD(arg0, s32 *, 0x198) == 0) {
        set_field_b8__14TObjEnePanarmsFPvs(arg0, 0);
        begin_photon_summon_camera(arg0, 1);
        M2C_FIELD(arg0, s32 *, 0x198) = 1;
        M2C_FIELD(arg0, s16 *, 0x194) = 0;
        M2C_FIELD(arg0, s32 *, 0x1A0) = 1;
        e = find_entity_by_id(M2C_FIELD(arg0, u16 *, 0x17C));
        if (e != NULL) {
            VecCopy__FP3VecPC3Vec(&pos, e + 0x38);
            pos.y += lbl_805DC15C;
        }
        p = __nw__7TObjectFUl(0xD0);
        if (p != NULL) {
            construct_photon_magic_square_normal(p, arg0, 0, &pos, 0x78);
        }
        spawn_photon_blast_attachment_effects(arg0, 0);
        play_cue_stream_file(lbl_80446D40);
    } else {
        spawn_photon_blast_opening_effects(0, M2C_FIELD(arg0, u16 *, 0x17C));
        play_cue_stream_file(lbl_80446D4C);
    }
    return arg0;
}
#pragma pop

}
