#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw_string__9TLanguageFPvPvi(void *arg0, void *arg1, s32 arg2);

M2C_UNK fn_801A5778();
M2C_UNK fn_8038A058();
M2C_UNK fn_803DB05C(s32, u16, s16, s32);

void draw_string__9TLanguageFPvPvi(void *arg0, void *arg1, s32 arg2) {
    fn_801A5778();
    fn_803DB05C(arg2, M2C_FIELD(arg1, u16 *, 4), M2C_FIELD(arg1, s16 *, 0xA), M2C_FIELD(arg1, s32 *, 0));
    fn_8038A058();
}

}
