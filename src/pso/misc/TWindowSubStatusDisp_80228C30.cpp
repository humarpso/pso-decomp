#include "types.h"
#include "pso/misc/TWindowSubStatusDisp.h"

extern "C" {

s32 strnlen__19TWindowKeyBoardSoftFPScUl(void *, s32);

void TWindowSubStatusDisp::measure_string_len() {
    strnlen__19TWindowKeyBoardSoftFPScUl(this, 0x100);
}

}
