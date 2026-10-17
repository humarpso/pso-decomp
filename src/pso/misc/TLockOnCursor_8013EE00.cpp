#include "types.h"
#include "pso/misc/TLockOnCursor_8013EE00.h"
#include "pso/misc/TMainCursor_8013E624.h"
#include "pso/misc/TPlyDispConfig_80071F1C.h"
#include "pso/system/memory.h"

extern "C" {

s32 destroy__13TLockOnCursorFis(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        destroy__11TMainCursorFis(arg0 + 0x14, -1);
        destroy__11TMainCursorFis(arg0 + 0xC, -1);
        free_if_valid__14TPlyDispConfigFis(arg0 + 8, -1);
        if (arg1 > 0) {
            ::operator delete((void *)arg0);
        }
    }
    return arg0;
}

}
