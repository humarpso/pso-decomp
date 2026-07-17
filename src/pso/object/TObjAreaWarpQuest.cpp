#include "types.h"

extern "C" {

s32 get_dest_area__17TObjAreaWarpQuestFPv(void* p);
void TObjAreaWarpQuest__sub_8019DCD8(void* p, s32 v);
void bswap_6x94_inter_level_warp(void* p);
void fn_8019DD14(void* p, u32 v);
void fn_8019DD24(void* p, u32 v);

int bswap_16__FPUs(void*);
int read_be16_field2__10TObjPlayerFPv(void*);

s32 get_dest_area__17TObjAreaWarpQuestFPv(void* p) { return *(s32*)((char*)p + 0xc); }
void TObjAreaWarpQuest__sub_8019DCD8(void* p, s32 v) { *(s32*)((char*)p + 0x3c8) = v; }
void bswap_6x94_inter_level_warp(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); }
void fn_8019DD14(void* p, u32 v) { *(u32*)((char*)p + 0x8) &= ~v; }
void fn_8019DD24(void* p, u32 v) { *(u32*)((char*)p + 0x8) |= v; }

}
