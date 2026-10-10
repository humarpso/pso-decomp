#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjGbAdvance__create(void *arg0);
void bswap_6x6A_packet__19TWindowSubTradeMainFPv(void* p);
int get_warp_state__19TWindowSubTradeMainFv(void);
void init_pkt_cmd_6A__19TWindowSubTradeMainFPv(void* p);
void send_60_update__19TWindowSubTradeMainFPv(void* p);
void set_close_flag__19TWindowSubTradeMainFPv(void* p);
void set_visible__19TWindowSubTradeMainFPv(void* p);
int TLobby__send_and_handle_60(void*);
void *TObjGbAdvance__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);
int bswap_16__FPUs(void* a0 = 0);
int read_be16_field2__10TObjPlayerFPv(void* a0 = 0);

void send_60_update__19TWindowSubTradeMainFPv(void* p) { bswap_6x6A_packet__19TWindowSubTradeMainFPv((void*)(p)); TLobby__send_and_handle_60(p); }

void bswap_6x6A_packet__19TWindowSubTradeMainFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }

void init_pkt_cmd_6A__19TWindowSubTradeMainFPv(void* p) { *(u8*)((char*)p + 0x0) = 106; *(u8*)((char*)p + 0x1) = 2; }

    extern int quest_warp_enabled;
int get_warp_state__19TWindowSubTradeMainFv(void) {  return quest_warp_enabled; }

void set_close_flag__19TWindowSubTradeMainFPv(void* p) { *(u16*)((char*)p + 0x70) |= 0x80; }
void set_visible__19TWindowSubTradeMainFPv(void* p) { *(u16*)((char*)p + 0x70) |= 0x40; }

extern void *tl_05;

void *TObjGbAdvance__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xBC);
    if (o != NULL) {
        o = TObjGbAdvance__ct(o, tl_05, arg0);
    }
    return o;
}

}
