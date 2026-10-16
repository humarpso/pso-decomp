#include "types.h"
#include "pso/player/TObjPlayer.h"

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual s32 m5(s32);
};

struct RecoveredGlobal_80174698_lbl_804B3BA8 {
    s32 value;
    u8 remaining[0x80];
};

struct RecoveredGlobal_80174698___vt__13TORockCaveM02 {
    s32 value;
    u8 remaining[0x3C];
};

extern "C" {
s32 TObjFish__sub_8001EDB0(void *, s32);
s32 get_bml_model(void *, s32);
void refresh_collision_body_centers__13TUnk_804AF8A0Fv(void *);
u32 init_collision_body_parts(void *, s32, s32);
u8 * TORockCave__ct(void *);
extern RecoveredGlobal_80174698_lbl_804B3BA8 cave_rock_collision_body_templates;
extern RecoveredGlobal_80174698___vt__13TORockCaveM02 __vt__13TORockCaveM02;
extern s32 lbl_805D3118;
extern u8 *cave_rock_resource_bundle;
extern const f32 lbl_805DB970;
u8 *TORockCaveM02__ct(u8 *arg0, s32 arg1);
}

extern "C" {

typedef char RecoveredGlobal_80174698_lbl_804B3BA8_size[sizeof(RecoveredGlobal_80174698_lbl_804B3BA8) == 0x84 ? 1 : -1];
typedef char RecoveredGlobal_80174698___vt__13TORockCaveM02_size[sizeof(RecoveredGlobal_80174698___vt__13TORockCaveM02) == 0x40 ? 1 : -1];
u8 *TORockCaveM02__ct(u8 *arg0, s32 arg1) {
    TORockCave__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = &__vt__13TORockCaveM02.value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D3118;
    ((VObj_18_1a504b *)(arg0))->m5(arg1);
    *(s32 *)((s8 *)arg0 + 0x34) = get_bml_model(cave_rock_resource_bundle, 1);
    *(s32 *)((s8 *)arg0 + 0x24) = TObjFish__sub_8001EDB0(cave_rock_resource_bundle, 1);
    *(f32 *)((s8 *)arg0 + 0xB0) = (f32) lbl_805DB970;
    init_collision_body_parts(arg0, (s32) ((u8 *)&cave_rock_collision_body_templates.value + 0x2C), 1);
    refresh_collision_body_centers__13TUnk_804AF8A0Fv(arg0);
    ((TObjPlayer *)arg0)->reset_photon_effect();
    return arg0;
}

}
