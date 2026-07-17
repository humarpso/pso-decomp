#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__13TObjTombstoneFv(s32 arg0);
s32 TWindowSubStatusDisp__sub_8006F190(M2C_UNK);
M2C_UNK TObjTombstone__sub_80075340(s32);
M2C_UNK TObjTombstone__sub_800753DC(s32);
M2C_UNK update_render_flags__13TObjTombstoneFPv(s32);
s32 check_height_ready__13TObjTombstoneFPv();

void render__13TObjTombstoneFv(s32 arg0) {
    s32 temp_r3;

    if (check_height_ready__13TObjTombstoneFPv() != 0) {
        update_render_flags__13TObjTombstoneFPv(arg0);
        temp_r3 = TWindowSubStatusDisp__sub_8006F190(-1);
        switch (temp_r3) {
        case 2:
        case 3:
            TObjTombstone__sub_80075340(arg0);
            break;
        default:
            TObjTombstone__sub_800753DC(arg0);
            break;
        }
    }
}

}
