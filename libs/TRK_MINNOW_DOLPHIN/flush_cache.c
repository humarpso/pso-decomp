#include "PowerPC_EABI_Support/MetroTRK/trk.h"

asm void TRK_flush_cache(register void* param_1, register int param_2) {
#include "orig_asm/TRK_MINNOW_DOLPHIN/flush_cache/TRK_flush_cache.inc"
}
