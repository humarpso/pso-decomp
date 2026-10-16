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

struct RecoveredGlobal_80174C14_lbl_804B3BA8 {
    s32 value;
    u8 remaining[0x80];
};

struct RecoveredGlobal_80174C14___vt__13TORockCaveS01 {
    s32 value;
    u8 remaining[0x3C];
};

extern "C" {
s32 TObjFish__sub_8001EDB0(void *, int);
s32 get_bml_model(void *, int);
s32 refresh_collision_body_centers(void *);
s32 init_collision_body_parts(void *, void *, int);
s32 TORockCave__ct();
extern RecoveredGlobal_80174C14_lbl_804B3BA8 cave_rock_collision_body_templates;
extern RecoveredGlobal_80174C14___vt__13TORockCaveS01 __vt__13TORockCaveS01;
extern s32 lbl_805D3104;
extern s32 cave_rock_resource_bundle;
extern const f32 lbl_805DB970;
u8 *TORockCaveS01__ct(u8 *arg0, s32 arg1);
}

extern "C" {

typedef char RecoveredGlobal_80174C14_lbl_804B3BA8_size[sizeof(RecoveredGlobal_80174C14_lbl_804B3BA8) == 0x84 ? 1 : -1];
typedef char RecoveredGlobal_80174C14___vt__13TORockCaveS01_size[sizeof(RecoveredGlobal_80174C14___vt__13TORockCaveS01) == 0x40 ? 1 : -1];
u8 *TORockCaveS01__ct(u8 *arg0, s32 arg1) {
    TORockCave__ct();
    *(s32 **)((s8 *)arg0 + 0x18) = &__vt__13TORockCaveS01.value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D3104;
    ((VObj_18_1a504b *)(arg0))->m5(arg1);
    *(s32 *)((s8 *)arg0 + 0x34) = get_bml_model((void *) (cave_rock_resource_bundle), (int) (2));
    *(s32 *)((s8 *)arg0 + 0x24) = TObjFish__sub_8001EDB0((void *) (cave_rock_resource_bundle), (int) (2));
    *(f32 *)((s8 *)arg0 + 0xB0) = (f32) lbl_805DB970;
    init_collision_body_parts((void *) (arg0), (void *) (&cave_rock_collision_body_templates.value), (int) (1));
    refresh_collision_body_centers((void *) (arg0));
    ((TObjPlayer *)arg0)->reset_photon_effect();
    return arg0;
}

}
