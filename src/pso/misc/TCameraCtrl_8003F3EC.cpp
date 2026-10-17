#include "types.h"
#include "pso/misc/TCameraCtrl_8003F3EC.h"

int is_photon_blast_active__11TCameraCtrlFPv(void* p) { return (*(u32*)((char*)p + 0x388) >> 18) & 0x1; }
