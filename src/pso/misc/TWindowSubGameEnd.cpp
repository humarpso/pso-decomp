#include "types.h"

extern "C" {

void TWindowSubGameEnd__vt2(void);
void fn_80279444(void);
s32 fn_8000F91C(s32);
s32 fn_8000F9CC(s32);
s32 fn_80019690();
s32 fn_801FF464();
s32 fn_801FF4F0();

void fn_80279444(void) {
    if (fn_80019690() != 0) {
        fn_801FF4F0();
        fn_8000F9CC(7);
        return;
    }
    fn_801FF464();
    fn_8000F91C(9);
    fn_8000F9CC(0x12);
}
void TWindowSubGameEnd__vt2(void) {  }

}
