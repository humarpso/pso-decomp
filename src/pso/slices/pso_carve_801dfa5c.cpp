#include "types.h"

extern "C" {

int __ct__16TPlyGuildCardTagFv(void*);
int bswap_32__FPUl(void*);
int bswap__13packet_headerFv(void*);
int bswap__16TPlyGuildCardTagFv(void*);
int fn_801DFA5C(void* p);
int bswap__13packet_headerFv(void*);

int fn_801DFA5C(void* p) { return bswap__13packet_headerFv(p); }
void fn_801DFA7C(void* p) { bswap__13packet_headerFv(p); bswap__16TPlyGuildCardTagFv((char*)p + 0x4); }
void fn_801DFAB0(void* p) { bswap__13packet_headerFv(p); bswap__16TPlyGuildCardTagFv((char*)p + 0x4); bswap_32__FPUl((char*)p + 0xc); }
void* fn_801DFAEC(void* p) { __ct__16TPlyGuildCardTagFv((char*)p + 0x4); return p; }
void fn_801DFB20(void* p) { bswap__13packet_headerFv(p); bswap__16TPlyGuildCardTagFv((char*)p + 0x4); }
void* fn_801DFB54(void* p) { __ct__16TPlyGuildCardTagFv((char*)p + 0x4); return p; }

}
