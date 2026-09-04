#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s8 calc_class_stat_boost_index__10TObjPlayerFici(s32 arg0, s8 arg1, s32 arg2);
u8 clamp_char_at__10TObjPlayerFPvi(s8 *arg0, s32 arg1);
s32 init_partial__10TObjPlayerFi(s32 arg0);
M2C_UNK fn_801C5454();

s8 calc_class_stat_boost_index__10TObjPlayerFici(s32 arg0, s8 arg1, s32 arg2) {
    s32 temp_r4;
    s8 var_r3;

    temp_r4 = arg0 + 1;
    var_r3 = 0;
    switch (arg1) {
    case 3:
        break;
    case 2:
        switch (arg2) {
        case 2:
            break;
        case 0:
            var_r3 = (temp_r4 / 11) + 2;
            break;
        case 1:
        case 3:
            var_r3 = (temp_r4 / 7) + 2;
            break;
        }
        break;
    case 4:
        switch (arg2) {
        case 2:
            break;
        case 0:
            var_r3 = (temp_r4 / 7) + 2;
            break;
        case 1:
            var_r3 = (temp_r4 / 9) + 2;
            break;
        case 3:
            var_r3 = (temp_r4 / 11) + 2;
            break;
        }
        break;
    case 5:
        switch (arg2) {
        case 2:
            break;
        case 0:
            var_r3 = (temp_r4 / 7) + 2;
            break;
        case 1:
            var_r3 = (temp_r4 / 11) + 2;
            break;
        case 3:
            var_r3 = (temp_r4 / 9) + 2;
            break;
        }
        break;
    case 9:
        switch (arg2) {
        case 2:
            break;
        case 0:
            var_r3 = (temp_r4 / 9) + 2;
            break;
        case 1:
            var_r3 = (temp_r4 / 10) + 2;
            break;
        case 3:
            var_r3 = (temp_r4 / 10) + 2;
            break;
        }
        break;
    }
    if ((var_r3 < 0) || (var_r3 > 0x14)) {
        return 0x14;
    }
    return var_r3;
}

u8 clamp_char_at__10TObjPlayerFPvi(s8 *arg0, s32 arg1) {
    s8 c = arg0[arg1];
    if (c < 0 || (s32)c > 20) {
        arg0[arg1] = 0;
    }
    return arg0[arg1];
}

s32 init_partial__10TObjPlayerFi(s32 arg0) {
    fn_801C5454();
    return arg0;
}

}
