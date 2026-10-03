#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw_with_camera__6TLobbyFiiif(s32 arg0, s32 arg1, s32 arg2, f32 farg0);
M2C_UNK TCameraCtrl__sub_80068EF0();
M2C_UNK restore_full_screen_view__11TCameraCtrlFv();
M2C_UNK TLobby__sub_80228154(s32, s32, s32, f32);

void draw_with_camera__6TLobbyFiiif(s32 arg0, s32 arg1, s32 arg2, f32 farg0) {
    restore_full_screen_view__11TCameraCtrlFv();
    TLobby__sub_80228154(arg0, arg1, arg2, farg0);
    TCameraCtrl__sub_80068EF0();
}

}
