#include "types.h"

extern "C" {

s32 destroy__13TLockOnCursorFis(s32 arg0, s16 arg1);

s32 free_if_valid__14TPlyDispConfigFis(s32, s32);
s32 __dl__FPv(s32);
s32 destroy__11TMainCursorFis(s32, s32);

s32 destroy__13TLockOnCursorFis(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        destroy__11TMainCursorFis(arg0 + 0x14, -1);
        destroy__11TMainCursorFis(arg0 + 0xC, -1);
        free_if_valid__14TPlyDispConfigFis(arg0 + 8, -1);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
