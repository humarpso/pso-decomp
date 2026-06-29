#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 TItemObject__sub_80115D84();
extern s32 lbl_805D5550;

s16 fn_80117270(void) {
    return (s16) ((lbl_805D5550 * 0x32) + TItemObject__sub_80115D84());
}

}
