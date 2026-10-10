#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct RecoveredGlobal_801743DC_lbl_804B3BA8 {
    M2C_UNK value;
    u8 remaining[0x80];
};

struct RecoveredGlobal_801743DC___vt__14TORockCaveSS02 {
    M2C_UNK value;
    u8 remaining[0x3C];
};

extern "C" {
s32 TObjFish__sub_8001EDB0(void *, int);
s32 get_bml_model(void *, int);
M2C_UNK reset_photon_effect__10TObjPlayerFPv(void *);
M2C_UNK refresh_collision_body_centers(void *);
M2C_UNK init_collision_body_parts(void *, void *, int);
M2C_UNK TORockCaveSimple__ct();
extern RecoveredGlobal_801743DC_lbl_804B3BA8 cave_rock_collision_body_templates;
extern RecoveredGlobal_801743DC___vt__14TORockCaveSS02 __vt__14TORockCaveSS02;
extern s32 lbl_805D310C;
extern s32 cave_rock_resource_bundle;
extern const f32 lbl_805DB970;
u8 *TORockCaveSS02__ct(u8 *arg0, s32 arg1);
}

extern "C" {

typedef char RecoveredGlobal_801743DC_lbl_804B3BA8_size[sizeof(RecoveredGlobal_801743DC_lbl_804B3BA8) == 0x84 ? 1 : -1];
typedef char RecoveredGlobal_801743DC___vt__14TORockCaveSS02_size[sizeof(RecoveredGlobal_801743DC___vt__14TORockCaveSS02) == 0x40 ? 1 : -1];
u8 *TORockCaveSS02__ct(u8 *arg0, s32 arg1) {
    TORockCaveSimple__ct();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__14TORockCaveSS02.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D310C;
    ((VObj_18_1a504b *)(arg0))->m5(arg1);
    M2C_FIELD(arg0, s32 *, 0x34) = get_bml_model((void *) (cave_rock_resource_bundle), (int) (5));
    M2C_FIELD(arg0, s32 *, 0x24) = TObjFish__sub_8001EDB0((void *) (cave_rock_resource_bundle), (int) (5));
    M2C_FIELD(arg0, f32 *, 0xB0) = (f32) lbl_805DB970;
    init_collision_body_parts((void *) (arg0), (void *) (&cave_rock_collision_body_templates.value), (int) (1));
    refresh_collision_body_centers((void *) (arg0));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    return arg0;
}

}
