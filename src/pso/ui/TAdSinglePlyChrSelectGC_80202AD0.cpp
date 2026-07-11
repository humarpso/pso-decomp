#include "types.h"

extern "C" {

s32 __dt__12TPlyCharDataFv(s32, s32);
s32 __dl__FPv(s32);
u8 TAdSinglePlyChrSelectGC__sub_80202B30(void* p);

s32 TAdSinglePlyChrSelectGC__sub_80202AD0(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        __dt__12TPlyCharDataFv(arg0, -1);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
