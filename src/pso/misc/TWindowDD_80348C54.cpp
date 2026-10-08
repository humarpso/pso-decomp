#include "types.h"

struct Pkt_80348C78 { u8 hdr[2]; u16 player; u8 body[0x1c]; };

extern "C" {
extern s32 lbl_805D53A0;
void init_header__9TWindowDDFPv(void* p);
void TWindowDD__sub_80343BC0(void *, void *);
void update_and_send_lobby__9TWindowDDFPv(void* p);
void send_chat_packet__9TWindowDDFPv(void *data);
}

extern "C" {

int handle_word_select__9TWindowDDFPv(void* p);
void init_header__9TWindowDDFPv(void* p);
void update_and_send_lobby__9TWindowDDFPv(void* p);
int TLobby__send_and_handle_60(void*);
int bswap_word_select__9TWindowDDFPv(void*);
s32 TWindowDD__sub_80348D88(void* p);
void reset_index__9TWindowDDFPv(void* p);
void set_field14__9TWindowDDFPvi(void* p, s32 v);

int handle_word_select__9TWindowDDFPv(void* p) { return bswap_word_select__9TWindowDDFPv((char*)p + 0x4); }

void send_chat_packet__9TWindowDDFPv(void *data) {
    Pkt_80348C78 pkt;
    init_header__9TWindowDDFPv((void*)(&pkt));
    pkt.player = lbl_805D53A0;
    TWindowDD__sub_80343BC0(pkt.body, data);
    update_and_send_lobby__9TWindowDDFPv((void*)(&pkt));
}

void update_and_send_lobby__9TWindowDDFPv(void* p) { handle_word_select__9TWindowDDFPv((void*)(p)); TLobby__send_and_handle_60(p); }
void init_header__9TWindowDDFPv(void* p) { *(u8*)((char*)p + 0x0) = 116; *(u8*)((char*)p + 0x1) = 8; }

}
