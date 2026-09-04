#include "types.h"

extern "C" {

void set_flags__10TObjPlayerFPvUi(void* p, u32 v);
void TAdRicoRingCtrl__sub_8001BED0(void* p, f32 v);
void clear_flags__11TAdRicoRingFPvUi(void* p, u32 v);
void clear_id__10TObjPlayerFPv(void* p);

void set_flags__10TObjPlayerFPvUi(void* p, u32 v) { *(u32*)((char*)p + 0x0) |= v; }

}
