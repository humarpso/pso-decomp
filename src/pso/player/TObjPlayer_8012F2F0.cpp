#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_8012F2F0(void *arg0);
void TObjPlayer__sub_8012F344(s32 arg0);
u8 TItemProShield__sub_8010B734();
M2C_UNK TObjPlayer__sub_8010069C(s32);
M2C_UNK TObjPlayer__sub_80100EB4(void *, M2C_UNK);
M2C_UNK TObjPlayer__sub_80100FAC(void *);
s32 TObjPlayer__sub_80121200();

void TObjPlayer__sub_8012F2F0(void *arg0) {
    if (((s32) M2C_FIELD(arg0, s32 *, 0x1F8) != 0) && (TObjPlayer__sub_80121200() == 1)) {
        TObjPlayer__sub_80100FAC(arg0);
        TObjPlayer__sub_80100EB4(arg0, 0);
    }
}

void TObjPlayer__sub_8012F344(s32 arg0) {
    if (TItemProShield__sub_8010B734() == 5) {
        TObjPlayer__sub_8010069C(arg0);
    }
}

}
