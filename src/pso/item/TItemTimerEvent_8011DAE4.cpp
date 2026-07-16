#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TItemTimerEvent__sub_8011DAE4(void *arg0);
M2C_UNK TBoss3Volopt__sub_8003F108(s32);
s32 TObjPlayer__sub_802034B0();
M2C_UNK TObjectV8047c128_subtract_hp(s32, M2C_UNK);
s32 obj_isState3_324(s32);
s32 obj_testFlags30(s32, M2C_UNK);

void TItemTimerEvent__sub_8011DAE4(void *arg0) {
    TBoss3Volopt__sub_8003F108(M2C_FIELD(arg0, s32 *, 0x28));
    if ((TObjPlayer__sub_802034B0() == 1) && (obj_isState3_324(M2C_FIELD(arg0, s32 *, 0x28)) == 0) && (obj_testFlags30(M2C_FIELD(arg0, s32 *, 0x28), 0x800) == 0)) {
        TObjectV8047c128_subtract_hp(M2C_FIELD(arg0, s32 *, 0x28), 1);
    }
}

}
