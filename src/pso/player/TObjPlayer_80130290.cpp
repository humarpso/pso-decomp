#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_80130290(u8 *arg0);
void TObjPlayer__sub_80130314(void *arg0);
void *TObjPlayer__sub_80130324(void *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(u32);
M2C_UNK TObjContainerIdo__sub_803D96A8(M2C_UNK, s32);
s32 TObjPlayer__sub_8011BADC();
M2C_UNK TObjPlayer__sub_8023E480(u32);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
void __ct__15TItemShootModelFPvPC3VecPC3Vecf(void *);

void TObjPlayer__sub_80130290(u8 *arg0) {
    if ((TObjPlayer__sub_8011BADC() != 0) && ((u32) M2C_FIELD(arg0, u32 *, 0x58) != 0U) && ((u32) M2C_FIELD(arg0, u32 *, 0x5C) != 0U)) {
        TObjPlayer__sub_803D9B2C();
        TObjPlayer__sub_8023E480(M2C_FIELD(arg0, u32 *, 0x5C));
        TOHangerMachine01__sub_803D9C00(arg0 + 0x1C);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x2C));
        TObjContainerIdo__sub_803D96A8(0, M2C_FIELD(arg0, s32 *, 0x28));
        TObjBoss2Tunnel__sub_803DB470(M2C_FIELD(arg0, u32 *, 0x58));
        TObjPlayer__sub_803D9B78();
    }
}

void TObjPlayer__sub_80130314(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(arg0, s32 *, 0x28) + 0xCCC);
}

extern M2C_UNK lbl_804A69C0[];

void *TObjPlayer__sub_80130324(void *arg0) {
    __ct__15TItemShootModelFPvPC3VecPC3Vecf(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A69C0;
    M2C_FIELD(arg0, u32 *, 0x28) = 0;
    return arg0;
}

}
