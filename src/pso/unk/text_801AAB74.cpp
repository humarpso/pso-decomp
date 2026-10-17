#include "types.h"
#include "pso/misc/PhotonBlastSummon.h"
#include "pso/misc/TLobby_802268F4.h"
#include "pso/misc/TPhotonRainbow_801AE640.h"
#include "pso/misc/obj_band.h"
#include "pso/unk/text_801AAB74.h"
#include "pso/system/vector.h"
#include "pso/misc/TUnk_804C3248.h"
#include "pso/misc/TPhotonEstlla.h"
#include "pso/object/TObjMotion.h"
#include "pso/enemy/TObjEnePanarms.h"
#include "pso/misc/TOKeyMachine01.h"
#include "pso/player/TObjPlayer.h"

struct Stack_801AAB74 { f32 x, y, z; };

extern "C" {
void *find_entity_by_id(u16 id);
s32 spawn_photon_blast_attachment_effects(void *, s32);
s32 sub_801AA6F8__13TPhotonEstllaFv(void *, int);
u8 *construct_photon_magic_square_normal(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void *__nw__7TObjectFUl(int);
extern u8 lbl_80446D10[];
extern u8 lbl_80446D1C[];
extern u8 photon_estlla_param_table[];
extern s32 __vt__13TPhotonEstlla[];
extern s32 lbl_805D34D8;
extern u8 *photon_blast_shared_resource;
extern const f32 lbl_805DC140;
u8 *TPhotonEstlla__ct(u8 *arg0, u8 *arg1) {
    Stack_801AAB74 pos;
    u8 *e;
    void *p;
    photon_base_ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__13TPhotonEstlla;
    *(s32 *)((s8 *)arg0 + 0) = lbl_805D34D8;
    *(s32 *)((s8 *)arg0 + 0x138) = 1;
    VecCopy((Vec *)(arg0 + 0x38), (const Vec *)arg1);
    ((TPhotonEstlla *)arg0)->m_17c = *(u16 *)((s8 *)arg1 + 0xC);
    e = (u8 *)find_entity_by_id(((TPhotonEstlla *)arg0)->m_17c);
    if (e != NULL) {
        ((TPhotonEstlla *)arg0)->rotation_y = *(s32 *)((s8 *)e + 0x60);
    }
    *(s32 *)((s8 *)arg0 + 0x34) = *(s32 *)((s8 *)(*(u8 **)((s8 *)photon_blast_shared_resource + 0x42C)) + 0x98);
    ((TPhotonEstlla *)arg0)->texture_id = *(s32 *)((s8 *)(*(u8 **)((s8 *)photon_blast_shared_resource + 0x42C)) + 0x9C);
    ((TObjMotion *)arg0)->set_field_d8((s32) photon_estlla_param_table);
    ((TObjMotion *)arg0)->set_field_dc(*(s32 *)((s8 *)photon_blast_shared_resource + 0x430));
    ((TPhotonEstlla *)arg0)->m_b8 = 1;
    set_animation__10TObjMotionFs(arg0, ((TPhotonEstlla *)arg0)->m_b8);
    ((TObjMotion *)arg0)->set_field_b8(((TPhotonEstlla *)arg0)->m_b8);
    *(s16 *)&((TPhotonEstlla *)arg0)->m_190 = 1;
    *(s32 *)&((TPhotonEstlla *)arg0)->m_194 = *(s32 *)((s8 *)arg1 + 0x10);
    *(s32 *)&((TPhotonEstlla *)arg0)->m_198 = *(s32 *)((s8 *)arg1 + 0x14);
    *(s32 *)&((TPhotonEstlla *)arg0)->m_19c = 0;
    ((TPhotonEstlla *)arg0)->m_134 = 0;
    ((TPhotonEstlla *)arg0)->enter_scene();
    *(s32 *)&((TPhotonEstlla *)arg0)->m_1a0 = 0;
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
    sub_801AA6F8__13TPhotonEstllaFv(arg0, *(u8 *)((s8 *)arg1 + 0x1C));
    if (*(s32 *)&((TPhotonEstlla *)arg0)->m_198 == 1) {
        *(s32 *)((s8 *)arg0 + 0x154) |= 1;
    }
    ((TPhotonEstlla *)arg0)->m_150 = *(f32 *)((s8 *)arg1 + 0x20);
    if (*(s32 *)&((TPhotonEstlla *)arg0)->m_194 == 0) {
        ((TObjMotion *)arg0)->set_field_b8(0);
        ((TUnk_804C3248 *)arg0)->begin_photon_summon_camera(0);
        *(s32 *)&((TPhotonEstlla *)arg0)->m_194 = 1;
        *(s16 *)&((TPhotonEstlla *)arg0)->m_190 = 0;
        *(s32 *)&((TPhotonEstlla *)arg0)->m_19c = 1;
        e = (u8 *)find_entity_by_id(((TPhotonEstlla *)arg0)->m_17c);
        if (e != NULL) {
            pos.x = *(f32 *)((s8 *)e + 0x38);
            pos.y = lbl_805DC140 + *(f32 *)((s8 *)e + 0x3C);
            pos.z = *(f32 *)((s8 *)e + 0x40);
        }
        p = __nw__7TObjectFUl(0xD0);
        if (p != NULL) {
            construct_photon_magic_square_normal((u8 *)p, (s32)arg0, 1, (s32)&pos, 0x78);
        }
        spawn_photon_blast_attachment_effects(arg0, 1);
        play_cue_stream_file((s32)lbl_80446D10);
    } else {
        spawn_photon_blast_opening_effects(1, ((TPhotonEstlla *)arg0)->m_17c);
        play_cue_stream_file((s32)lbl_80446D1C);
    }
    return arg0;
}

}
