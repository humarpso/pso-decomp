#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 try_clear_flags_60__10TObjPlayerFi(s32 arg0);
s32 TObjPlayer__sub_800BFC58(s32 arg0);
s32 TObjPlayer__sub_80016D78();
s32 TObjPlayer__sub_80016FF8();
M2C_UNK clear_flags_60__10TObjPlayerFPv(s32);

s32 try_clear_flags_60__10TObjPlayerFi(s32 arg0) {
    if (TObjPlayer__sub_80016D78() != 0) {
        clear_flags_60__10TObjPlayerFPv(arg0);
        return 1;
    }
    return 0;
}

s32 TObjPlayer__sub_800BFC58(s32 arg0) {
    if (TObjPlayer__sub_80016FF8() != 0) {
        clear_flags_60__10TObjPlayerFPv(arg0);
        return 1;
    }
    return 0;
}

}
