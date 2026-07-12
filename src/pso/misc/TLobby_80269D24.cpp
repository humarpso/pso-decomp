#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_window_mode_4__6TLobbyFPvii(void *arg0, M2C_UNK arg1, M2C_UNK arg2);
void update_window_mode_from_progress__6TLobbyFiPv(s32 arg0, void *arg1);
M2C_UNK TLobby__sub_80269CC0(void *, M2C_UNK, M2C_UNK, M2C_UNK);
f32 TWindowSubStatusDisp__sub_803D647C(f32);

void set_window_mode_4__6TLobbyFPvii(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    TLobby__sub_80269CC0(arg0, arg1, arg2, 4);
}

extern const f32 lbl_805DD238;

void update_window_mode_from_progress__6TLobbyFiPv(s32 arg0, void *arg1) {
    set_window_mode_4__6TLobbyFPvii((void *)(arg0), (M2C_UNK)(arg1), (M2C_UNK)((s32) TWindowSubStatusDisp__sub_803D647C((M2C_FIELD(arg1, f32 *, 4) - lbl_805DD238) / lbl_805DD238) + 2));
}

}
