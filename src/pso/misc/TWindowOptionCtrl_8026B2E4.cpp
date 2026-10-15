#include "types.h"
#include "pso/misc/TWindowOptionCtrl.h"

extern "C" {

void *get_global_state__23TAdSinglePlyChrSelectGCFv();

s16 TWindowOptionCtrl::get_option_field_C() {
    return *(s16 *)((s8 *)(get_global_state__23TAdSinglePlyChrSelectGCFv()) + 0xC);
}

}
