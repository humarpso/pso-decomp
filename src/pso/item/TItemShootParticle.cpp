#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
void request_destroy__11TBoss4Type2FUi(u32);
s32 TObjParticle__sub_800870BC(s32, s32, s32, s32);
s32 TItemShootParticle__sub_8011B704(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

#pragma push
#pragma opt_propagation off
s32 TItemShootParticle__sub_8011B704(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_r31;
    if ((arg2 >= 0) && (arg2 < 2)) {
        temp_r31 = (arg2 * 4) + 0x58;
        request_destroy__11TBoss4Type2FUi(M2C_FIELD(arg0, M2C_UNK *, temp_r31));
        M2C_FIELD(arg0, M2C_UNK *, temp_r31) = TObjParticle__sub_800870BC((s32) (arg0 + 0x1C), (s32) (arg0 + 0x28), arg1, (s32) (u16) (M2C_FIELD(arg0, u16 *, 0x60) | 0x40));
        return M2C_FIELD(arg0, M2C_UNK *, temp_r31);
    }
    return 0;
}
#pragma pop

}
