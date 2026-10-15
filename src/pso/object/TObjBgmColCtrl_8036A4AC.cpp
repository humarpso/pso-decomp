#include "types.h"

extern "C" {

void update_all_zones__14TObjBgmColCtrlFi(s32 arg0);
s32 strcmp(s32, s32);
s32 fn_8036A514(s32);
s32 check_flag_index_set(s32);
s32 fn_8036A648(s32);

void update_all_zones__14TObjBgmColCtrlFi(s32 arg0) {
    s32 var_r31;

    var_r31 = 0;
    do {
        if (check_flag_index_set(var_r31) != 1) {
            if (strcmp(fn_8036A648(var_r31), arg0) == 0) {
                fn_8036A514(var_r31);
            }
        }
        var_r31 += 1;
    } while (var_r31 < 0x31);
}

}
