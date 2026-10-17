#include "types.h"
#include "pso/misc/TORockCaveBL02.h"
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

struct RecoveredGlobal_801739F8_lbl_804B3BA8 {
    s32 value;
    u8 remaining[0x80];
};

struct RecoveredGlobal_801739F8___vt__14TORockCaveBL02 {
    s32 value;
    u8 remaining[0x4C];
};

extern "C" {
s32 TObjFish__sub_8001EDB0(void *, s32);
s32 get_bml_model(void *, s32);
u32 init_collision_body_parts(void *, s32, s32);
void *TORockCaveBrakable__ct(void *arg0);
extern RecoveredGlobal_801739F8_lbl_804B3BA8 cave_rock_collision_body_templates;
extern RecoveredGlobal_801739F8___vt__14TORockCaveBL02 __vt__14TORockCaveBL02;
extern s32 lbl_805D3138;
extern u8 *cave_rock_resource_bundle;
extern const f32 lbl_805DB970;
u8 *TORockCaveBL02__ct(u8 *arg0, s32 arg1);
typedef char RecoveredGlobal_801739F8_lbl_804B3BA8_size[sizeof(RecoveredGlobal_801739F8_lbl_804B3BA8) == 0x84 ? 1 : -1];
typedef char RecoveredGlobal_801739F8___vt__14TORockCaveBL02_size[sizeof(RecoveredGlobal_801739F8___vt__14TORockCaveBL02) == 0x50 ? 1 : -1];
u8 *TORockCaveBL02__ct(u8 *arg0, s32 arg1) {
    s32 temp_r0;
    TORockCaveBrakable__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = &__vt__14TORockCaveBL02.value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D3138;
    ((VObj_18_1a504b *)(arg0))->m5(arg1);
    *(s32 *)((s8 *)arg0 + 0x34) = get_bml_model(cave_rock_resource_bundle, 0);
    ((TORockCaveBL02 *)arg0)->texture_id = TObjFish__sub_8001EDB0(cave_rock_resource_bundle, 0);
    ((TORockCaveBL02 *)arg0)->m_b0 = (f32) lbl_805DB970;
    init_collision_body_parts(arg0, (s32) ((u8 *)&cave_rock_collision_body_templates.value + 0x58), 1);
    ((TUnk_804AF8A0 *)arg0)->refresh_collision_body_centers();
    ((TObjPlayer *)arg0)->reset_photon_effect();
    *(s32 *)&((TORockCaveBL02 *)arg0)->m_b8 = (s32) ((TORockCaveBL02 *)arg0)->m_84;
    temp_r0 = *(s32 *)&((TORockCaveBL02 *)arg0)->m_b8;
    if ((temp_r0 < 0) || (temp_r0 >= 0x100)) {
        *(s32 *)&((TORockCaveBL02 *)arg0)->m_b8 = -1;
    }
    return arg0;
}

}
