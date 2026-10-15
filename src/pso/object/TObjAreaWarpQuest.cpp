#include "types.h"
#include "pso/object/TObjAreaWarpQuest.h"

extern "C" {

void TObjAreaWarpQuest__sub_8019DCD8(void* p, s32 v);
void bswap_6x94_inter_level_warp(void* p);
void mask_action_buttons(void* p, u32 v);
void fn_8019DD24(void* p, u32 v);

int bswap_16__FPUs(void*);
int read_be16_field2__10TObjPlayerFv(void*);

s32 TObjAreaWarpQuest::get_dest_area() { return *(s32*)((char*)this + 0xc); }
void TObjAreaWarpQuest__sub_8019DCD8(void* p, s32 v) { *(s32*)((char*)p + 0x3c8) = v; }
void bswap_6x94_inter_level_warp(void* p) { read_be16_field2__10TObjPlayerFv(p); bswap_16__FPUs((char*)p + 0x4); }
void mask_action_buttons(void* p, u32 v) { *(u32*)((char*)p + 0x8) &= ~v; }
void fn_8019DD24(void* p, u32 v) { *(u32*)((char*)p + 0x8) |= v; }

}
