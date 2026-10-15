#include "types.h"

extern "C" {

void set_field_value__17TWindowOptionCtrlFis(s32 arg0, s16 arg1);
void *get_global_state__23TAdSinglePlyChrSelectGCFv();

void set_field_value__17TWindowOptionCtrlFis(s32 arg0, s16 arg1) {
    *(s16 *)((s8 *)(get_global_state__23TAdSinglePlyChrSelectGCFv()) + 0xC) = arg1;
}

}
