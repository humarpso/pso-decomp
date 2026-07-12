#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_80121688(u8 *arg0);
void TObjPlayer__sub_80121708(void *arg0);
void *TObjPlayer__sub_80121718(void *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(u32);
s32 TObjPlayer__sub_8011BADC();
M2C_UNK TObjPlayer__sub_8023E480(u32);
M2C_UNK TObjPlayer__sub_803D99F8(void *, M2C_UNK);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK TParticleCtrl__sub_801E2EFC();
M2C_UNK TParticleCtrl__sub_801E2F20();
void __ct__15TItemShootModelFPvPC3VecPC3Vecf(void *);

void TObjPlayer__sub_80121688(u8 *arg0) {
    if ((TObjPlayer__sub_8011BADC() != 0) && ((u32) M2C_FIELD(arg0, u32 *, 0x58) != 0U) && ((u32) M2C_FIELD(arg0, u32 *, 0x5C) != 0U)) {
        TObjPlayer__sub_803D9B2C();
        TParticleCtrl__sub_801E2EFC();
        TObjPlayer__sub_8023E480(M2C_FIELD(arg0, u32 *, 0x5C));
        TOHangerMachine01__sub_803D9C00(arg0 + 0x1C);
        TObjPlayer__sub_803D99F8(arg0 + 0x28, 1);
        TObjBoss2Tunnel__sub_803DB470(M2C_FIELD(arg0, u32 *, 0x58));
        TParticleCtrl__sub_801E2F20();
        TObjPlayer__sub_803D9B78();
    }
}

void TObjPlayer__sub_80121708(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) + 0x3333);
}

extern M2C_UNK lbl_804A0AA8[];

void *TObjPlayer__sub_80121718(void *arg0) {
    __ct__15TItemShootModelFPvPC3VecPC3Vecf(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A0AA8;
    M2C_FIELD(arg0, u32 *, 0x30) = 0;
    return arg0;
}

}
