#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_locked__11TWindowMenuFPvi(void *arg0, s32 arg1);
s32 TWindowChoiceSetting__sub_801A6F38(void *, M2C_UNK, M2C_UNK, M2C_UNK);

extern s8 lbl_8050E208[];

s32 is_locked__11TWindowMenuFPvi(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, u16 *, 0x70) & 0x200) {
        return 0;
    }
    return TWindowChoiceSetting__sub_801A6F38(lbl_8050E208 + 0x160, arg1, 6, 1);
}

}
