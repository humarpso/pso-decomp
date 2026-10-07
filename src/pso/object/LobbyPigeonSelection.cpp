#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void select_lobby_pigeon_model(void *arg0);
s32 filter_lobby_pigeon_theme(void *);

void select_lobby_pigeon_model(void *arg0) {
    s32 temp_r3;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x8C) < 1) {
        M2C_FIELD(arg0, s32 *, 0xA0) = 0;
    } else {
        M2C_FIELD(arg0, s32 *, 0xA0) = 1;
    }
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x88);
    if (temp_r3 < 1) {
        M2C_FIELD(arg0, s32 *, 0xA4) = 0;
    } else if ((s32) M2C_FIELD(arg0, s32 *, 0xA0) == 0) {
        if (temp_r3 > 1) {
            M2C_FIELD(arg0, s32 *, 0xA4) = 3;
        } else {
            M2C_FIELD(arg0, s32 *, 0xA4) = 0xA;
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0xA4) = 5;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xA4) == filter_lobby_pigeon_theme(arg0)) {
        M2C_FIELD(arg0, s32 *, 0x98) = 3;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x98) = 0;
}

}
