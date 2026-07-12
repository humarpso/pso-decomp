#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_8012E32C(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803D929C(M2C_UNK, s32);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(u32);
M2C_UNK TObjContainerIdo__sub_803D96A8(M2C_UNK, s32);
u8 *TObjPlayer__sub_80100490(s32);
M2C_UNK TObjPlayer__sub_8010A050();
M2C_UNK TObjPlayer__sub_8023E480();
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();

void TObjPlayer__sub_8012E32C(u8 *arg0) {
    u32 temp_r31;
    u8 *temp_r3;

    temp_r3 = TObjPlayer__sub_80100490(M2C_FIELD(arg0, s32 *, 0x1C));
    if (temp_r3 != NULL) {
        temp_r31 = M2C_FIELD(temp_r3, u32 *, 0x188);
        if (temp_r31 != 0U) {
            TObjPlayer__sub_8010A050();
            TObjPlayer__sub_8023E480();
            TObjPlayer__sub_803D9B2C();
            TOHangerMachine01__sub_803D9C00(arg0 + 0x2C);
            TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x3C));
            TObjContainerIdo__sub_803D96A8(0, M2C_FIELD(arg0, s32 *, 0x38));
            TObjBoss2Tunnel__sub_803D929C(0, M2C_FIELD(arg0, s32 *, 0x40));
            TObjBoss2Tunnel__sub_803DB470(temp_r31);
            TObjPlayer__sub_803D9B78();
        }
    }
}

}
