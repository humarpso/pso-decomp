#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjNpcCloakroomBase__vt88(s32 arg0);
s32 get_global_state__14TOKeyMachine01Fv();
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, s32, M2C_UNK, M2C_UNK);

void TObjNpcCloakroomBase__vt88(s32 arg0) {
    if (get_global_state__14TOKeyMachine01Fv() != 5) {
        TBoss3Volopt__sub_8022675C(0x40003804, arg0 + 0x38, 0, 0);
        return;
    }
    TBoss3Volopt__sub_8022675C(0x40003802, arg0 + 0x38, 0, 0);
}

}
