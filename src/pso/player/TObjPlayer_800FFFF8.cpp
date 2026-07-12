#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_item_flags__10TObjPlayerFPvi(void *arg0, s32 arg1);
void TObjPlayer__sub_80100068(void);
void TObjPlayer__sub_8010006C(void);
s32 TItemData__sub_8010C52C(s32);
s16 get_packed_value__9TItemDataFPv(s32);
s32 is_usable__9TItemDataFPv(s32);

void apply_item_flags__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    if (is_usable__9TItemDataFPv(arg1) != 0) {
        M2C_FIELD(arg0, s32 *, 0xDC) = (s32) (M2C_FIELD(arg0, s32 *, 0xDC) | 0x100);
        M2C_FIELD(arg0, s16 *, 0xE8) = get_packed_value__9TItemDataFPv(arg1);
    }
    if (TItemData__sub_8010C52C(arg1) != 0) {
        M2C_FIELD(arg0, s32 *, 0xDC) = (s32) (M2C_FIELD(arg0, s32 *, 0xDC) | 0x400);
    }
}
void TObjPlayer__sub_80100068(void) {  }
void TObjPlayer__sub_8010006C(void) {  }

}
