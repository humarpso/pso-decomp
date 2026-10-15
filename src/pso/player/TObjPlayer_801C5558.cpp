#include "types.h"

extern "C" {
void TObjPlayer__sub_801C5780(s32 arg0, s8 arg1, s32 arg2);
s32 consume_trap_count__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2);
}

extern "C" {

s8 calc_class_stat_boost_index__10TObjPlayerFici(s32 arg0, s8 arg1, s32 arg2);
u8 clamp_char_at__10TObjPlayerFPvi(s8 *arg0, s32 arg1);
s32 init_partial__10TObjPlayerFi(s32 arg0);
s32 clear_trap_counts();

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

s32 consume_trap_count__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2) {
    *(s8 *)((s8 *)(arg0 + arg2) + 0) = *(u8 *)((s8 *)(arg0 + arg2) + 0) - arg1;
    if ((s8) *(u8 *)((s8 *)(arg0 + arg2) + 0) < 0) {
        *(s8 *)((s8 *)(arg0 + arg2) + 0) = 0;
        return 0;
    }
    return 1;
}

u8 clamp_char_at__10TObjPlayerFPvi(s8 *arg0, s32 arg1) {
    s8 c = arg0[arg1];
    if (c < 0 || (s32)c > 20) {
        arg0[arg1] = 0;
    }
    return arg0[arg1];
}

void TObjPlayer__sub_801C5780(s32 arg0, s8 arg1, s32 arg2) {
    s8 var_r4;
    var_r4 = arg1;
    if ((var_r4 < 0) || (var_r4 > 0x14)) {
        var_r4 = 0x14;
    }
    *(s8 *)((s8 *)(arg0 + arg2) + 0) = var_r4;
}

s32 init_partial__10TObjPlayerFi(s32 arg0) {
    clear_trap_counts();
    return arg0;
}

}
