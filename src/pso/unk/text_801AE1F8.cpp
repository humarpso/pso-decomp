#include "types.h"
#include "pso/misc/PhotonBlastSummon.h"
#include "pso/misc/TLobby_802268F4.h"
#include "pso/misc/obj_band.h"
#include "pso/unk/text_801AE1F8.h"
#include "pso/system/vector.h"
#include "pso/misc/TUnk_804C3248.h"
#include "pso/misc/TPhotonPilla.h"
#include "pso/object/TObjMotion.h"
#include "pso/enemy/TObjEnePanarms.h"
#include "pso/misc/TOKeyMachine01.h"
#include "pso/player/TObjPlayer.h"

struct Vec_801AE1F8 { f32 x, y, z; };

extern "C" {
void *find_entity_by_id(u16 id);
s32 init_collision_body_parts(void *, void *, int);
s32 spawn_photon_blast_attachment_effects(void *, s32);
u8 *TPhotonMagicSquare__ct(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, f32 farg0);
void sub_801ADC7C__12TPhotonPillaFv(void *, u8);
u8 *TPhotonRainbow__ct(void *, void *, void *, s32);
void *__nw__7TObjectFUl(u32);
extern u8 lbl_80446EE0[];
extern u8 lbl_80446EEC[];
extern s32 lbl_805D3518;
extern u8 *photon_blast_shared_resource;
extern const f32 lbl_805DC234;
extern const f32 lbl_805DC258;
extern "C" void vfunc_6__13TUnk_804B9870FPsl();
extern "C" void vfunc_13__13TUnk_804AF8A0Fl();
extern "C" void vfunc_12__13TUnk_804B9870Fv();
extern "C" void vfunc_9__13TUnk_804B9870Fv();
extern "C" void apply_object_set_data__13TUnk_804B9870FPv();
extern "C" void classify_actor_view_detail__13TUnk_804B9870Ffff();
extern "C" void enter_scene__13TUnk_804C3248Fv();
extern "C" void render__12TPhotonPillaFv();
extern "C" void render_shadows__7TObjectFv();
extern "C" void reset_movement__10TObjPlayerFv();
extern "C" void update_if_active__13TUnk_804C3248Fv();
extern "C" void update_object_view_visibility__13TUnk_804B9870Fff();
extern "C" void run_task__12TPhotonPillaFv();
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
    (void *)&render__12TPhotonPillaFv, (void *)&render_shadows__7TObjectFv, (void *)&vfunc_6__13TUnk_804B9870FPsl, (void *)&apply_object_set_data__13TUnk_804B9870FPv,
    (void *)&reset_movement__10TObjPlayerFv, (void *)&vfunc_9__13TUnk_804B9870Fv, (void *)&update_object_view_visibility__13TUnk_804B9870Fff, (void *)&classify_actor_view_detail__13TUnk_804B9870Ffff,
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
    VecCopy((Vec *)(arg0 + 0x38), (const Vec *)arg1);
    ((TPhotonPilla *)arg0)->m_17c = *(u16 *)((s8 *)arg1 + 0xC);
    init_collision_body_parts(arg0, (void *)lbl_804C3A58, 1);
    ((TUnk_804AF8A0 *)arg0)->refresh_collision_body_centers();
    ((TObjPlayer *)arg0)->reset_photon_effect();
    ((TPhotonPilla *)arg0)->m_190 = (u8 *)find_entity_by_id(((TPhotonPilla *)arg0)->m_17c);
    temp_r3 = ((TPhotonPilla *)arg0)->m_190;
    if (temp_r3 != NULL) {
        ((TPhotonPilla *)arg0)->rotation_y = *(s32 *)((s8 *)temp_r3 + 0x60);
    }
    *(s32 *)((s8 *)arg0 + 0x34) = *(s32 *)((s8 *)(*(u8 **)((s8 *)photon_blast_shared_resource + 0x42C)) + 0x38);
    ((TPhotonPilla *)arg0)->texture_id = *(s32 *)((s8 *)(*(u8 **)((s8 *)photon_blast_shared_resource + 0x42C)) + 0x3C);
    ((TObjPlayer *)arg0)->set_field_d8((s32)lbl_804C3A38);
    ((TObjPlayer *)arg0)->set_field_dc(*(s32 *)((s8 *)photon_blast_shared_resource + 0x430));
    ((TPhotonPilla *)arg0)->m_b8 = 1;
    set_animation__10TObjPlayerFPvs(arg0, ((TPhotonPilla *)arg0)->m_b8);
    ((TObjMotion *)arg0)->set_field_b8(((TPhotonPilla *)arg0)->m_b8);
    ((TPhotonPilla *)arg0)->m_198 = 1;
    ((TPhotonPilla *)arg0)->m_19c = *(s32 *)((s8 *)arg1 + 0x10);
    *(s32 *)((s8 *)arg0 + 0x1A0) = *(s32 *)((s8 *)arg1 + 0x14);
    ((TPhotonPilla *)arg0)->m_1a4 = 0;
    ((TPhotonPilla *)arg0)->m_134 = 4;
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
    sub_801ADC7C__12TPhotonPillaFv(arg0, *(u8 *)((s8 *)arg1 + 0x1C));
    if (*(s32 *)((s8 *)arg0 + 0x1A0) == 1) {
        *(s32 *)((s8 *)arg0 + 0x154) |= 1;
    }
    ((TPhotonPilla *)arg0)->m_150 = *(f32 *)((s8 *)arg1 + 0x20);
    if (((TPhotonPilla *)arg0)->m_19c == 0) {
        ((TObjMotion *)arg0)->set_field_b8(0);
        ((TUnk_804C3248 *)arg0)->begin_photon_summon_camera(4);
        ((TPhotonPilla *)arg0)->m_19c = 1;
        ((TPhotonPilla *)arg0)->m_198 = 0;
        ((TPhotonPilla *)arg0)->m_1a4 = 1;
        {
        Vec_801AE1F8 pos = *(Vec_801AE1F8 *)((s8 *)arg0 + 0x38);
        pos.y += lbl_805DC258;
        mem = __nw__7TObjectFUl(0xD0);
        if (mem != NULL) {
            TPhotonMagicSquare__ct((u8 *)mem, (s32)arg0, (s32)(3), (s32)&pos, (s32)(0xAA), (f32)lbl_805DC234);
        }
        }
        spawn_photon_blast_attachment_effects(arg0, 3);
        play_cue_stream_file((s32)lbl_80446EE0);
    } else {
        spawn_photon_blast_opening_effects(3, ((TPhotonPilla *)arg0)->m_17c);
        play_cue_stream_file((s32)lbl_80446EEC);
    }
    return arg0;
}

}
