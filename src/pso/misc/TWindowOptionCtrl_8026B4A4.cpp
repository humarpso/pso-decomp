#include "types.h"
#include "pso/misc/TWindowOptionCtrl.h"

extern "C" {

s32 get_localized_text_entry(s32, s32);

void TWindowOptionCtrl::warn_if_empty(u8 *arg0) {
    if ((arg0 == NULL) || ((s8) *arg0 == 0)) {
        get_localized_text_entry(0xF, 0x19);
    }
}

}
