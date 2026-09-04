#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void clear_selected_and_update_entry__14TWindowSubItemFPv(void *arg0);
M2C_UNK set_entry_state__20TWindowSubStatusDispFPvc(M2C_UNK, M2C_UNK);

void clear_selected_and_update_entry__14TWindowSubItemFPv(void *arg0) {
    M2C_FIELD(arg0, u16 *, 0x70) = (u16) (M2C_FIELD(arg0, u16 *, 0x70) & 0xFFFFFFFD);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x80) != 0U) {
        set_entry_state__20TWindowSubStatusDispFPvc(M2C_FIELD(arg0, M2C_UNK *, 0x80), 1);
    }
}

}
