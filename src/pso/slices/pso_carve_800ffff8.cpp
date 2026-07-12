#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TItemData__sub_8010C52C(s32);
s16 TItemData__sub_8010C654(s32);
s32 TItemData__sub_8010C6A0(s32);
void fn_80100068(void);
void fn_8010006C(void);

void fn_800FFFF8(void *arg0, s32 arg1) {
    if (TItemData__sub_8010C6A0(arg1) != 0) {
        M2C_FIELD(arg0, s32 *, 0xDC) = (s32) (M2C_FIELD(arg0, s32 *, 0xDC) | 0x100);
        M2C_FIELD(arg0, s16 *, 0xE8) = TItemData__sub_8010C654(arg1);
    }
    if (TItemData__sub_8010C52C(arg1) != 0) {
        M2C_FIELD(arg0, s32 *, 0xDC) = (s32) (M2C_FIELD(arg0, s32 *, 0xDC) | 0x400);
    }
}
void fn_80100068(void) {  }
void fn_8010006C(void) {  }

}
