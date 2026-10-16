#include "types.h"
#include "pso/misc/TORockJungleS01.h"
#include "pso/object/TObjMapCsn.h"
#include "pso/player/TObjPlayer.h"

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct VBase_8029C214 { char pad[0x18]; };

struct VObj_8029C214 : VBase_8029C214 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual s32 m5(s32);
};

struct Inner_8029C214 { u8 pad[0x58]; s32 v; };

struct Data_8029C214 {
    u8 pad0[0x28];
    Inner_8029C214 a;
    u8 pad1[0xAC - 0x28 - 0x5C];
    s32 vec[3];
    u8 pad2[0xD0 - 0xB8];
    s32 vt[20];
};

struct Copy_8029C214 { u32 w[15]; };

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 refresh_collision_body_centers__13TUnk_804AF8A0Fv(void *);
s32 init_collision_body_parts(void *, void *, int);
s32 TORockCave__ct(void *);
s32 get_jungle_rock_texture_resource(s32 a);
extern "C" void vfunc_15__15TORockJungleL01Fv();
extern "C" void vfunc_14__15TORockJungleL01Fv();
extern "C" void TLobby__sub_801A1FD8();
extern "C" void draw_model__10TORockCaveFv();
extern "C" void run_task__15TORockJungleL01Fv();
extern "C" void vfunc_13__13TUnk_804AF8A0Fl();
extern "C" void vfunc_12__13TUnk_804B9870Fv();
extern "C" void vfunc_9__13TUnk_804B9870Fv();
extern "C" void apply_object_set_data();
extern "C" void classify_actor_view_detail();
extern "C" void destroy__15TORockJungleL01Fs();
extern "C" u8 lbl_80465788[];
extern "C" u8 lbl_8046579C[];
extern "C" u8 lbl_804657B4[];
extern "C" u8 lbl_804657C8[];
extern "C" u8 lbl_804657E0[];
extern "C" u8 lbl_804657F4[];
extern "C" u8 bm_o_rock_jungle_motion_names[];
extern "C" void release_member_90__10TObjPlayerFv();
extern "C" void render_shadows__7TObjectFv();
extern "C" void update_object_view_visibility__13TUnk_804B9870Fff();
extern void *bm_o_rock_jungle_model_names[6];
extern s32 lbl_805D3D44;
extern const f32 lbl_805DDD1C;
u8 *TORockJungleL01__ct(u8 *arg0, s32 arg1);
}

extern "C" {

void *bm_o_rock_jungle_model_names[6] = {
    (void *)&lbl_80465788, (void *)&lbl_8046579C, (void *)&lbl_804657B4, (void *)&lbl_804657C8,
    (void *)&lbl_804657E0, (void *)0x0,
};
void *TORockJungleS01_resource_descriptor[4] = {
    (void *)&lbl_804657F4, (void *)&bm_o_rock_jungle_model_names, (void *)&bm_o_rock_jungle_motion_names, (void *)0x50000,
};
void *rock_jungle_collision_body_parts[33] = {
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x40a00000,
    (void *)0x0, (void *)0x0, (void *)0x10003, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x41000000, (void *)0x41400000,
    (void *)0x1, (void *)0x10003, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x41200000, (void *)0x41a00000, (void *)0x1,
    (void *)0x10003, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0,
};
void *rock_jungle_vec3_table[9] = {
    (void *)0x42000000, (void *)0x41a00000, (void *)0x41400000, (void *)0x42000000,
    (void *)0x41a00000, (void *)0x41400000, (void *)0x42000000, (void *)0x41a00000,
    (void *)0x41400000,
};
void *lbl_804DC448[16] = {
    (void *)0x0, (void *)0x0, (void *)&destroy__15TORockJungleL01Fs, (void *)&run_task__15TORockJungleL01Fv,
    (void *)&draw_model__10TORockCaveFv, (void *)&render_shadows__7TObjectFv, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&release_member_90__10TObjPlayerFv, (void *)&vfunc_9__13TUnk_804B9870Fv, (void *)&update_object_view_visibility__13TUnk_804B9870Fff, (void *)&classify_actor_view_detail,
    (void *)&vfunc_12__13TUnk_804B9870Fv, (void *)&vfunc_13__13TUnk_804AF8A0Fl, (void *)&vfunc_14__15TORockJungleL01Fv, (void *)&vfunc_15__15TORockJungleL01Fv,
};
#define rock_jungle_collision_body_parts (*(Inner_8029C214 *)rock_jungle_collision_body_parts)
u8 *TORockJungleL01__ct(u8 *arg0, s32 arg1) {
    TORockCave__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = (s32 *)lbl_804DC448;
    ((TObjPlayer *)(arg0 + 0xB4))->init_and_activate();
    *(s32 *)((s8 *)arg0 + 0) = lbl_805D3D44;
    ((VObj_8029C214 *)(arg0))->m5(arg1);
    *(u8 **)((s8 *)arg0 + 0x34) = TORockJungleS01::get_model(4);
    *(s32 *)((s8 *)arg0 + 0x24) = get_jungle_rock_texture_resource(4);
    *(f32 *)((s8 *)arg0 + 0xB0) = lbl_805DDD1C + *(f32 *)((s8 *)(*(void **)((s8 *)(*(u8 **)((s8 *)arg0 + 0x34)) + 4)) + 0x14);
    ((s32 (*)(void *, void *, int, f32))init_collision_body_parts)(arg0, &rock_jungle_collision_body_parts.v, 1, lbl_805DDD1C);
    refresh_collision_body_centers__13TUnk_804AF8A0Fv(arg0);
    ((TObjPlayer *)arg0)->reset_photon_effect();
    {
        Copy_8029C214 c = *(Copy_8029C214 *)arg1;
        VecCopy__FP3VecPC3Vec((u8 *)&c + 0x24, rock_jungle_vec3_table);
        *(s32 *)((s8 *)arg0 + 0xD4) = TObjMapCsn::create((s32)(&c));
    }
    ((TObjPlayer *)(arg0 + 0xB4))->activate_and_dispatch();
    return arg0;
}

}
