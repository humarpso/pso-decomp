#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 find_item_by_id(s32);
u32 test_item_flags__10TObjPlayerFPvUi(s32, s32);
u16 get_id__13TItemProArmorFPv(s32);
s32 fn_802530D0(void *arg0);
}

extern "C" {

s32 fn_802530D0(void *arg0) {
    s32 temp_r3;
    s32 field;
    u32 diff;
    field = M2C_FIELD(arg0, s32 *, 0xA4);
    if (field == -1) {
        return 0;
    }
    temp_r3 = find_item_by_id(field);
    if (temp_r3 == 0) {
        return 0;
    }
    if (test_item_flags__10TObjPlayerFPvUi(temp_r3, 8) == 0U) {
        return 0;
    }
    diff = (u32) get_id__13TItemProArmorFPv(temp_r3) - (u32) (s32) M2C_FIELD(arg0, s16 *, 0x20);
    return (s32) ((u32) __cntlzw(diff) >> 5);
}

}
