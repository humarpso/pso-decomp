#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TItemLoad__sub_8010FBD4(u8 *arg0);
M2C_UNK TItemLoad__sub_8010FF68();
s32 TObjPlayer__sub_8001BEF8(void *, int);

void TItemLoad__sub_8010FBD4(u8 *arg0) {
    TItemLoad__sub_8010FF68();
    if (TObjPlayer__sub_8001BEF8(arg0 + 0x1C, 1) != 0) {
        M2C_FIELD(arg0, s32 *, 0x18) = 1;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x18) = 4;
}

}
