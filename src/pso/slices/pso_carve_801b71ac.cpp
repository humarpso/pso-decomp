#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK obj_clearFlags30(void *, int);
extern s32 lbl_805D55C0;

void clear_lobby_flag__10TObjPlayerFPv(void *arg0) {
    if ((s32) lbl_805D55C0 == 0) {
        obj_clearFlags30(arg0, 0x10000);
    }
}

}
