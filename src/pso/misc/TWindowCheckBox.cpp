#include "types.h"

extern "C" {

void TWindowCheckBox__ct(void *arg0, s16 arg1);

extern s32 lbl_805D38B0;

void TWindowCheckBox__ct(void *arg0, s16 arg1) {
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D38B0;
    *(s16 *)((s8 *)arg0 + 0x20) = arg1;
}

}
