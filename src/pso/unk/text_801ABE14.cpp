#include "types.h"
#include "pso/misc/TUnk_804C3248.h"
#include "pso/misc/TPhotonGolla.h"
#include "pso/object/TObjMotion.h"
#include "pso/enemy/TObjEnePanarms.h"
#include "pso/misc/TOKeyMachine01.h"
#include "pso/player/TObjPlayer.h"

struct Stack_801ABE14 { f32 x, y, z; };

extern "C" {
u8 *photon_base_ct(void *);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
void set_animation__10TObjPlayerFPvs(void *, s16);
u8 *find_entity_by_id(u16);
s32 init_collision_body_parts(void *, void *, int);
s32 spawn_photon_blast_opening_effects(int, int);
s32 spawn_photon_blast_attachment_effects(void *, s32);
void sub_801AB688__12TPhotonGollaFv(void *);
void collect_hit_targets__12TPhotonGollaFPv(void *);
s32 TPhotonMagicSquare__ct(int, void *, int, void *, int, f32);
u8 *TPhotonRainbow__ct(u8 *arg0, s32 arg1_unused, s32 arg2);
s32 play_cue_stream_file(void *);
void *__nw__7TObjectFUl(int);
extern u8 lbl_80446DA8[];
extern u8 lbl_80446DB4[];
extern s32 lbl_805D34E8;
extern u8 *photon_blast_shared_resource;
extern const f32 lbl_805DC1A0;
extern const f32 lbl_805DC1A4;
extern "C" void TLobby__sub_801A1FD8();
extern "C" void vfunc_13__13TUnk_804AF8A0Fl();
extern "C" void vfunc_12__13TUnk_804B9870Fv();
extern "C" void vfunc_9__13TUnk_804B9870Fv();
extern "C" void apply_object_set_data();
extern "C" void classify_actor_view_detail();
extern "C" void destroy__12TPhotonGollaFPvs();
extern "C" void enter_scene__13TUnk_804C3248Fv();
extern "C" void render__12TPhotonGollaFv();
extern "C" void render_shadows__7TObjectFv();
extern "C" void reset_movement__10TObjPlayerFv();
extern "C" void run_task__12TPhotonGollaFv();
extern "C" void update_if_active__13TUnk_804C3248Fv();
extern "C" void update_object_view_visibility__13TUnk_804B9870Fff();
u8 *TPhotonGolla__ct(u8 *arg0, u8 *arg1);
#pragma push
#pragma opt_propagation off
void *lbl_804C35A8[8] = {
    (void *)0x30000, (void *)0x4, (void *)0x3f800000, (void *)0x0,
    (void *)0x10000, (void *)0xb, (void *)0x3f800000, (void *)0x0,
};
void *lbl_804C35C8[11] = {
    (void *)0x0, (void *)0xc1f00000, (void *)0x0, (void *)0x43fa0000,
    (void *)0x43fa0000, (void *)0x0, (void *)0x18007, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0,
};
void *lbl_804C35F4[17] = {
    (void *)0x0, (void *)0x0, (void *)&destroy__12TPhotonGollaFPvs, (void *)&run_task__12TPhotonGollaFv,
    (void *)&render__12TPhotonGollaFv, (void *)&render_shadows__7TObjectFv, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&reset_movement__10TObjPlayerFv, (void *)&vfunc_9__13TUnk_804B9870Fv, (void *)&update_object_view_visibility__13TUnk_804B9870Fff, (void *)&classify_actor_view_detail,
    (void *)&vfunc_12__13TUnk_804B9870Fv, (void *)&vfunc_13__13TUnk_804AF8A0Fl, (void *)&enter_scene__13TUnk_804C3248Fv, (void *)&update_if_active__13TUnk_804C3248Fv,
    (void *)0x0,
};
u8 *TPhotonGolla__ct(u8 *arg0, u8 *arg1) {
    Stack_801ABE14 pos;
    u8 *e;
    void *p;
    photon_base_ct(arg0);
    *(u8 **)((s8 *)arg0 + 0x18) = (u8 *)lbl_804C35F4;
    *(s32 *)((s8 *)arg0 + 0) = lbl_805D34E8;
    *(s32 *)((s8 *)arg0 + 0x138) = 2;
    VecCopy__FP3VecPC3Vec(arg0 + 0x38, arg1);
    *(u16 *)((s8 *)arg0 + 0x158) = *(u16 *)((s8 *)arg1 + 0xC);
    init_collision_body_parts(arg0, (u8 *)lbl_804C35C8, 1);
    ((TUnk_804AF8A0 *)arg0)->refresh_collision_body_centers();
    ((TObjPlayer *)arg0)->reset_photon_effect();
    *(s32 *)((s8 *)arg0 + 0x1A8) = 0;
    *(u8 **)((s8 *)arg0 + 0x1A4) = find_entity_by_id(*(u16 *)((s8 *)arg0 + 0x158));
    e = *(u8 **)((s8 *)arg0 + 0x1A4);
    if (e != NULL) {
        *(s32 *)((s8 *)arg0 + 0x60) = *(s32 *)((s8 *)e + 0x60);
    } else {
        *(s32 *)((s8 *)arg0 + 0x60) = 0;
    }
    *(s32 *)((s8 *)arg0 + 0x34) = *(s32 *)((s8 *)(*(u8 **)((s8 *)photon_blast_shared_resource + 0x42C)) + 0x48);
    *(s32 *)((s8 *)arg0 + 0x24) = *(s32 *)((s8 *)(*(u8 **)((s8 *)photon_blast_shared_resource + 0x42C)) + 0x4C);
    ((TObjPlayer *)arg0)->set_field_d8((s32) lbl_804C35A8);
    ((TObjPlayer *)arg0)->set_field_dc(*(s32 *)((s8 *)photon_blast_shared_resource + 0x430));
    *(s16 *)((s8 *)arg0 + 0xB8) = 1;
    set_animation__10TObjPlayerFPvs(arg0, *(s16 *)((s8 *)arg0 + 0xB8));
    ((TObjMotion *)arg0)->set_field_b8(*(s16 *)((s8 *)arg0 + 0xB8));
    *(s16 *)((s8 *)arg0 + 0x1B8) = 1;
    *(s32 *)((s8 *)arg0 + 0x1BC) = *(s32 *)((s8 *)arg1 + 0x10);
    *(s32 *)((s8 *)arg0 + 0x1C0) = *(s32 *)((s8 *)arg1 + 0x14);
    *(s32 *)((s8 *)arg0 + 0x1C4) = 0;
    *(s32 *)((s8 *)arg0 + 0x134) = 5;
    ((TPhotonGolla *)arg0)->enter_scene();
    *(s32 *)((s8 *)arg0 + 0x1C8) = 0;
    switch (TOKeyMachine01::get_global_state()) {
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
    *(s32 *)((s8 *)arg0 + 0x19C) = 0;
    collect_hit_targets__12TPhotonGollaFPv(arg0);
    ((void (*)(void *, int)) sub_801AB688__12TPhotonGollaFv)(arg0, *(u8 *)((s8 *)arg1 + 0x1C));
    if (*(s32 *)((s8 *)arg0 + 0x1C0) == 1) {
        *(s32 *)((s8 *)arg0 + 0x154) |= 1;
    }
    *(f32 *)((s8 *)arg0 + 0x150) = *(f32 *)((s8 *)arg1 + 0x20);
    if (*(s32 *)((s8 *)arg0 + 0x1BC) == 0) {
        ((TObjMotion *)arg0)->set_field_b8(0);
        ((TUnk_804C3248 *)arg0)->begin_photon_summon_camera(5);
        *(s32 *)((s8 *)arg0 + 0x1BC) = 1;
        *(s16 *)((s8 *)arg0 + 0x1B8) = 0;
        *(s32 *)((s8 *)arg0 + 0x1C4) = 1;
        e = find_entity_by_id(*(u16 *)((s8 *)arg0 + 0x158));
        if (e != NULL) {
            VecCopy__FP3VecPC3Vec(&pos, e + 0x38);
        }
        pos.y += lbl_805DC1A0;
        p = __nw__7TObjectFUl(0xD0);
        if (p != NULL) {
            TPhotonMagicSquare__ct((int) p, arg0, 3, &pos, 0x96, lbl_805DC1A4);
        }
        spawn_photon_blast_attachment_effects(arg0, 2);
        play_cue_stream_file(lbl_80446DA8);
    } else {
        spawn_photon_blast_opening_effects(2, *(u16 *)((s8 *)arg0 + 0x158));
        play_cue_stream_file(lbl_80446DB4);
    }
    return arg0;
}
#pragma pop

}
