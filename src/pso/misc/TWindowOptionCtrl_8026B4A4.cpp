#include "types.h"

extern "C" {

void warn_if_empty__17TWindowOptionCtrlFPv(u8 *arg0);
s32 get_localized_text_entry(s32, s32);

void warn_if_empty__17TWindowOptionCtrlFPv(u8 *arg0) {
    if ((arg0 == NULL) || ((s8) *arg0 == 0)) {
        get_localized_text_entry(0xF, 0x19);
    }
}

}
