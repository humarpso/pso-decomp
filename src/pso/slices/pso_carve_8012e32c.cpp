#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 *fn_80100490(s32);
M2C_UNK fn_8010A050();
M2C_UNK fn_8023E480();
M2C_UNK fn_803D9214(M2C_UNK, s32);
M2C_UNK TObjBoss2Tunnel__sub_803D929C(M2C_UNK, s32);
M2C_UNK TObjContainerIdo__sub_803D96A8(M2C_UNK, s32);
M2C_UNK fn_803D9B2C();
M2C_UNK fn_803D9B78();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(u32);

void fn_8012E32C(u8 *arg0) {
    u32 temp_r31;
    u8 *temp_r3;

    temp_r3 = fn_80100490(M2C_FIELD(arg0, s32 *, 0x1C));
    if (temp_r3 != NULL) {
        temp_r31 = M2C_FIELD(temp_r3, u32 *, 0x188);
        if (temp_r31 != 0U) {
            fn_8010A050();
            fn_8023E480();
            fn_803D9B2C();
            TOHangerMachine01__sub_803D9C00(arg0 + 0x2C);
            fn_803D9214(0, M2C_FIELD(arg0, s32 *, 0x3C));
            TObjContainerIdo__sub_803D96A8(0, M2C_FIELD(arg0, s32 *, 0x38));
            TObjBoss2Tunnel__sub_803D929C(0, M2C_FIELD(arg0, s32 *, 0x40));
            TObjBoss2Tunnel__sub_803DB470(temp_r31);
            fn_803D9B78();
        }
    }
}

}
