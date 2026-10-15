#include "types.h"
#include "pso/misc/TWindowOptionCtrl.h"

extern "C" {

void *get_global_state__23TAdSinglePlyChrSelectGCFv();

void TWindowOptionCtrl::set_field_value(s32 arg0, s16 arg1) {
    *(s16 *)((s8 *)(get_global_state__23TAdSinglePlyChrSelectGCFv()) + 0xC) = arg1;
}

}
