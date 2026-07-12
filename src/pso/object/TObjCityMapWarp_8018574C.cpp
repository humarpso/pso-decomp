#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VObjBase { char pad[0x18]; };
struct VObj : VObjBase {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};

extern "C" {

void render__15TObjCityMapWarpFv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(s32);
s32 is_field88_zero__15TObjCityMapWarpFPv(void *);
M2C_UNK TParticleCtrl__sub_801E2EFC();
M2C_UNK TParticleCtrl__sub_801E2F20();
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK TObjFish__sub_803DA798(s32);
M2C_UNK TObjDoor__sub_803DC894(s32, s32, f32);

extern u8 *lbl_805D5B28;
extern s32 lbl_805D5B2C;
extern const f32 lbl_805DBC80;
extern const f32 lbl_805DBC84;

void render__15TObjCityMapWarpFv(u8 *arg0) {
    if (((VObj*)arg0)->m8(lbl_805DBC80, lbl_805DBC84) != 0) {
        TObjFish__sub_803DA798(lbl_805D5B2C);
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        if (is_field88_zero__15TObjCityMapWarpFPv(arg0) != 0) {
            TObjBoss2Tunnel__sub_803DB470(M2C_FIELD(M2C_FIELD(lbl_805D5B28, void **, 0x42C), s32 *, 0xD8));
            TParticleCtrl__sub_801E2EFC();
            TObjDoor__sub_803DC894(M2C_FIELD(M2C_FIELD(lbl_805D5B28, void **, 0x42C), s32 *, 0x38), M2C_FIELD(M2C_FIELD(lbl_805D5B28, void **, 0x430), s32 *, 0x3C), M2C_FIELD(arg0, f32 *, 0xFC));
            TParticleCtrl__sub_801E2F20();
        } else {
            TParticleCtrl__sub_801E2EFC();
            TObjDoor__sub_803DC894(M2C_FIELD(M2C_FIELD(lbl_805D5B28, void **, 0x42C), s32 *, 0x18), M2C_FIELD(M2C_FIELD(lbl_805D5B28, void **, 0x430), s32 *, 0x34), M2C_FIELD(arg0, f32 *, 0xFC));
            TParticleCtrl__sub_801E2F20();
        }
        TObjPlayer__sub_803D9B78();
    }
}

}
