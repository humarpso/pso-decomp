#include "types.h"

extern "C" {

void TTecLuker__sub_80234F68(void* p);
s16 TTecLuker__sub_80234F74(void* p);
s32 TLobby__sub_801E4570(s32);
s32 bswap_16__FPUs(s32);
s32 bswap_32__FPUl(s32);
s32 fn_8001960C();

void TTecLuker__sub_80234F68(void* p) { *(s32*)((char*)p + 0x0) = 6; }
s16 TTecLuker__sub_80234F74(void* p) { return *(s16*)((char*)p + 0x2); }

}
