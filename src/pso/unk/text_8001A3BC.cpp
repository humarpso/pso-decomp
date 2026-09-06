#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
u8 * __ct__15TAdDrawLineTaskFv(void *, M2C_UNK, s32, s32);
u8 *__nw__7TObjectFUl(M2C_UNK);
extern const f32 lbl_805D7DDC;
u8 *fn_8001A3BC(s32 arg0, u8 *arg1, s32 arg2);
}

extern "C" {

u8 *fn_8001A3BC(s32 arg0, u8 *arg1, s32 arg2) {
    u8 *temp_r3;
    u8 *var_r0;
    if ((arg1 != NULL) && (lbl_805D7DDC != M2C_FIELD(arg1, f32 *, 0x24))) {
        temp_r3 = (u8 *)(__nw__7TObjectFUl(0xB0));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(__ct__15TAdDrawLineTaskFv(temp_r3, arg0, (s32) arg1, arg2));
        }
        return var_r0;
    }
    return NULL;
}

}
