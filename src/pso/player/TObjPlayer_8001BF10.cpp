#include "types.h"

extern "C" {

void TAdRicoRingCtrl__sub_8001BED0(void* p, f32 v);
void TObjPlayer__sub_8001BED8(void* p, u32 v);
void TAdRicoRing__sub_8001BEE8(void* p, u32 v);
void TObjPlayer__sub_8001BF40(void* p);

void* TObjPlayer__sub_8001BF10(void* p) { TObjPlayer__sub_8001BF40(p); return p; }

}
