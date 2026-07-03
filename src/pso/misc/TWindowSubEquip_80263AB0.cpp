#include "types.h"

extern "C" {

void TWindowSubEquip__sub_80263AF4(void);
void fn_80263AB0(u32 arg0);
s32 is_split_screen();
s32 fn_802449E0(u32);

void fn_80263AB0(u32 arg0) {
    if ((is_split_screen() != 0) && (arg0 != 0U)) {
        fn_802449E0(arg0);
    }
}
void TWindowSubEquip__sub_80263AF4(void) {  }

}
