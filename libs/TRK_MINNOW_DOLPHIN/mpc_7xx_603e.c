#include "PowerPC_EABI_Support/MetroTRK/trk.h"

asm void TRKSaveExtended1Block() {
#include "orig_asm/TRK_MINNOW_DOLPHIN/mpc_7xx_603e/TRKSaveExtended1Block.inc"
}

asm void TRKRestoreExtended1Block() {
#include "orig_asm/TRK_MINNOW_DOLPHIN/mpc_7xx_603e/TRKRestoreExtended1Block.inc"
}

u8 TRKTargetCPUMinorType(void)
{
	return 0x54;
}
