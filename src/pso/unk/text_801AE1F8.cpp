#include "types.h"
#include "pso/misc/TUnk_804C3248.h"
#include "pso/unk/TPhotonPilla.h"
#include "pso/object/TObjMotion.h"
#include "pso/enemy/TObjEnePanarms.h"
#include "pso/misc/TOKeyMachine01.h"
#include "pso/player/TObjPlayer.h"

struct Vec_801AE1F8 { f32 x, y, z; };

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
void set_animation__10TObjPlayerFPvs(void *, s16);
u8 *find_entity_by_id(u16);
s32 init_collision_body_parts(void *, void *, int);
s32 spawn_photon_blast_opening_effects(int, int);
s32 spawn_photon_blast_attachment_effects(void *, s32);
u8 *photon_base_ct(void *);
s32 TPhotonMagicSquare__ct(void *, void *, int, void *, int, f32);
void TObjPlayer__sub_801ADC7C(void *, u8);
u8 *TPhotonRainbow__ct(void *, void *, void *, s32);
s32 play_cue_stream_file(void *);
void *__nw__7TObjectFUl(u32);
extern u8 lbl_80446EE0[];
extern u8 lbl_80446EEC[];
extern s32 lbl_805D3518;
extern u8 *photon_blast_shared_resource;
extern const f32 lbl_805DC234;
extern const f32 lbl_805DC258;
extern "C" void TLobby__sub_801A1FD8();
extern "C" void vfunc_13__13TUnk_804AF8A0Fl();
extern "C" void vfunc_12__13TUnk_804B9870Fv();
extern "C" void vfunc_9__13TUnk_804B9870Fv();
extern "C" void apply_object_set_data();
extern "C" void classify_actor_view_detail();
extern "C" void destroy__12TPhotonPillaFPvs();
extern "C" void enter_scene__13TUnk_804C3248Fv();
extern "C" void render__12TPhotonPillaFv();
extern "C" void render_shadows__7TObjectFv();
extern "C" void reset_movement__10TObjPlayerFv();
extern "C" void update_if_active__13TUnk_804C3248Fv();
extern "C" void update_object_view_visibility__13TUnk_804B9870Fff();
extern "C" void run_task__12TPhotonPillaFv();
u8 *TPhotonPilla__ct(u8 *arg0, u8 *arg1);
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
    (void *)0x0, (void *)0x0, (void *)&destroy__12TPhotonPillaFPvs, (void *)&run_task__12TPhotonPillaFv,
    (void *)&render__12TPhotonPillaFv, (void *)&render_shadows__7TObjectFv, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&reset_movement__10TObjPlayerFv, (void *)&vfunc_9__13TUnk_804B9870Fv, (void *)&update_object_view_visibility__13TUnk_804B9870Fff, (void *)&classify_actor_view_detail,
    (void *)&vfunc_12__13TUnk_804B9870Fv, (void *)&vfunc_13__13TUnk_804AF8A0Fl, (void *)&enter_scene__13TUnk_804C3248Fv, (void *)&update_if_active__13TUnk_804C3248Fv,
    (void *)0x0,
};
u8 *TPhotonPilla__ct(u8 *arg0, u8 *arg1) {
    u8 *temp_r3;
    s32 state;
    void *mem;
    photon_base_ct(arg0);
    *(u8 **)((s8 *)arg0 + 0x18) = (u8 *)lbl_804C3ACC;
    *(s32 *)((s8 *)arg0 + 0) = lbl_805D3518;
    *(s32 *)((s8 *)arg0 + 0x138) = 3;
    VecCopy__FP3VecPC3Vec(arg0 + 0x38, arg1);
    *(u16 *)((s8 *)arg0 + 0x17C) = *(u16 *)((s8 *)arg1 + 0xC);
    init_collision_body_parts(arg0, (void *)lbl_804C3A58, 1);
    ((TUnk_804AF8A0 *)arg0)->refresh_collision_body_centers();
    ((TObjPlayer *)arg0)->reset_photon_effect();
    *(u8 **)((s8 *)arg0 + 0x190) = find_entity_by_id(*(u16 *)((s8 *)arg0 + 0x17C));
    temp_r3 = *(u8 **)((s8 *)arg0 + 0x190);
    if (temp_r3 != NULL) {
        *(s32 *)((s8 *)arg0 + 0x60) = *(s32 *)((s8 *)temp_r3 + 0x60);
    }
    *(s32 *)((s8 *)arg0 + 0x34) = *(s32 *)((s8 *)(*(u8 **)((s8 *)photon_blast_shared_resource + 0x42C)) + 0x38);
    *(s32 *)((s8 *)arg0 + 0x24) = *(s32 *)((s8 *)(*(u8 **)((s8 *)photon_blast_shared_resource + 0x42C)) + 0x3C);
    ((TObjPlayer *)arg0)->set_field_d8((s32)lbl_804C3A38);
    ((TObjPlayer *)arg0)->set_field_dc(*(s32 *)((s8 *)photon_blast_shared_resource + 0x430));
    *(s16 *)((s8 *)arg0 + 0xB8) = 1;
    set_animation__10TObjPlayerFPvs(arg0, *(s16 *)((s8 *)arg0 + 0xB8));
    ((TObjMotion *)arg0)->set_field_b8(*(s16 *)((s8 *)arg0 + 0xB8));
    *(s16 *)((s8 *)arg0 + 0x198) = 1;
    *(s32 *)((s8 *)arg0 + 0x19C) = *(s32 *)((s8 *)arg1 + 0x10);
    *(s32 *)((s8 *)arg0 + 0x1A0) = *(s32 *)((s8 *)arg1 + 0x14);
    *(s32 *)((s8 *)arg0 + 0x1A4) = 0;
    *(s32 *)((s8 *)arg0 + 0x134) = 4;
    ((TPhotonPilla *)arg0)->enter_scene();
    *(s32 *)((s8 *)arg0 + 0x1A8) = 0;
    state = TOKeyMachine01::get_global_state();
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
    *(s32 *)((s8 *)arg0 + 0x194) = 0;
    TObjPlayer__sub_801ADC7C(arg0, *(u8 *)((s8 *)arg1 + 0x1C));
    if (*(s32 *)((s8 *)arg0 + 0x1A0) == 1) {
        *(s32 *)((s8 *)arg0 + 0x154) |= 1;
    }
    *(f32 *)((s8 *)arg0 + 0x150) = *(f32 *)((s8 *)arg1 + 0x20);
    if (*(s32 *)((s8 *)arg0 + 0x19C) == 0) {
        ((TObjMotion *)arg0)->set_field_b8(0);
        ((TUnk_804C3248 *)arg0)->begin_photon_summon_camera(4);
        *(s32 *)((s8 *)arg0 + 0x19C) = 1;
        *(s16 *)((s8 *)arg0 + 0x198) = 0;
        *(s32 *)((s8 *)arg0 + 0x1A4) = 1;
        {
        Vec_801AE1F8 pos = *(Vec_801AE1F8 *)((s8 *)arg0 + 0x38);
        pos.y += lbl_805DC258;
        mem = __nw__7TObjectFUl(0xD0);
        if (mem != NULL) {
            TPhotonMagicSquare__ct(mem, arg0, 3, &pos, 0xAA, lbl_805DC234);
        }
        }
        spawn_photon_blast_attachment_effects(arg0, 3);
        play_cue_stream_file(lbl_80446EE0);
    } else {
        spawn_photon_blast_opening_effects(3, *(u16 *)((s8 *)arg0 + 0x17C));
        play_cue_stream_file(lbl_80446EEC);
    }
    return arg0;
}

}
