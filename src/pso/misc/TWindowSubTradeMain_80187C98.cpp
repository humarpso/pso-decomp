#include "types.h"
#include "pso/misc/TWindowSubTradeMain.h"

extern "C" {

void *TObjGbAdvance__create(void *arg0);
int TLobby__send_and_handle_60(void*);
void *TObjGbAdvance__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);
int bswap_16__FPUs(void* a0 = 0);
int read_be16_field2__10TObjPlayerFv(void* a0 = 0);

void TWindowSubTradeMain::send_60_update() { bswap_6x6A_packet(); TLobby__send_and_handle_60(this); }

void TWindowSubTradeMain::bswap_6x6A_packet() { read_be16_field2__10TObjPlayerFv(this); bswap_16__FPUs((char*)this + 0x4); bswap_16__FPUs((char*)this + 0x6); }

void TWindowSubTradeMain::init_pkt_cmd_6A() { *(u8*)((char*)this + 0x0) = 106; *(u8*)((char*)this + 0x1) = 2; }

    extern int quest_warp_enabled;
int TWindowSubTradeMain::get_warp_state() {  return quest_warp_enabled; }

void TWindowSubTradeMain::set_close_flag() { *(u16*)((char*)this + 0x70) |= 0x80; }
void TWindowSubTradeMain::set_visible() { *(u16*)((char*)this + 0x70) |= 0x40; }

extern void *tl_05;

void *TObjGbAdvance__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xBC);
    if (o != NULL) {
        o = TObjGbAdvance__ct(o, tl_05, arg0);
    }
    return o;
}

}
