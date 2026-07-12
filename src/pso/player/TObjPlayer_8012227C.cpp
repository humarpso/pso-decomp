#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_8012227C(u8 *arg0);
M2C_UNK TObjPlayer__sub_801208E0(void *, void *);
M2C_UNK TObjPlayer__sub_80120908();
M2C_UNK TObjPlayer__sub_80120BBC(void *, int);

void TObjPlayer__sub_8012227C(u8 *arg0) {
    s32 temp_r31;

    temp_r31 = M2C_FIELD(arg0, s32 *, 0xF4);
    TObjPlayer__sub_80120908();
    TObjPlayer__sub_801208E0(arg0, arg0 + 0x1F8);
    M2C_FIELD(arg0, s32 *, 0xF4) = (s32) M2C_FIELD(arg0, s32 *, 0x180);
    TObjPlayer__sub_80120BBC(arg0, 0x23);
    TObjPlayer__sub_801208E0(arg0, arg0 + 0x204);
    M2C_FIELD(arg0, s32 *, 0xF4) = temp_r31;
}

}
