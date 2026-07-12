#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__15TAdDrawLineCtrlFv(void *arg0);

s32 get_main_phase();
s32 TMainTask__sub_8001A430();
M2C_UNK set_depth_buffer_settings_2__Fv();
M2C_UNK fn_80141A30();
M2C_UNK TObjPlayer__sub_80141F1C();
s32 TObjPlayer__sub_8022A564();
M2C_UNK render_nodes__7TObjectFv(void *);

void render__15TAdDrawLineCtrlFv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x28) == 0) {
        if (TObjPlayer__sub_8022A564() == 0) {
            set_depth_buffer_settings_2__Fv();
            goto block_5;
        }
    } else if ((get_main_phase() != 2) || (TMainTask__sub_8001A430() != 1)) {
block_5:
        TObjPlayer__sub_80141F1C();
        if ((u32) M2C_FIELD(arg0, u32 *, 0x20) != 0U) {
            render_nodes__7TObjectFv(M2C_FIELD(arg0, void **, 0x20));
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0x28) == 0) {
            fn_80141A30();
        }
    }
}

}
