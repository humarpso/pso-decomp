#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowShop__ct(void *arg0);
s32 get_camera_id__11TCameraCtrlFv();
M2C_UNK set_position_xy(void *, f32, f32);
M2C_UNK set_field_1c__6TLobbyFPvf(void *, f32);
M2C_UNK TWindowSubStatusDisp__sub_80267B18(void *);
M2C_UNK ensure_status_display__20TWindowSubStatusDispFPvi();

extern s32 lbl_805D39D0;
extern f32 lbl_805DD340;
extern f32 lbl_805DD344;

void TWindowShop__ct(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D39D0;
    ensure_status_display__20TWindowSubStatusDispFPvi();
    TWindowSubStatusDisp__sub_80267B18(arg0);
    set_field_1c__6TLobbyFPvf(arg0, lbl_805DD340);
    if (get_camera_id__11TCameraCtrlFv() > 2) {
        set_position_xy(arg0, lbl_805DD344, lbl_805DD344);
    }
    M2C_FIELD(arg0, s32 *, 0x88) = 0;
}

}
