#include "types.h"

extern "C" {
extern u32 lbl_804FCF34[];
u32 fn_803F4D10(u32 crc, u8 *buf, s32 len);
u32 calc_crc32(s32 arg0, s32 arg1);
#pragma push
#pragma scheduling off
#pragma peephole off
#pragma optimization_level 2
u32 fn_803F4D10(u32 crc, u8 *buf, s32 len) {
    s32 i;
    for (i = 0; i < len; i++) {
        crc = (crc >> 8) ^ lbl_804FCF34[(u8)(crc ^ buf[i])];
    }
    return crc;
}
#pragma pop

#pragma push
#pragma scheduling off
#pragma peephole off
#pragma optimization_level 1
u32 calc_crc32(s32 buf, s32 len) {
    u32 r = fn_803F4D10(-1, (u8 *)buf, len);
    r ^= 0xFFFF0000;
    r ^= 0xFFFF;
    return r;
}
#pragma pop

}
