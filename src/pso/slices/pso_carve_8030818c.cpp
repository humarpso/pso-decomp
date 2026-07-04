#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_801A6E60(void *, M2C_UNK);
M2C_UNK TAdVIConfigGC__sub_80307FEC();
u32 OSGetProgressiveMode();
u32 fn_8037CCE8();
extern s8 lbl_8050E3B8[];

s32 fn_8030818C(void) {
    if (fn_8037CCE8() == 0U) {
        TAdVIConfigGC__sub_80307FEC();
        return 0;
    }
    if ((OSGetProgressiveMode() != 1U) && (fn_801A6E60(lbl_8050E3B8 + 0x20, 2) == 0)) {
        TAdVIConfigGC__sub_80307FEC();
        return 0;
    }
    return 1;
}

}
