#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8011BADC();
M2C_UNK fn_801E2EFC();
M2C_UNK fn_801E2F20();
M2C_UNK fn_8023E480(u32);
M2C_UNK fn_803D99F8(void *, M2C_UNK);
M2C_UNK fn_803D9B2C();
M2C_UNK fn_803D9B78();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(u32);

void fn_80121688(u8 *arg0) {
    if ((fn_8011BADC() != 0) && ((u32) M2C_FIELD(arg0, u32 *, 0x58) != 0U) && ((u32) M2C_FIELD(arg0, u32 *, 0x5C) != 0U)) {
        fn_803D9B2C();
        fn_801E2EFC();
        fn_8023E480(M2C_FIELD(arg0, u32 *, 0x5C));
        TOHangerMachine01__sub_803D9C00(arg0 + 0x1C);
        fn_803D99F8(arg0 + 0x28, 1);
        TObjBoss2Tunnel__sub_803DB470(M2C_FIELD(arg0, u32 *, 0x58));
        fn_801E2F20();
        fn_803D9B78();
    }
}

}
