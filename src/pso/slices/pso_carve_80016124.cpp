#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80019248(void *);
s32 obj_testFlags30(void *, s32);
M2C_UNK fn_800FD2A4(u32, M2C_UNK, M2C_UNK, s32, M2C_UNK *, s16);
extern M2C_UNK lbl_805D7DB0;

void fn_80016124(void *arg0, u32 arg1, s32 arg2, s16 arg3) {
    if ((obj_testFlags30(arg0, 0x02000000) == 0) && (fn_80019248(arg0) == 0) && (arg1 != 0U)) {
        fn_800FD2A4(arg1, 0xFF00FF00, 0x14, arg2, &lbl_805D7DB0, (s16)arg3);
    }
}

}
