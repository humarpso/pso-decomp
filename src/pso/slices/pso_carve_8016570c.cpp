#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TOKeyMachine01__sub_802034A8();
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

void fn_8016570C(void *arg0) {
    s32 temp_r0;
    s32 temp_r3;
    s32 temp_r3_2;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C);
    switch (temp_r0) {
    case 1:
        TBoss3Volopt__sub_8022675C(0x4005281F, 0, 0, 0);
        return;
    case 2:
        TBoss3Volopt__sub_8022675C(0x53F06, 0, 0, 0);
        return;
    case 3:
        temp_r3 = TOKeyMachine01__sub_802034A8();
        if ((temp_r3 != 0x10) && (temp_r3 != 0x11)) {
            TBoss3Volopt__sub_8022675C(0x52812, 0, 0, 0);
            return;
        }
        break;
    case 4:
        temp_r3_2 = TOKeyMachine01__sub_802034A8();
        if ((temp_r3_2 != 0x10) && (temp_r3_2 != 0x11)) {
            TBoss3Volopt__sub_8022675C(0x52813, 0, 0, 0);
            return;
        }
        break;
    case 5:
        TBoss3Volopt__sub_8022675C(0x4001C112, 0, 0, 0);
        return;
    case 6:
        TBoss3Volopt__sub_8022675C(0x4002A60B, 0, 0, 0);
        break;
    }
}

}
