#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_801094B0(u32 arg0);
M2C_UNK invoke_menu_callback__10TObjPlayerFPv();

void TObjPlayer__sub_801094B0(u32 arg0) {
    if (arg0 != 0U) {
        invoke_menu_callback__10TObjPlayerFPv();
    }
}

}
