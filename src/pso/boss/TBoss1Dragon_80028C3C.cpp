#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss1Dragon__sub_80028C3C(s32 arg0, s32 arg1);
void TBoss1Dragon__sub_80028C74(s32 arg0, s32 arg1);
M2C_UNK TOTrapAncient01__sub_80226578(s32, s32, s32, M2C_UNK, M2C_UNK);
M2C_UNK fn_8022675C(s32, s32, M2C_UNK, M2C_UNK);

void TBoss1Dragon__sub_80028C3C(s32 arg0, s32 arg1) {
    TOTrapAncient01__sub_80226578(arg1, arg0, arg0 + 0x63C, 0, 0);
}

void TBoss1Dragon__sub_80028C74(s32 arg0, s32 arg1) {
    fn_8022675C(arg1, arg0 + 0x63C, 0, 0);
}

}
