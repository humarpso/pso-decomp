#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__15TOKeyJungleMainFv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470();
M2C_UNK TObjFish__sub_8001EDB0(s32, M2C_UNK);
M2C_UNK TObjFish__sub_8001EDC4(s32, M2C_UNK);
s32 TObjFish__sub_8001ED9C(s32, M2C_UNK);
M2C_UNK TParticleCtrl__sub_801E2EFC();
M2C_UNK TParticleCtrl__sub_801E2F20();
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK TObjFish__sub_803DA798();
M2C_UNK TObjDoor__sub_803DC894(s32, s32, f32);

extern s32 TOKeyJungleMain__data_805D65E0;

struct Base { char pad[0x18]; };
struct VObj : Base {
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

void render__15TOKeyJungleMainFv(u8 *arg0) {
    if (((VObj *)arg0)->m8(M2C_FIELD(arg0, f32 *, 0xC0), M2C_FIELD(arg0, f32 *, 0xC4)) == 1) {
        switch (M2C_FIELD(arg0, s32 *, 0xD4)) {
        case 0:
            TObjFish__sub_8001EDB0(TOKeyJungleMain__data_805D65E0, 1);
            TObjFish__sub_803DA798();
            TObjPlayer__sub_803D9B2C();
            TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
            TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
            TObjFish__sub_8001EDC4(TOKeyJungleMain__data_805D65E0, 1);
            TObjBoss2Tunnel__sub_803DB470();
            TObjPlayer__sub_803D9B78();
            return;
        case 1:
            TObjFish__sub_8001EDB0(TOKeyJungleMain__data_805D65E0, 1);
            TObjFish__sub_803DA798();
            TObjPlayer__sub_803D9B2C();
            TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
            TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
            TObjDoor__sub_803DC894(TObjFish__sub_8001EDC4(TOKeyJungleMain__data_805D65E0, 1), TObjFish__sub_8001ED9C(TOKeyJungleMain__data_805D65E0, 1), M2C_FIELD(arg0, f32 *, 0xE8));
            TParticleCtrl__sub_801E2EFC();
            TObjDoor__sub_803DC894(TObjFish__sub_8001EDC4(TOKeyJungleMain__data_805D65E0, 0), TObjFish__sub_8001ED9C(TOKeyJungleMain__data_805D65E0, 0), M2C_FIELD(arg0, f32 *, 0xEC));
            TParticleCtrl__sub_801E2F20();
            TObjPlayer__sub_803D9B78();
            break;
        }
    }
}

}
