#include "types.h"

extern "C" {

void set_field_8__15TPlyPhotonChairFPvi(void* p, s32 v);
void set_type__15TPlyPhotonChairFPvi(void* p, s32 v);

void set_field_8__15TPlyPhotonChairFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x8) = v; }
void set_type__15TPlyPhotonChairFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x0) = v; }

}
