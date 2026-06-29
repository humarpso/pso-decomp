#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u32 TObjEneDD__sub_800BAC14();

void TObjEneRecon__sub_8031DDDC(void *arg0) {
    if (TObjEneDD__sub_800BAC14() != 0U) {
        M2C_FIELD(arg0, s32 *, 0x444) = (s32) (M2C_FIELD(arg0, s32 *, 0x444) | 2);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x444) = (s32) (M2C_FIELD(arg0, s32 *, 0x444) & 0xFFFFFFFD);
}

}
