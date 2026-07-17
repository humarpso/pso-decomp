#include "types.h"

extern "C" {

void render__17TWindowSubGameEndFv(void);
void init_char_select__16TKeyBoardControlFv(void);
s32 TKeyBoardControl__sub_8000F91C(s32);
s32 TKeyBoardControl__sub_8000F9CC(s32);
s32 is_split_screen();
s32 init__23TAdSinglePlyChrSelectGCFv();
s32 TAdSinglePlyChrSelectGC__sub_801FF4F0();

void init_char_select__16TKeyBoardControlFv(void) {
    if (is_split_screen() != 0) {
        TAdSinglePlyChrSelectGC__sub_801FF4F0();
        TKeyBoardControl__sub_8000F9CC(7);
        return;
    }
    init__23TAdSinglePlyChrSelectGCFv();
    TKeyBoardControl__sub_8000F91C(9);
    TKeyBoardControl__sub_8000F9CC(0x12);
}
void render__17TWindowSubGameEndFv(void) {  }

}
