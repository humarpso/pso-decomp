#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s8 TObjPlayer__sub_801C5558(s32 arg0, s8 arg1, s32 arg2);

s8 TObjPlayer__sub_801C5558(s32 arg0, s8 arg1, s32 arg2) {
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

}
