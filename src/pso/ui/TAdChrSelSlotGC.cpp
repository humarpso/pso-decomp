#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__15TAdChrSelSlotGCFv(void *arg0);

s32 get_state_flag__9TMainTaskFv();
M2C_UNK set_depth_buffer_settings_2__Fv();
M2C_UNK fn_80141A30();
s32 toggle_flag_9__10TObjPlayerFPv();
M2C_UNK TAdChrSelSlotGC__sub_802C7314(void *);
M2C_UNK abs__4cXyzCFv(M2C_UNK, M2C_UNK);

void render__15TAdChrSelSlotGCFv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x124) == 1) {
        if (get_state_flag__9TMainTaskFv() == 1) {
            return;
        }
        goto block_5;
    }
    if (toggle_flag_9__10TObjPlayerFPv() == 0) {
        set_depth_buffer_settings_2__Fv();
block_5:
        abs__4cXyzCFv(0, 8);
        abs__4cXyzCFv(1, 0xA);
        TAdChrSelSlotGC__sub_802C7314(arg0);
        abs__4cXyzCFv(0, 8);
        abs__4cXyzCFv(1, 6);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x124) == 0) {
            fn_80141A30();
        }
    }
}

}
