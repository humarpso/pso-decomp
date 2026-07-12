#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjPlayer__sub_8022A564(void *arg0);
M2C_UNK clear_flag_9__7TObjectFv(void *);
s32 get_flag_9__7TObjectFv();
M2C_UNK set_flag_9__7TObjectFv(void *);

s32 TObjPlayer__sub_8022A564(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 4) & 0x400) {
        return 0;
    }
    if (get_flag_9__7TObjectFv() == 0) {
        set_flag_9__7TObjectFv(arg0);
        return 1;
    }
    clear_flag_9__7TObjectFv(arg0);
    return 0;
}

}
