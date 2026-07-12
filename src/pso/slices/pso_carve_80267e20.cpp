#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TLobby__sub_8013AD38(void *);
u16 *get_array_entry__20TWindowSubStatusDispFPvi(void *, s16);
M2C_UNK TWindowSubComCard__sub_8024503C(s32, u16 *, s32);

void fn_80267E20(void *arg0, s32 arg1) {
    u16 *temp_r3;

    if (!(M2C_FIELD(arg0, u16 *, 0x70) & 0x80)) {
        temp_r3 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, M2C_FIELD(arg0, s16 *, 0x74));
        if (*temp_r3 & 1) {
            TWindowSubComCard__sub_8024503C(arg1, temp_r3, TLobby__sub_8013AD38(arg0));
        }
    }
}

}
