#include "types.h"
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
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
s32 activate_and_dispatch__10TObjPlayerFPv(void *);
s32 init_and_activate__10TObjPlayerFPv(void *);
s32 reset_photon_effect__10TObjPlayerFPv(void *);
s32 refresh_collision_body_centers(void *);
s32 init_collision_body_parts(void *, void *, int);
s32 TORockCave__ct(void *);
s32 create__10TObjMapCsnFi(void *);
s32 get_jungle_rock_texture_resource(s32 a);
u8 *get_model__15TORockJungleS01Fi(s32 arg0);
extern "C" void TAdRayGC__sub_8029C054();
extern "C" void update_near_fade__12TBoss8DragonFPv();
extern "C" void TLobby__sub_801A1FD8();
extern "C" void draw_model__10TORockCaveFPv();
extern "C" void TORockJungleL01__sub_8029C030();
extern "C" void TObjPlayer__sub_80019568();
extern "C" void TObjRoomId__sub_801A1E2C();
extern "C" void TParticleCtrl__sub_801A2124();
extern "C" void apply_object_set_data();
extern "C" void classify_actor_view_detail();
extern "C" void destroy__15TORockJungleL01FPvs();
extern "C" u8 lbl_80465788[];
extern "C" u8 lbl_8046579C[];
extern "C" u8 lbl_804657B4[];
extern "C" u8 lbl_804657C8[];
extern "C" u8 lbl_804657E0[];
extern "C" u8 lbl_804657F4[];
extern "C" u8 lbl_805D3D38[];
extern "C" void release_member_90__10TObjPlayerFPv();
extern "C" void render_shadows__7TObjectFv();
extern "C" void update_object_view_visibility();
extern void *lbl_804DC378[6];
extern s32 lbl_805D3D44;
extern const f32 lbl_805DDD1C;
u8 *TORockJungleL01__ct(u8 *arg0, s32 arg1);
}

extern "C" {

void *lbl_804DC378[6] = {
    (void *)&lbl_80465788, (void *)&lbl_8046579C, (void *)&lbl_804657B4, (void *)&lbl_804657C8,
    (void *)&lbl_804657E0, (void *)0x0,
};
void *TORockJungleS01_resource_descriptor[4] = {
    (void *)&lbl_804657F4, (void *)&lbl_804DC378, (void *)&lbl_805D3D38, (void *)0x50000,
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
    (void *)0x0, (void *)0x0, (void *)&destroy__15TORockJungleL01FPvs, (void *)&TORockJungleL01__sub_8029C030,
    (void *)&draw_model__10TORockCaveFPv, (void *)&render_shadows__7TObjectFv, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&release_member_90__10TObjPlayerFPv, (void *)&TParticleCtrl__sub_801A2124, (void *)&update_object_view_visibility, (void *)&classify_actor_view_detail,
    (void *)&TObjRoomId__sub_801A1E2C, (void *)&TObjPlayer__sub_80019568, (void *)&update_near_fade__12TBoss8DragonFPv, (void *)&TAdRayGC__sub_8029C054,
};
#define rock_jungle_collision_body_parts (*(Inner_8029C214 *)rock_jungle_collision_body_parts)
u8 *TORockJungleL01__ct(u8 *arg0, s32 arg1) {
    TORockCave__ct(arg0);
    M2C_FIELD(arg0, s32 **, 0x18) = (s32 *)lbl_804DC448;
    init_and_activate__10TObjPlayerFPv(arg0 + 0xB4);
    M2C_FIELD(arg0, s32 *, 0) = lbl_805D3D44;
    ((VObj_8029C214 *)(arg0))->m5(arg1);
    M2C_FIELD(arg0, u8 **, 0x34) = get_model__15TORockJungleS01Fi(4);
    M2C_FIELD(arg0, s32 *, 0x24) = get_jungle_rock_texture_resource(4);
    M2C_FIELD(arg0, f32 *, 0xB0) = lbl_805DDD1C + M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x34), void **, 4), f32 *, 0x14);
    ((s32 (*)(void *, void *, int, f32))init_collision_body_parts)(arg0, &rock_jungle_collision_body_parts.v, 1, lbl_805DDD1C);
    refresh_collision_body_centers(arg0);
    reset_photon_effect__10TObjPlayerFPv(arg0);
    {
        Copy_8029C214 c = *(Copy_8029C214 *)arg1;
        VecCopy__FP3VecPC3Vec((u8 *)&c + 0x24, rock_jungle_vec3_table);
        M2C_FIELD(arg0, s32 *, 0xD4) = create__10TObjMapCsnFi(&c);
    }
    activate_and_dispatch__10TObjPlayerFPv(arg0 + 0xB4);
    return arg0;
}

}
