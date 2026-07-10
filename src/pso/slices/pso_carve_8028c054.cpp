#include "types.h"

extern "C" {

int try_acquire_load_slot__22TChCrLoadAfsTextureReqFPv(void*);
void fn_8028C054(void* p);

void fn_8028C054(void* p) { if (try_acquire_load_slot__22TChCrLoadAfsTextureReqFPv(p) != 0) { *(int*)((char*)p + 0x2c) = 1; } }

}
