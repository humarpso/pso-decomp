#include "types.h"

extern "C" {

int is_unloaded__12TChCrLoadAfsFPv(void* p);

int is_unloaded__12TChCrLoadAfsFPv(void* p) { return *(u32*)((char*)p + 0x4a8) == 0; }

}
