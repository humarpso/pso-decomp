#include "types.h"

extern "C" {

s32 TObjEneDellBiter__sub_80087350(u32, s32);
s32 TObjPlayer__sub_8012C9A8(u32);
s32 TBoss3Volopt__sub_8022675C(s32, s32, s32, s32);
void TObjPlayer__sub_8012C4E0(void);

void TObjPlayer__sub_8012C3F4(u32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    if ((arg1 != 0U) && (arg3 != 0U)) {
        TObjPlayer__sub_8012C9A8(arg1);
        TObjEneDellBiter__sub_80087350(arg3, 0x45);
        TBoss3Volopt__sub_8022675C(0x4001C112, 0, 0, 0);
    }
}

}
