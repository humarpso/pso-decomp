#include "types.h"
#include "pso/misc/TWindowSubStatusDisp.h"
#include "pso/misc/TWindowKeyBoardSoft.h"

void TWindowSubStatusDisp::measure_string_len() {
    TWindowKeyBoardSoft::strnlen((s8 *)this, (u32)0x100);
}
