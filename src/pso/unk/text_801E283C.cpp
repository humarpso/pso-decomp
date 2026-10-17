#include "types.h"
#include "pso/unk/text_801E283C.h"
#include "pso/system/date.h"

u8 calc_day_in_cycle(s32 *date) {
    u32 sp8;
    u32 var_r4;
    DateToSeconds((DateStamp *)date, (int *)&sp8);
    if (sp8 >= 0x5CB417D1U) {
        var_r4 = sp8 - 0x5CB417D1U;
        var_r4 = var_r4 % 0x26EE7FU;
    } else {
        var_r4 = 0x5CB417D1U - sp8;
        var_r4 = var_r4 % 0x26EE7FU;
        var_r4 = 0x26EE7FU - var_r4;
    }
    return (u8) (var_r4 / 86400U);
}
