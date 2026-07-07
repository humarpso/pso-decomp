#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TAdRicoRing__sub_8001BEE8(void *, int);
s32 fn_8001BEF8(void *, int);
M2C_UNK fn_8001BF40(void *);
extern s32 lbl_805D5498;

void fn_8010F9EC(u8 *arg0) {
    if (fn_8001BEF8(arg0 + 0x1C, 4) != 0) {
        lbl_805D5498 = 0;
        TAdRicoRing__sub_8001BEE8(arg0 + 0x1C, 4);
    }
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    fn_8001BF40(arg0 + 0x1C);
}

}
