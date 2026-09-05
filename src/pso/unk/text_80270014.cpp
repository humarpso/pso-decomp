#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, int);
void update_for_player_index__13TWindowLockOnFPvi(void *, s32);
s32 get_width__11TWindowCtrlFPv(void *);
void fn_80270014(u8 *arg0);
}

extern "C" {

void fn_80270014(u8 *arg0) {
    s32 temp_r31;
    temp_r31 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 1);
    update_for_player_index__13TWindowLockOnFPvi((void *) temp_r31, get_width__11TWindowCtrlFPv((void *) (arg0)));
}

}
