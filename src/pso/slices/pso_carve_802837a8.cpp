#include "types.h"

extern "C" {

s32 fn_802837DC(void);
s32 fn_80077334(void);
s32 TWindowSubSymbolChat__sub_80077310();
void* fn_80283800(void* p);

s32 fn_802837A8(void) {
    s32 temp_r31;

    s32 temp_r3;
    temp_r31 = fn_802837DC();
    temp_r3 = fn_80077334();
    return temp_r3 + temp_r31;
}
s32 fn_802837DC(void) {
    return 0xC - TWindowSubSymbolChat__sub_80077310();
}
void* fn_80283800(void* p) { return (char*)p + 0x4; }

}
