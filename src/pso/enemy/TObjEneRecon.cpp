#include "types.h"

extern "C" {

f32 get_field_4d4__12TObjEneReconFPv(void* p);
f32 get_field_4d0__12TObjEneReconFPv(void* p);

f32 get_field_4d4__12TObjEneReconFPv(void* p) { return *(f32*)((char*)p + 0x4d4); }
f32 get_field_4d0__12TObjEneReconFPv(void* p) { return *(f32*)((char*)p + 0x4d0); }

}
