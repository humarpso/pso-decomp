#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowOptionCtrl__sub_80248940(void *arg0);
M2C_UNK TWindowSubItem__sub_80249058();
M2C_UNK get_array_entry__20TWindowSubStatusDispFPvi(void *, s16);

void TWindowOptionCtrl__sub_80248940(void *arg0) {
    get_array_entry__20TWindowSubStatusDispFPvi(arg0, M2C_FIELD(arg0, s16 *, 0x88));
    TWindowSubItem__sub_80249058();
}

}
