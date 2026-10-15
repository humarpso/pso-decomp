#include "types.h"

extern "C" {

void bswap__18TPlyJoinLobbyEntryFv(s32 arg0);
s32 bswap_32__FPUl(s32);
s32 bswap__12TPlyCharDataFv(s32);
s32 bswap__16TPlyGuildCardTagFv();

void bswap__18TPlyJoinLobbyEntryFv(s32 arg0) {
    bswap__16TPlyGuildCardTagFv();
    bswap_32__FPUl(arg0 + 8);
    bswap_32__FPUl(arg0 + 0xC);
    bswap__12TPlyCharDataFv(arg0 + 0x20);
}

}
