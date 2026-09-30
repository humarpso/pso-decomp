#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 get_global_state__14TOKeyMachine01Fv(void);
s32 TBoss3Volopt__sub_8022675C(s32, void *, s32, s32);
void fn_8015D5D4(u8 *arg0);
}

extern "C" {

void fn_8015D5D4(u8 *arg0) {
    if (!(*(s32 *)(arg0 + 0xD0) & 1)) {
        switch ((u32)get_global_state__14TOKeyMachine01Fv()) {
        case 0:
        case 18:
            TBoss3Volopt__sub_8022675C(0x42A04, arg0 + 0x38, 0, 0);
            break;
        case 1:
        case 2:
            TBoss3Volopt__sub_8022675C(0x4BC07, arg0 + 0x38, 0, 0);
            break;
        case 3:
        case 4:
        case 5:
            TBoss3Volopt__sub_8022675C(0x42807, arg0 + 0x38, 0, 0);
            break;
        case 6:
        case 7:
            TBoss3Volopt__sub_8022675C(0x4004BC00, arg0 + 0x38, 0, 0);
            break;
        case 8:
        case 9:
        case 10:
            TBoss3Volopt__sub_8022675C(0x4004BC07, arg0 + 0x38, 0, 0);
            break;
        case 16:
        case 17:
            TBoss3Volopt__sub_8022675C(0x4004BC00, arg0 + 0x38, 0, 0);
            break;
        }
    }
}

}
