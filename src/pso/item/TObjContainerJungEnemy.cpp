#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void load_models__22TObjContainerJungEnemyFPv(void *arg0);
void TObjContainerJungEnemy__vt78(void *arg0);

M2C_UNK TObjPlayer__sub_801B4A18(void *, M2C_UNK);

void TObjContainerJungEnemy__vt78(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    switch (temp_r0) {
    case 0:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x364) != 0) {
            TObjPlayer__sub_801B4A18(arg0, -1);
        }
    case 1:
        return;
    }
}

s32 TObjContainerJung__sub_8018D3B8(M2C_UNK);
s32 TObjContainerJung__sub_8018D3C0(M2C_UNK);
s32 TObjContainerJungEx__sub_8018D900(M2C_UNK);
s32 TObjContainerJungEx__sub_8018D93C(M2C_UNK);

void load_models__22TObjContainerJungEnemyFPv(void *arg0) {
    s32 var_r0;
    s32 temp_r3 = M2C_FIELD(arg0, s32 *, 0x88);
    if (temp_r3 < 0) {
        var_r0 = 0;
    } else {
        var_r0 = 1;
        if (temp_r3 <= 1) {
            var_r0 = temp_r3;
        }
    }
    switch (var_r0) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x368) = TObjContainerJung__sub_8018D3C0(0);
        M2C_FIELD(arg0, s32 *, 0x36C) = TObjContainerJung__sub_8018D3C0(1);
        M2C_FIELD(arg0, s32 *, 0x370) = TObjContainerJung__sub_8018D3C0(2);
        M2C_FIELD(arg0, s32 *, 0x374) = TObjContainerJung__sub_8018D3C0(3);
        M2C_FIELD(arg0, s32 *, 0x24) = TObjContainerJung__sub_8018D3B8(0);
        return;
    default:
    case 1:
        M2C_FIELD(arg0, s32 *, 0x368) = TObjContainerJungEx__sub_8018D93C(0);
        M2C_FIELD(arg0, s32 *, 0x36C) = TObjContainerJungEx__sub_8018D93C(1);
        M2C_FIELD(arg0, s32 *, 0x370) = TObjContainerJungEx__sub_8018D93C(2);
        M2C_FIELD(arg0, s32 *, 0x374) = TObjContainerJungEx__sub_8018D93C(3);
        M2C_FIELD(arg0, s32 *, 0x24) = TObjContainerJungEx__sub_8018D900(0);
        return;
    }
}

}
