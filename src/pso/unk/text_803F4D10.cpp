#include "types.h"
extern "C" {
extern u32 lbl_804FCF34[];
u32 fn_803F4D10(u32 crc, u8 *buf, s32 len);
}

extern "C" {

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

}
