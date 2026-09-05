#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma scheduling off
extern "C" {
M2C_UNK TObjPlayer__sub_803E20B0();
M2C_UNK setup_render__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_803E2224();
void TWindowSubStatusDisp__sub_803DEE6C(s32 arg0);
}

extern "C" {

void get_player__20TWindowSubStatusDispFv(void);
M2C_UNK TObjPlayer__sub_803E2248();

void TWindowSubStatusDisp__sub_803DEE6C(s32 arg0) {
    TObjPlayer__sub_803E20B0();
    if (arg0 != 0) {
        TObjPlayer__sub_803E2224();
        return;
    }
    setup_render__10TObjPlayerFv();
}

void get_player__20TWindowSubStatusDispFv(void) {
    TObjPlayer__sub_803E2248();
}

}
