#include "types.h"
#include "pso/misc/PhotonBlastSummon.h"
#include "pso/misc/TLobby_802268F4.h"
#include "pso/misc/TPhotonRainbow_801AE640.h"
#include "pso/misc/obj_band.h"
#include "pso/unk/text_801AB370.h"
#include "pso/system/vector.h"
#include "pso/misc/TUnk_804C3248.h"
#include "pso/misc/TPhotonFarlla.h"
#include "pso/object/TObjMotion.h"
#include "pso/enemy/TObjEnePanarms.h"
#include "pso/misc/TOKeyMachine01.h"
#include "pso/player/TObjPlayer.h"

struct Stack_801AB370 { f32 x, y, z; };

extern "C" {
void *find_entity_by_id(u16 id);
s32 init_collision_body_parts(void *, void *, int);
s32 spawn_photon_blast_attachment_effects(void *, s32);
s32 sub_801AAE6C__13TPhotonFarllaFv(void *, int);
}
u8 *construct_photon_magic_square_normal(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern "C" {
void *__nw__7TObjectFUl(int);
extern u8 lbl_80446D40[];
extern u8 lbl_80446D4C[];
extern s32 lbl_805D34E0;
extern u8 *photon_blast_shared_resource;
extern const f32 lbl_805DC15C;
extern "C" void vfunc_6__13TUnk_804B9870FPsl();
extern "C" void vfunc_13__13TUnk_804AF8A0Fl();
extern "C" void vfunc_12__13TUnk_804B9870Fv();
extern "C" void vfunc_9__13TUnk_804B9870Fv();
extern "C" void apply_object_set_data__13TUnk_804B9870FPv();
extern "C" void classify_actor_view_detail__13TUnk_804B9870Ffff();
extern "C" void enter_scene__13TUnk_804C3248Fv();
extern "C" void render__13TPhotonFarllaFv();
extern "C" void render_shadows__7TObjectFv();
extern "C" void reset_movement__10TObjPlayerFv();
extern "C" void run_task__13TPhotonFarllaFv();
extern "C" void update_if_active__13TUnk_804C3248Fv();
extern "C" void update_object_view_visibility__13TUnk_804B9870Fff();
#pragma push
#pragma opt_propagation off
void *photon_blast_farlla_params[8] = {
    (void *)0x30000, (void *)0x0, (void *)0x3f800000, (void *)0x0,
    (void *)0x10000, (void *)0x8, (void *)0x3f800000, (void *)0x0,
};
void *lbl_804C3538[11] = {
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x432a0000,
    (void *)0x41f00000, (void *)0x0, (void *)0x2003, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0,
};
void *lbl_804C3564[17] = {
    (void *)0x0, (void *)0x0, (void *)&destroy__13TPhotonFarllaFPvs, (void *)&run_task__13TPhotonFarllaFv,
    (void *)&render__13TPhotonFarllaFv, (void *)&render_shadows__7TObjectFv, (void *)&vfunc_6__13TUnk_804B9870FPsl, (void *)&apply_object_set_data__13TUnk_804B9870FPv,
    (void *)&reset_movement__10TObjPlayerFv, (void *)&vfunc_9__13TUnk_804B9870Fv, (void *)&update_object_view_visibility__13TUnk_804B9870Fff, (void *)&classify_actor_view_detail__13TUnk_804B9870Ffff,
    (void *)&vfunc_12__13TUnk_804B9870Fv, (void *)&vfunc_13__13TUnk_804AF8A0Fl, (void *)&enter_scene__13TUnk_804C3248Fv, (void *)&update_if_active__13TUnk_804C3248Fv,
    (void *)0x0,
};
u8 *TPhotonFarlla__ct(u8 *arg0, u8 *arg1) {
    Stack_801AB370 pos;
    u8 *e;
    void *p;
    photon_base_ct(arg0);
    *(u8 **)((s8 *)arg0 + 0x18) = (u8 *)lbl_804C3564;
    *(s32 *)((s8 *)arg0 + 0) = lbl_805D34E0;
    *(s32 *)((s8 *)arg0 + 0x138) = 0;
    VecCopy((Vec *)(arg0 + 0x38), (const Vec *)arg1);
    ((TPhotonFarlla *)arg0)->m_17c = *(u16 *)((s8 *)arg1 + 0xC);
    init_collision_body_parts(arg0, (u8 *)lbl_804C3538, 1);
    ((TUnk_804AF8A0 *)arg0)->refresh_collision_body_centers();
    ((TObjPlayer *)arg0)->reset_photon_effect();
    ((TPhotonFarlla *)arg0)->m_180 = (u8 *)find_entity_by_id(((TPhotonFarlla *)arg0)->m_17c);
    e = ((TPhotonFarlla *)arg0)->m_180;
    if (e != NULL) {
        ((TPhotonFarlla *)arg0)->rotation_y = *(s32 *)((s8 *)e + 0x60);
    }
    *(s32 *)((s8 *)arg0 + 0x34) = *(s32 *)((s8 *)(*(u8 **)((s8 *)photon_blast_shared_resource + 0x42C)) + 0x8);
    ((TPhotonFarlla *)arg0)->texture_id = *(s32 *)((s8 *)(*(u8 **)((s8 *)photon_blast_shared_resource + 0x42C)) + 0xC);
    ((TObjMotion *)arg0)->set_field_d8((s32) photon_blast_farlla_params);
    ((TObjMotion *)arg0)->set_field_dc(*(s32 *)((s8 *)photon_blast_shared_resource + 0x430));
    ((TPhotonFarlla *)arg0)->m_b8 = 1;
    set_animation__10TObjMotionFs(arg0, ((TPhotonFarlla *)arg0)->m_b8);
    ((TObjMotion *)arg0)->set_field_b8(((TPhotonFarlla *)arg0)->m_b8);
    ((TPhotonFarlla *)arg0)->m_194 = 1;
    ((TPhotonFarlla *)arg0)->m_198 = *(s32 *)((s8 *)arg1 + 0x10);
    *(s32 *)((s8 *)arg0 + 0x19C) = *(s32 *)((s8 *)arg1 + 0x14);
    ((TPhotonFarlla *)arg0)->m_1a0 = 0;
    ((TPhotonFarlla *)arg0)->m_134 = 1;
    ((TPhotonFarlla *)arg0)->enter_scene();
    *(s32 *)((s8 *)arg0 + 0x1A4) = 0;
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
    sub_801AAE6C__13TPhotonFarllaFv(arg0, *(u8 *)((s8 *)arg1 + 0x1C));
    if (*(s32 *)((s8 *)arg0 + 0x19C) == 1) {
        *(s32 *)((s8 *)arg0 + 0x154) |= 1;
    }
    ((TPhotonFarlla *)arg0)->m_150 = *(f32 *)((s8 *)arg1 + 0x20);
    if (((TPhotonFarlla *)arg0)->m_198 == 0) {
        ((TObjMotion *)arg0)->set_field_b8(0);
        ((TUnk_804C3248 *)arg0)->begin_photon_summon_camera(1);
        ((TPhotonFarlla *)arg0)->m_198 = 1;
        ((TPhotonFarlla *)arg0)->m_194 = 0;
        ((TPhotonFarlla *)arg0)->m_1a0 = 1;
        e = (u8 *)find_entity_by_id(((TPhotonFarlla *)arg0)->m_17c);
        if (e != NULL) {
            VecCopy((Vec *)&pos, (const Vec *)(e + 0x38));
            pos.y += lbl_805DC15C;
        }
        p = __nw__7TObjectFUl(0xD0);
        if (p != NULL) {
            construct_photon_magic_square_normal((u8 *)p, (s32)arg0, (s32)(0), (s32)&pos, (s32)(0x78));
        }
        spawn_photon_blast_attachment_effects(arg0, 0);
        play_cue_stream_file((s32)lbl_80446D40);
    } else {
        spawn_photon_blast_opening_effects(0, ((TPhotonFarlla *)arg0)->m_17c);
        play_cue_stream_file((s32)lbl_80446D4C);
    }
    return arg0;
}
}
#pragma pop
