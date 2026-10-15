#include "types.h"

extern "C" {

u8 fn_8003F3F8(void *arg0);
u8 TBoss3Volopt__sub_8003F458(void *arg0);
int is_photon_blast_active__11TCameraCtrlFPv(void* p);

int is_photon_blast_active__11TCameraCtrlFPv(void* p) { return (*(u32*)((char*)p + 0x388) >> 18) & 0x1; }

}
