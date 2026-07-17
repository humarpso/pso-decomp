#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void refresh_if_current_player__20TWindowSubStatusDispFPv(void *arg0);
M2C_UNK mark_selected__6TLobbyFv();

extern s32 lbl_805D53A0;

void refresh_if_current_player__20TWindowSubStatusDispFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, u16 *, 0xE4) == (s32) lbl_805D53A0) {
        mark_selected__6TLobbyFv();
    }
}

}
