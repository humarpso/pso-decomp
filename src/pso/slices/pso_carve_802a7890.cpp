#include "types.h"

extern "C" {

s32 TObjPlayer__sub_801C00F4(void);
void fn_802A7890(void* p, s32 v);

void fn_802A7890(void* p, s32 v) { *(s32*)((char*)p + 0x4) = v; }
s32 fn_802A7898(void) {
    s32 temp_r3;

    temp_r3 = TObjPlayer__sub_801C00F4();
    switch (temp_r3) {
    case 0:
        return 0x38;
    case 1:
        return 0x10;
    default:
        return 0;
    }
}

}
