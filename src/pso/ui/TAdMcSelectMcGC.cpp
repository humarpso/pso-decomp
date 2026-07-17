#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__15TAdMcSelectMcGCFv(void *arg0);

s32 get_state_flag__9TMainTaskFv();
M2C_UNK set_depth_buffer_settings_2__Fv();
M2C_UNK fn_80141A30();
M2C_UNK reset_transform_state__10TObjPlayerFv();
M2C_UNK init_xyz_limits__10TObjPlayerFv();
s32 toggle_flag_9__10TObjPlayerFPv();
M2C_UNK draw_status_window__15TAdMcSelectMcGCFPv(void *);

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
        draw_status_window__15TAdMcSelectMcGCFPv(arg0);
        reset_transform_state__10TObjPlayerFv();
        if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) == 0) {
            fn_80141A30();
        }
    }
}

}
