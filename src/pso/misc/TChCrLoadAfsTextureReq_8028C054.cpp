#include "types.h"

extern "C" {

void try_begin_load__22TChCrLoadAfsTextureReqFPv(void* p);
int try_acquire_load_slot__22TChCrLoadAfsTextureReqFPv(void*);

void try_begin_load__22TChCrLoadAfsTextureReqFPv(void* p) { if (try_acquire_load_slot__22TChCrLoadAfsTextureReqFPv(p) != 0) { *(int*)((char*)p + 0x2c) = 1; } }

}
