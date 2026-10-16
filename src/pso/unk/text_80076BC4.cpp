#include "types.h"
#include "pso/misc/TWindowCtrl.h"
#include "pso/misc/TWindowDD.h"
#include "pso/misc/TWindowSubSymbolChat.h"

struct TPlyGuildCardTag { u32 a; u32 b; TPlyGuildCardTag(u16, u32); };

struct Tag_80076BC8 { u32 a; u32 b; };

extern "C" {
s32 get_main_phase();
void *obj_getField1c(void *);
void *get_player_by_client_id(s32);
void send_chat__9TProtocolFR16TPlyGuildCardTagPc(void *, TPlyGuildCardTag *, u8 *);
void capture_chat_sensor__6TLobbyFi(u8 *);
extern s32 local_client_id;
extern void *TLobby__protocol_instance;
void submit_chat_text(u8 *arg0);
}

extern "C" {

void fn_80076BC4(void);

void fn_80076BC4(void) {  }
void submit_chat_text(u8 *arg0) {
    void *player;
    player = get_player_by_client_id(local_client_id);
    if (player != NULL && (s8) *arg0 != 0) {
        capture_chat_sensor__6TLobbyFi(arg0);
        if (get_main_phase() == 0xF) {
            Tag_80076BC8 tmp = *(Tag_80076BC8 *)&TPlyGuildCardTag(0, 0);
            send_chat__9TProtocolFR16TPlyGuildCardTagPc(TLobby__protocol_instance, (TPlyGuildCardTag *)&tmp, arg0);
        } else {
            TWindowCtrl::open((s32)(obj_getField1c(player)), (s32)arg0, (s32)0xCB);
        }
    }
}

}

extern "C" {
void chat_dispatch_accepted_result(s32 *arg0);
s32 is_submit_cooldown_clear__11TWindowCtrlFv();
s32 chat_accept_submission(s32 arg0);
int get_chat_shortcut(s32 arg0);
}

extern "C" {

void send_chat_shortcut(void);
void TAdSinglePlyChrSelectGC__sub_80076DF4(void* p, void* q);

void chat_dispatch_accepted_result(s32 *arg0) {
    s32 temp_r0;

    temp_r0 = *arg0;
    switch (temp_r0) {
    case 1:
        ((s32 (*)(void *)) submit_chat_text)((s8 *)arg0 + 4);
        return;
    case 2:
        TWindowDD::send_chat_packet((s8 *)arg0 + 4);
        return;
    case 3:
        TWindowSubSymbolChat::send_selected_symbol_chat((s32 *)((s8 *)arg0 + 4));
    case 0:
        return;
    }
}
s32 chat_accept_submission(s32 arg0) {
    if (is_submit_cooldown_clear__11TWindowCtrlFv() == 0) {
        return 0;
    }
    TWindowCtrl::set_field22();
    chat_dispatch_accepted_result((s32 *)((void *) (arg0)));
    return 1;
}

}

extern "C" {

void send_chat_shortcut(void);
void TAdSinglePlyChrSelectGC__sub_80076DF4(void* p, void* q);

void send_chat_shortcut(void) { ((int (*)()) get_chat_shortcut)(); ((int (*)()) chat_accept_submission)(); }

}

struct ByteBlock_50 { u8 bytes[0x50]; };

#pragma inline_depth(1)
#pragma auto_inline on
#pragma dont_inline off

extern "C" {
void TAdSinglePlyChrSelectGC__sub_80076DF4(void* p, void* q);
s32 TAdSinglePlyChrSelectGC__sub_80076D9C(s32 arg0, s32 arg1);
s32 TAdSinglePlyChrSelectGC__sub_80076D9C(s32 arg0, s32 arg1);
s32 store_chat_shortcut(s32 arg0, s32 arg1);
bool is_chat_shortcut_set(s32 arg0);
void clear_chat_shortcut(s32 i);
s32 get_character_save_record(u32);
int get_chat_shortcut(s32 arg0);
}

extern "C" {

void send_chat_shortcut(void);

void clear_chat_shortcut(s32 i) {
    void **p = ((void **)get_chat_shortcut((s32)(i)));
    *p = 0;
}

s32 store_chat_shortcut(s32 arg0, s32 arg1) { return TAdSinglePlyChrSelectGC__sub_80076D9C(((s32)get_chat_shortcut((s32)((s32)(arg0)))), arg1); }

s32 TAdSinglePlyChrSelectGC__sub_80076D9C(s32 arg0, s32 arg1) {
    TAdSinglePlyChrSelectGC__sub_80076DF4((void*)(arg0), (void*)(arg1));
    *(ByteBlock_50 *)(arg0 + 4) = *(const ByteBlock_50 *)(arg1 + 4);
    return arg0;
}

void TAdSinglePlyChrSelectGC__sub_80076DF4(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); }

bool is_chat_shortcut_set(s32 arg0) {
    return *((s32 *)get_chat_shortcut((s32)(arg0))) != 0;
}
typedef struct { u8 b[0x54]; } Rec_80076E2C;
int get_chat_shortcut(s32 arg0) {
    u8 *p = (u8 *)((Rec_80076E2C *)get_character_save_record(0xFFFF) + arg0);
    return (s32)(p + 0x19C0);
}

}
