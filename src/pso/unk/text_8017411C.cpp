#include "types.h"
#include "pso/unk/text_8017411C.h"
#include "pso/misc/TORockCaveSL02.h"
#include "pso/object/TObjMotion.h"
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

struct RecoveredGlobal_8017411C_lbl_804B3BA8 {
    s32 value;
    u8 remaining[0x80];
};

struct RecoveredGlobal_8017411C___vt__14TORockCaveSL02 {
    s32 value;
    u8 remaining[0x3C];
};

extern "C" {
s32 TObjFish__sub_8001EDB0(void *, s32);
s32 get_bml_model(void *, s32);
u32 init_collision_body_parts(void *, s32, s32);
void *TORockCaveSimple__ct(void *arg0);
extern RecoveredGlobal_8017411C_lbl_804B3BA8 cave_rock_collision_body_templates;
extern RecoveredGlobal_8017411C___vt__14TORockCaveSL02 __vt__14TORockCaveSL02;
extern s32 lbl_805D312C;
extern u8 *cave_rock_resource_bundle;
extern const f32 lbl_805DB970;
typedef char RecoveredGlobal_8017411C_lbl_804B3BA8_size[sizeof(RecoveredGlobal_8017411C_lbl_804B3BA8) == 0x84 ? 1 : -1];
typedef char RecoveredGlobal_8017411C___vt__14TORockCaveSL02_size[sizeof(RecoveredGlobal_8017411C___vt__14TORockCaveSL02) == 0x40 ? 1 : -1];
u8 *TORockCaveSL02__ct(u8 *arg0, s32 arg1) {
    TORockCaveSimple__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = &__vt__14TORockCaveSL02.value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D312C;
    ((VObj_18_1a504b *)(arg0))->m5(arg1);
    *(s32 *)((s8 *)arg0 + 0x34) = get_bml_model(cave_rock_resource_bundle, 3);
    ((TORockCaveSL02 *)arg0)->texture_id = TObjFish__sub_8001EDB0(cave_rock_resource_bundle, 3);
    ((TORockCaveSL02 *)arg0)->m_b0 = (f32) lbl_805DB970;
    init_collision_body_parts(arg0, (s32) ((u8 *)&cave_rock_collision_body_templates.value + 0x58), 1);
    ((TUnk_804AF8A0 *)arg0)->refresh_collision_body_centers();
    ((TObjPlayer *)arg0)->reset_photon_effect();
    return arg0;
}

}
