#include "types.h"

extern "C" {

void TAdRicoRingCtrl__sub_8001BED0(void* p, f32 v);
void fn_8001BED8(void* p, u32 v);
void TAdRicoRing__sub_8001BEE8(void* p, u32 v);
void fn_8001BF40(void* p);

void TAdRicoRingCtrl__sub_8001BED0(void* p, f32 v) { *(f32*)((char*)p + 0x34) = v; }

}
