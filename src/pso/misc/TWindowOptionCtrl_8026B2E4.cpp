#include "types.h"
#include "pso/misc/TWindowOptionCtrl.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

extern "C" {

s16 TWindowOptionCtrl::get_option_field_C() {
    return *(s16 *)((s8 *)(TAdSinglePlyChrSelectGC::get_global_state()) + 0xC);
}

}
