#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw_status_window__15TAdMcSelectMcGCFPv(u8 *arg0);
void render__15TAdMcSelectMcGCFv(void *arg0);
M2C_UNK TWindowSubComCard__sub_803DEECC(void *, f32);
M2C_UNK TWindowSubStatusDisp__sub_803DEE6C(int);
M2C_UNK TWindowSubStatusDisp__sub_803DF160(int, int);
M2C_UNK fn_80141A30();
M2C_UNK get_player__20TWindowSubStatusDispFv();
s32 get_state_flag__9TMainTaskFv();
M2C_UNK init_xyz_limits__10TObjPlayerFv();
M2C_UNK reset_transform_state__10TObjPlayerFv();
M2C_UNK set_depth_buffer_settings_2__Fv();
M2C_UNK set_global_param__8TObjFishFi(void *);
s32 toggle_flag_9__10TObjPlayerFPv();

extern s32 TAdMcSelectMcGC__data_805D6C98;
extern const f32 lbl_805DF748;

void draw_status_window__15TAdMcSelectMcGCFPv(u8 *arg0) {
    TWindowSubStatusDisp__sub_803DEE6C((int) (1));
    set_global_param__8TObjFishFi((void *) (TAdMcSelectMcGC__data_805D6C98));
    TWindowSubStatusDisp__sub_803DF160((int) (0), (int) ((M2C_FIELD(arg0, s32 *, 0x120) << 0x18) | 0xFF0000 | 0xFFFF));
    TWindowSubComCard__sub_803DEECC((void *) (arg0 + 0x20), (f32) (lbl_805DF748));
    get_player__20TWindowSubStatusDispFv();
}

void render__15TAdMcSelectMcGCFv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) == 1) {
        if (get_state_flag__9TMainTaskFv() == 1) {
            return;
        }
        goto block_5;
    }
    if (toggle_flag_9__10TObjPlayerFPv() == 0) {
        set_depth_buffer_settings_2__Fv();
block_5:
        init_xyz_limits__10TObjPlayerFv();
        draw_status_window__15TAdMcSelectMcGCFPv((u8 *)(arg0));
        reset_transform_state__10TObjPlayerFv();
        if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) == 0) {
            fn_80141A30();
        }
    }
}

}
