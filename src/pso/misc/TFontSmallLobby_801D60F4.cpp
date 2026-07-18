#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_ready__15TFontSmallLobbyFPv(u8 *arg0);
void reset_targets__15TFontSmallLobbyFi(s32 arg0);
s32 get_state__15TFontSmallLobbyFPv(void *);
s32 get_field_04__15TFontSmallLobbyFPv(void *);
M2C_UNK check_flag_at_40__15TFontSmallLobbyFPv(s32);
M2C_UNK set_target_count__15TFontSmallLobbyFPvi(s32, M2C_UNK);
M2C_UNK set_target_index__15TFontSmallLobbyFPvi(s32, M2C_UNK);

extern const f32 lbl_805DC3D8;

s32 is_ready__15TFontSmallLobbyFPv(u8 *arg0) {
    if ((get_field_04__15TFontSmallLobbyFPv(arg0 + 0x4C) < 3) && (M2C_FIELD(arg0, f32 *, 0x3C) > lbl_805DC3D8) && (get_state__15TFontSmallLobbyFPv(arg0 + 0x4C) < 0)) {
        return 1;
    }
    return 0;
}

void reset_targets__15TFontSmallLobbyFi(s32 arg0) {
    set_target_index__15TFontSmallLobbyFPvi(arg0 + 0x4C, 0);
    set_target_count__15TFontSmallLobbyFPvi(arg0 + 0x4C, 0);
    check_flag_at_40__15TFontSmallLobbyFPv(arg0);
}

}
