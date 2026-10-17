#include "types.h"
#include "pso/misc/TWindowCtrl_8024B048.h"

extern "C" {

int TWindowCtrl__sub_8024B048(void* p) { return (*(u16*)((char*)p + 0x1c) >> 2) & 0x1; }

}
