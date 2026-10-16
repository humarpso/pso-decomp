#include "types.h"
#include "pso/misc/TWindowOptionCtrl.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

extern "C" {

void TWindowOptionCtrl::set_field_value(s32 arg0, s16 arg1) {
    *(s16 *)((s8 *)(TAdSinglePlyChrSelectGC::get_global_state()) + 0xC) = arg1;
}

}
