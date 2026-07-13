#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render_selected_entry__17TWindowSubComCardFPvi(void *arg0, s32 arg1);
s32 TWindowSubComCard__sub_8007341C(void *);
M2C_UNK TWindowSubComCard__sub_8024503C(s32, u16 *, s32);
u16 *get_array_entry__20TWindowSubStatusDispFPvi(void *, s16);

void render_selected_entry__17TWindowSubComCardFPvi(void *arg0, s32 arg1) {
    u16 *temp_r3;

    temp_r3 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, M2C_FIELD(arg0, s16 *, 0x78));
    if (*temp_r3 & 1) {
        TWindowSubComCard__sub_8024503C(arg1, temp_r3, TWindowSubComCard__sub_8007341C(arg0));
    }
}

}
