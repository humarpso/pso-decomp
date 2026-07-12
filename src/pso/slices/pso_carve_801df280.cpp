#include "types.h"

extern "C" {

s32 fn_801E0900(s32);
s32 bswap_16__FPUs(s32);
s32 bswap__16TPlyGuildCardTagFv(s32);
s32 __ct__8TPlySmthFv(s32);
s32 __ct__16TPlyGuildCardTagFv(s32);
int bswap_32__FPUl(void* a0 = 0);
int bswap__13packet_headerFv(void* a0 = 0);
int fn_801DF360(void* a0 = 0);
int fn_801DF47C(void* a0 = 0);
int fn_801DF740(void* a0 = 0);
int fn_801DF7F8(void* a0 = 0);
void fn_801DF310(void* p);
void fn_801DF42C(void* p);
void fn_801DF6F0(void* p);
void bswap_c0_lobby_entries(void* p);
int __ct__16TPlyGuildCardTagFRC16TPlyGuildCardTag(void*);
void* fn_801DF3F0(void* p, void* a1);
void fn_801DF6BC(void* p);
int fn_801DF2F0(void* p);
int bswap_packet_header_cmd_b1(void* p);

void fn_801DF280(s32 arg0) {
    bswap__13packet_headerFv();
    fn_801E0900(arg0 + 0x44);
    bswap_32__FPUl((void*)(arg0 + 0x4C));
}
s32 fn_801DF2BC(s32 arg0) {
    __ct__8TPlySmthFv(arg0 + 0x44);
    return arg0;
}
int fn_801DF2F0(void* p) { return bswap__13packet_headerFv(p); }
void fn_801DF310(void* p) { bswap__13packet_headerFv(p); { int i; for (i = 0; i < 16; i++) { fn_801DF360((char*)p + 0x4 + i * 12); } } }
int fn_801DF360(void*) { return 0; }
int fn_801DF394(void) { return 0; }
void* fn_801DF3F0(void* p, void* a1) { __ct__16TPlyGuildCardTagFRC16TPlyGuildCardTag(p); *(void**)((char*)p + 0x8) = *(void**)((char*)a1 + 0x8); return p; }
void fn_801DF42C(void* p) { bswap__13packet_headerFv(p); { int i; for (i = 0; i < 32; i++) { fn_801DF47C((char*)p + 0x4 + i * 212); } } }
int fn_801DF47C(void*) { return 0; }
void fn_801DF4B8(s32 arg0) {
    bswap__13packet_headerFv();
    bswap_32__FPUl((void*)(arg0 + 4));
    bswap_16__FPUs(arg0 + 8);
    bswap_16__FPUs(arg0 + 0xA);
}
int fn_801DF4FC(void) { return 0; }
int fn_801DF558(void) { return 0; }
int fn_801DF61C(void) { return 0; }
void fn_801DF6BC(void* p) { bswap__13packet_headerFv(p); fn_801DF6F0((char*)p + 0x4); }
void fn_801DF6F0(void* p) { bswap_32__FPUl(p); { int i; for (i = 0; i < 5; i++) { fn_801DF740((char*)p + 0x4 + i * 4); } } }
int fn_801DF740(void*) { return 0; }
int TProtocol__sub_801DF774(void) { return 0; }
void bswap_c0_lobby_entries(void* p) { bswap__13packet_headerFv(p); { int i; for (i = 0; i < 56; i++) { fn_801DF7F8((char*)p + 0x4 + i * 32); } } }
int fn_801DF7F8(void*) { return 0; }
int bswap_packet_header_cmd_b1(void* p) { return bswap__13packet_headerFv(p); }
void fn_801DF838(s32 arg0) {
    bswap__13packet_headerFv();
    bswap_32__FPUl((void*)(arg0 + 4));
    bswap_32__FPUl((void*)(arg0 + 8));
}
void fn_801DF874(s32 arg0) {
    bswap__13packet_headerFv();
    bswap__16TPlyGuildCardTagFv(arg0 + 4);
}
s32 fn_801DF8A8(s32 arg0) {
    __ct__16TPlyGuildCardTagFv(arg0 + 4);
    return arg0;
}

}
