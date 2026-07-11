#include "types.h"

extern "C" {

void TBoss2Tentacle__sub_80039D64(void* a0);

    extern int TBoss2Tentacle__data_80435B78[];
void TBoss2Tentacle__sub_80039D64(void* a0) { *(int*)((char*)a0 + 0x11c) = TBoss2Tentacle__data_80435B78[*(int*)((char*)a0 + 0x2c)]; *(int*)((char*)a0 + 0x120) = 0; }

}
