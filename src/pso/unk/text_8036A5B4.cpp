#include "types.h"
#include "pso/unk/text_8036A3CC.h"
#include "pso/unk/text_8036A5B4.h"

extern "C" {

u8 check_flag_index_set(s32 arg0) {
    s32 sp8;
    s32 *temp_r3;

    if (arg0 < 0) {
        return 0U;
    }
    if (arg0 >= 0x31) {
        return 0U;
    }
    temp_r3 = (s32 *)fn_8036A3CC(arg0, (u32 *)&sp8);
    if (temp_r3 == NULL) {
        return 0U;
    }
    return (u8) ((*temp_r3 & sp8) != 0);
}

}
