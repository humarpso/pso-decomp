#include "types.h"
#include "pso/misc/TLobby.h"

extern "C" {

int bswap_32__FPUl(void*);

void TLobby::bswap_4_words() { bswap_32__FPUl(this); bswap_32__FPUl((char*)this + 0x4); bswap_32__FPUl((char*)this + 0x8); bswap_32__FPUl((char*)this + 0xc); }

}
