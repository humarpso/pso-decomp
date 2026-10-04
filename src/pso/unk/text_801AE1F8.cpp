#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Vec_801AE1F8 { f32 x, y, z; };

struct VBase_801AE1F8 { char pad[0x18]; };

struct VObj_801AE1F8 : VBase_801AE1F8 {
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

extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK set_field_b8__14TObjEnePanarmsFPvs(void *, M2C_UNK);
void set_field_dc__10TObjPlayerFPvi(void *, s32);
void set_field_d8__10TObjPlayerFPvi(void *, s32);
void set_animation__10TObjPlayerFPvs(void *, s16);
M2C_UNK reset_photon_effect__10TObjPlayerFPv(void *);
u8 *find_entity_by_id(u16);
M2C_UNK refresh_collision_body_centers(void *);
M2C_UNK init_collision_body_parts(void *, void *, int);
M2C_UNK begin_photon_summon_camera(void *, int);
M2C_UNK spawn_photon_blast_opening_effects(int, int);
M2C_UNK spawn_photon_blast_attachment_effects(void *, M2C_UNK);
u8 *photon_base_ct(void *);
M2C_UNK TPhotonMagicSquare__ct(void *, void *, int, void *, int, f32);
void TObjPlayer__sub_801ADC7C(void *, u8);
u8 *TPhotonRainbow__ct(void *, void *, void *, s32);
s32 get_global_state__14TOKeyMachine01Fv();
M2C_UNK play_cue_stream_file(void *);
void *__nw__7TObjectFUl(u32);
extern u8 lbl_80446EE0[];
extern u8 lbl_80446EEC[];
extern s32 lbl_805D3518;
extern u8 *lbl_805D5D28;
extern const f32 lbl_805DC234;
extern const f32 lbl_805DC258;
extern "C" void TLobby__sub_801A1FD8();
extern "C" void TObjPlayer__sub_80019568();
extern "C" void TObjRoomId__sub_801A1E2C();
extern "C" void TParticleCtrl__sub_801A2124();
extern "C" void apply_object_set_data();
extern "C" void classify_actor_view_detail();
extern "C" void destroy__12TPhotonPillaFPvs();
extern "C" void enter_scene__10TSceneSoraFi();
extern "C" void render__12TPhotonPillaFPv();
extern "C" void render_shadows__7TObjectFv();
extern "C" void reset_movement__10TObjPlayerFPv();
extern "C" void update_if_active__10TSceneSoraFPv();
extern "C" void update_object_view_visibility();
extern "C" void update_photon_blast();
u8 *TPhotonPilla__ct(u8 *arg0, u8 *arg1);
}

extern "C" {

void *lbl_804C3A38[8] = {
    (void *)0x30000, (void *)0x3, (void *)0x3f800000, (void *)0x0,
    (void *)0x10000, (void *)0xa, (void *)0x3f800000, (void *)0x0,
};
void *lbl_804C3A58[11] = {
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x42f00000,
    (void *)0x41f00000, (void *)0x0, (void *)0x8007, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0,
};
void *lbl_804C3A84[18] = {
    (void *)0x0, (void *)0x43960000, (void *)0x42480000, (void *)0x41c80000,
    (void *)0x43960000, (void *)0x41c80000, (void *)0x41c80000, (void *)0x43960000,
    (void *)0xc1c80000, (void *)0x0, (void *)0x43960000, (void *)0xc2480000,
    (void *)0xc1c80000, (void *)0x43960000, (void *)0xc1c80000, (void *)0x41c80000,
    (void *)0x43960000, (void *)0x41c80000,
};
void *lbl_804C3ACC[17] = {
    (void *)0x0, (void *)0x0, (void *)&destroy__12TPhotonPillaFPvs, (void *)&update_photon_blast,
    (void *)&render__12TPhotonPillaFPv, (void *)&render_shadows__7TObjectFv, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&reset_movement__10TObjPlayerFPv, (void *)&TParticleCtrl__sub_801A2124, (void *)&update_object_view_visibility, (void *)&classify_actor_view_detail,
    (void *)&TObjRoomId__sub_801A1E2C, (void *)&TObjPlayer__sub_80019568, (void *)&enter_scene__10TSceneSoraFi, (void *)&update_if_active__10TSceneSoraFPv,
    (void *)0x0,
};
u8 *TPhotonPilla__ct(u8 *arg0, u8 *arg1) {
    u8 *temp_r3;
    s32 state;
    void *mem;
    photon_base_ct(arg0);
    M2C_FIELD(arg0, u8 **, 0x18) = (u8 *)lbl_804C3ACC;
    M2C_FIELD(arg0, s32 *, 0) = lbl_805D3518;
    M2C_FIELD(arg0, s32 *, 0x138) = 3;
    VecCopy__FP3VecPC3Vec(arg0 + 0x38, arg1);
    M2C_FIELD(arg0, u16 *, 0x17C) = M2C_FIELD(arg1, u16 *, 0xC);
    init_collision_body_parts(arg0, (void *)lbl_804C3A58, 1);
    refresh_collision_body_centers(arg0);
    reset_photon_effect__10TObjPlayerFPv(arg0);
    M2C_FIELD(arg0, u8 **, 0x190) = find_entity_by_id(M2C_FIELD(arg0, u16 *, 0x17C));
    temp_r3 = M2C_FIELD(arg0, u8 **, 0x190);
    if (temp_r3 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x60) = M2C_FIELD(temp_r3, s32 *, 0x60);
    }
    M2C_FIELD(arg0, s32 *, 0x34) = M2C_FIELD(M2C_FIELD(lbl_805D5D28, u8 **, 0x42C), s32 *, 0x38);
    M2C_FIELD(arg0, s32 *, 0x24) = M2C_FIELD(M2C_FIELD(lbl_805D5D28, u8 **, 0x42C), s32 *, 0x3C);
    set_field_d8__10TObjPlayerFPvi(arg0, (s32)lbl_804C3A38);
    set_field_dc__10TObjPlayerFPvi(arg0, M2C_FIELD(lbl_805D5D28, s32 *, 0x430));
    M2C_FIELD(arg0, s16 *, 0xB8) = 1;
    set_animation__10TObjPlayerFPvs(arg0, M2C_FIELD(arg0, s16 *, 0xB8));
    set_field_b8__14TObjEnePanarmsFPvs(arg0, M2C_FIELD(arg0, s16 *, 0xB8));
    M2C_FIELD(arg0, s16 *, 0x198) = 1;
    M2C_FIELD(arg0, s32 *, 0x19C) = M2C_FIELD(arg1, s32 *, 0x10);
    M2C_FIELD(arg0, s32 *, 0x1A0) = M2C_FIELD(arg1, s32 *, 0x14);
    M2C_FIELD(arg0, s32 *, 0x1A4) = 0;
    M2C_FIELD(arg0, s32 *, 0x134) = 4;
    ((VObj_801AE1F8 *) arg0)->m12();
    M2C_FIELD(arg0, s32 *, 0x1A8) = 0;
    state = get_global_state__14TOKeyMachine01Fv();
    switch (state) {
    case 11:
    case 12:
    case 13:
    case 14:
        mem = __nw__7TObjectFUl(0xAC);
        if (mem != NULL) {
            TPhotonRainbow__ct(mem, arg0, arg0 + 0x38, 1);
        }
        break;
    default:
        mem = __nw__7TObjectFUl(0xAC);
        if (mem != NULL) {
            TPhotonRainbow__ct(mem, arg0, arg0 + 0x38, 0);
        }
        break;
    }
    M2C_FIELD(arg0, s32 *, 0x194) = 0;
    TObjPlayer__sub_801ADC7C(arg0, M2C_FIELD(arg1, u8 *, 0x1C));
    if (M2C_FIELD(arg0, s32 *, 0x1A0) == 1) {
        M2C_FIELD(arg0, s32 *, 0x154) |= 1;
    }
    M2C_FIELD(arg0, f32 *, 0x150) = M2C_FIELD(arg1, f32 *, 0x20);
    if (M2C_FIELD(arg0, s32 *, 0x19C) == 0) {
        set_field_b8__14TObjEnePanarmsFPvs(arg0, 0);
        begin_photon_summon_camera(arg0, 4);
        M2C_FIELD(arg0, s32 *, 0x19C) = 1;
        M2C_FIELD(arg0, s16 *, 0x198) = 0;
        M2C_FIELD(arg0, s32 *, 0x1A4) = 1;
        {
        Vec_801AE1F8 pos = M2C_FIELD(arg0, Vec_801AE1F8 *, 0x38);
        pos.y += lbl_805DC258;
        mem = __nw__7TObjectFUl(0xD0);
        if (mem != NULL) {
            TPhotonMagicSquare__ct(mem, arg0, 3, &pos, 0xAA, lbl_805DC234);
        }
        }
        spawn_photon_blast_attachment_effects(arg0, 3);
        play_cue_stream_file(lbl_80446EE0);
    } else {
        spawn_photon_blast_opening_effects(3, M2C_FIELD(arg0, u16 *, 0x17C));
        play_cue_stream_file(lbl_80446EEC);
    }
    return arg0;
}

}
