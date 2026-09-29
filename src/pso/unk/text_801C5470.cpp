#include "types.h"
extern "C" {
s32 calc_class_stat_boost_index__10TObjPlayerFici(s32, s32, s32);
void TObjPlayer__sub_801C5780(s32, s32, s32);
void fn_801C54F4(s32 arg0, s32 arg1, s32 arg2);
s32 fn_801C5470(s8 *counts, s32 level, s8 classId);
}

extern "C" {

s32 fn_801C5470(s8 *counts, s32 level, s8 classId) {
    s32 kind;
    s8 max;
    for (kind = 0; kind < 4; kind++) {
        if (kind != 2) {
            max = ((s8 (*)(s32, s8, s32))calc_class_stat_boost_index__10TObjPlayerFici)(level, classId, kind);
            if (kind < 4 && counts[kind] < max) {
                return 0;
            }
        }
    }
    return 1;
}
void fn_801C54F4(s32 arg0, s32 arg1, s32 arg2) {
    s32 i;
    for (i = 0; i < 4; i++) {
        s32 idx = calc_class_stat_boost_index__10TObjPlayerFici(arg1, arg2, i);
        TObjPlayer__sub_801C5780(arg0, idx, i);
    }
}

}
