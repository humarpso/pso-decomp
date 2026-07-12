#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TOTrapChainSaw__sub_802C9040(void *arg0);
void TOTrapChainSaw__sub_802C9090(void);
s32 TOTrapAncient02R__sub_80154D78(void *);
s32 check_demo_mode__10TObjPlayerFv();

void TOTrapChainSaw__sub_802C9040(void *arg0) {
    s32 temp_r31;

    if (check_demo_mode__10TObjPlayerFv() == 1) {
        temp_r31 = M2C_FIELD(arg0, s32 *, 0x60);
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) (temp_r31 + M2C_FIELD(arg0, s32 *, 0xD4));
        TOTrapAncient02R__sub_80154D78(arg0);
        M2C_FIELD(arg0, s32 *, 0x60) = temp_r31;
    }
}
void TOTrapChainSaw__sub_802C9090(void) {  }

}
