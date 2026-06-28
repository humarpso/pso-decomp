#include "types.h"

extern "C" {

s32 TAdRicoRing__sub_8001BEE8(s32, s32);
s32 fn_8001BEF8(s32);
void fn_8010AD1C(void* p, u8 v);

int fn_8010AC60(void) { return 0; }
s32 fn_8010ACC8(s32 arg0, s32 arg1) {
    if (fn_8001BEF8(arg0 + 0x178) != 0) {
        TAdRicoRing__sub_8001BEE8(arg0 + 0x178, arg1);
        return 1;
    }
    return 0;
}
void fn_8010AD1C(void* p, u8 v) { *(u8*)((char*)p + 0x171) = v; }

}
