#include "types.h"

extern "C" {

s32 TAdRicoRing__sub_8001BEE8(s32, s32);
s32 fn_8001BEF8(s32);
void TItemEquipBase__sub_8010AD1C(void* p, u8 v);

s32 TItemEquipBase__sub_8010ACC8(s32 arg0, s32 arg1) {
    if (fn_8001BEF8(arg0 + 0x178) != 0) {
        TAdRicoRing__sub_8001BEE8(arg0 + 0x178, arg1);
        return 1;
    }
    return 0;
}
void TItemEquipBase__sub_8010AD1C(void* p, u8 v) { *(u8*)((char*)p + 0x171) = v; }

}
