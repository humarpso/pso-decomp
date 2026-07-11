#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss1Dragon__sub_8002A384(s16 arg0);

extern s32 enable_v2_features;
extern s32 TBoss1Dragon__data_805D4B38;
extern s16 TBoss1Dragon__data_805D4B3C;

void TBoss1Dragon__sub_8002A384(s16 arg0) {
    if ((s32) enable_v2_features != 0) {
        TBoss1Dragon__data_805D4B3C = arg0;
        TBoss1Dragon__data_805D4B38 = 1;
    }
}

}
