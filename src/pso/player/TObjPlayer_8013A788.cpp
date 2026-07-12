#include "types.h"

extern "C" {

int TObjPlayer__sub_8013A820(void* a0 = 0, void* a1 = 0);
void* TObjPlayer__sub_8013A788(void* p, void* a1);
s32 bswap_16__FPUs(s32);
s32 bswap_32__FPUl(s32);
s32 TLobby__sub_800C80FC();
s32 TLobby__sub_801E44D8(s32, s32);
s32 TLobby__send_and_handle_60(s32);
void fn_8013A578(void* p);
void fn_8013A5C0(void* p);

void* TObjPlayer__sub_8013A788(void* p, void* a1) { *(void**)(p) = *(void**)((char*)a1 + 0x0); TObjPlayer__sub_8013A820((char*)p + 0x4, (char*)a1 + 0x4); TObjPlayer__sub_8013A820((char*)p + 0x8, (char*)a1 + 0x8); TObjPlayer__sub_8013A820((char*)p + 0xc, (char*)a1 + 0xc); TObjPlayer__sub_8013A820((char*)p + 0x10, (char*)a1 + 0x10); TObjPlayer__sub_8013A820((char*)p + 0x14, (char*)a1 + 0x14); TObjPlayer__sub_8013A820((char*)p + 0x18, (char*)a1 + 0x18); TObjPlayer__sub_8013A820((char*)p + 0x1c, (char*)a1 + 0x1c); TObjPlayer__sub_8013A820((char*)p + 0x20, (char*)a1 + 0x20); return p; }

}
