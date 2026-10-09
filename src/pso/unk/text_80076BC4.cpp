#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct TPlyGuildCardTag { u32 a; u32 b; TPlyGuildCardTag(u16, u32); };

struct Tag_80076BC8 { u32 a; u32 b; };

extern "C" {
s32 get_main_phase();
void *obj_getField1c(void *);
void *get_player_by_client_id(s32);
void send_chat__9TProtocolFR16TPlyGuildCardTagPc(void *, TPlyGuildCardTag *, u8 *);
void capture_chat_sensor__6TLobbyFi(u8 *);
void open__11TWindowCtrlFiii(void *, u8 *, int);
extern s32 lbl_805D53A0;
extern void *TLobby__protocol_instance;
void submit_chat_text(u8 *arg0);
}

extern "C" {

void fn_80076BC4(void);

void fn_80076BC4(void) {  }
void submit_chat_text(u8 *arg0) {
    void *player;
    player = get_player_by_client_id(lbl_805D53A0);
    if (player != NULL && (s8) *arg0 != 0) {
        capture_chat_sensor__6TLobbyFi(arg0);
        if (get_main_phase() == 0xF) {
            Tag_80076BC8 tmp = *(Tag_80076BC8 *)&TPlyGuildCardTag(0, 0);
            send_chat__9TProtocolFR16TPlyGuildCardTagPc(TLobby__protocol_instance, (TPlyGuildCardTag *)&tmp, arg0);
        } else {
            open__11TWindowCtrlFiii(obj_getField1c(player), arg0, 0xCB);
        }
    }
}

}

extern "C" {
void chat_dispatch_accepted_result(s32 *arg0);
M2C_UNK set_field22__11TWindowCtrlFv();
s32 is_submit_cooldown_clear__11TWindowCtrlFv();
s32 chat_accept_submission(s32 arg0);
int TWindowKeyBoardSoft__sub_80076E2C(s32 arg0);
}

extern "C" {

s32 send_selected_symbol_chat__20TWindowSubSymbolChatFPv(void *);
s32 send_chat_packet__9TWindowDDFPv(void *);
void TWindowShortListCtrl__sub_80076D1C(void);
void TAdSinglePlyChrSelectGC__sub_80076DF4(void* p, void* q);

void chat_dispatch_accepted_result(s32 *arg0) {
    s32 temp_r0;

    temp_r0 = *arg0;
    switch (temp_r0) {
    case 1:
        ((s32 (*)(void *)) submit_chat_text)((s8 *)arg0 + 4);
        return;
    case 2:
        send_chat_packet__9TWindowDDFPv((s8 *)arg0 + 4);
        return;
    case 3:
        send_selected_symbol_chat__20TWindowSubSymbolChatFPv((s8 *)arg0 + 4);
    case 0:
        return;
    }
}
s32 chat_accept_submission(s32 arg0) {
    if (is_submit_cooldown_clear__11TWindowCtrlFv() == 0) {
        return 0;
    }
    set_field22__11TWindowCtrlFv();
    chat_dispatch_accepted_result((s32 *)((void *) (arg0)));
    return 1;
}

}

extern "C" {

s32 send_selected_symbol_chat__20TWindowSubSymbolChatFPv(void *);
s32 send_chat_packet__9TWindowDDFPv(void *);
void TWindowShortListCtrl__sub_80076D1C(void);
void TAdSinglePlyChrSelectGC__sub_80076DF4(void* p, void* q);

void TWindowShortListCtrl__sub_80076D1C(void) { ((int (*)()) TWindowKeyBoardSoft__sub_80076E2C)(); ((int (*)()) chat_accept_submission)(); }

}

struct M2CCopy_50 { u8 bytes[0x50]; };

#pragma inline_depth(1)
#pragma auto_inline on
#pragma dont_inline off

extern "C" {
void TAdSinglePlyChrSelectGC__sub_80076DF4(void* p, void* q);
s32 TAdSinglePlyChrSelectGC__sub_80076D9C(s32 arg0, s32 arg1);
s32 TAdSinglePlyChrSelectGC__sub_80076D9C(s32 arg0, s32 arg1);
s32 fn_80076D68(s32 arg0, s32 arg1);
bool TWindowKeyBoardSoft__sub_80076E00(s32 arg0);
void fn_80076D40(s32 i);
s32 get_card_window__17TWindowSubComCardFUi(u32);
int TWindowKeyBoardSoft__sub_80076E2C(s32 arg0);
}

extern "C" {

s32 send_chat_packet__9TWindowDDFPv(void *);
void TWindowShortListCtrl__sub_80076D1C(void);
s32 send_selected_symbol_chat__20TWindowSubSymbolChatFPv(void *);

void fn_80076D40(s32 i) {
    void **p = ((void **)TWindowKeyBoardSoft__sub_80076E2C((s32)(i)));
    *p = 0;
}

s32 fn_80076D68(s32 arg0, s32 arg1) { return TAdSinglePlyChrSelectGC__sub_80076D9C(((s32)TWindowKeyBoardSoft__sub_80076E2C((s32)((s32)(arg0)))), arg1); }

s32 TAdSinglePlyChrSelectGC__sub_80076D9C(s32 arg0, s32 arg1) {
    TAdSinglePlyChrSelectGC__sub_80076DF4((void*)(arg0), (void*)(arg1));
    *(M2CCopy_50 *)(arg0 + 4) = *(const M2CCopy_50 *)(arg1 + 4);
    return arg0;
}

void TAdSinglePlyChrSelectGC__sub_80076DF4(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); }

bool TWindowKeyBoardSoft__sub_80076E00(s32 arg0) {
    return *((s32 *)TWindowKeyBoardSoft__sub_80076E2C((s32)(arg0))) != 0;
}
typedef struct { u8 b[0x54]; } Rec_80076E2C;
int TWindowKeyBoardSoft__sub_80076E2C(s32 arg0) {
    u8 *p = (u8 *)((Rec_80076E2C *)get_card_window__17TWindowSubComCardFUi(0xFFFF) + arg0);
    return (s32)(p + 0x19C0);
}

}
