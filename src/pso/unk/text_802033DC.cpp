#include "types.h"
extern "C" {
extern s32 boss_area_id_table[];
s32 is_warp_excluded_area(s32 x);
}

extern "C" {

s32 is_warp_excluded_area(s32 x) {
    s32 i = 0;
    while (boss_area_id_table[i] != -1) {
        if (x == boss_area_id_table[i++]) return 1;
    }
    return 0;
}

}
