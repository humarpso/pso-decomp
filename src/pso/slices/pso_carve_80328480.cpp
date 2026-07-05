#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TAdMcSelectGC__sub_80019DA8(void *, M2C_UNK, f32);
u32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK __ct__10TAdTitleGCFv(u32, void *, M2C_UNK);
extern f32 lbl_805DF6E0;

void fn_80328480(void *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0xA4) & 1)) {
        u32 temp_nw;
        if (((s32) M2C_FIELD(arg0, s32 *, 0x1C) == 0) && ((temp_nw = __nw__7TObjectFUl(0x138)) != 0U)) {
            __ct__10TAdTitleGCFv(temp_nw, arg0, 5);
        }
        TAdMcSelectGC__sub_80019DA8(arg0, 0x11, lbl_805DF6E0);
        M2C_FIELD(arg0, s32 *, 0xA4) = (s32) (M2C_FIELD(arg0, s32 *, 0xA4) | 1);
    }
}

}
