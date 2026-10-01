#include "types.h"
#include "pso/boss/TBoss1Dragon.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Pkt_801EE048 {
    u8 cmd;
    u8 size;
    u16 a;
    s32 b;
    s32 c;
    s32 d;
};

struct Item_801EE0BC {
    u8 data[12];
    s32 id;
    u32 f10;
};

struct Pkt_801EDF64 {
    u8 cmd;
    u8 size;
    u16 a;
    u16 b;
    u16 pad;
    u16 c;
    u8 d;
    u8 e;
};

extern "C" {
extern s32 lbl_805D53A0;
extern s32 *TLobby__data_805D5E78;
void TLobby__sub_801EDFF4(u8 reg);
extern s32 TLobby__data_805D53AC;
extern s32 *TLobby__data_805D5E78;
void TLobby__sub_801EDFE0(u8 reg);
void init_packet_67_04__6TLobbyFPv(void* p);
void byteswap_and_send__6TLobbyFi(s32 arg0);
extern s32 TLobby__data_80512220[];
void TLobby__sub_801EE048(void);
void init__9TItemDataFv(Item_801EE0BC *);
s32 TCheckRoomSequence__sub_80210D44(Item_801EE0BC *, s32);
extern s32 *TLobby__data_805D5E78;
void TLobby__sub_801EE0BC(u8 arg0, u8 arg1);
void finalize_and_send_60__6TLobbyFPv(void* p);
void* init_6x05_switch_changed__6TLobbyFPv(void* p);
extern s32 *TLobby__data_805D5E78;
void TLobby__sub_801EDF64(s32 arg0);
}

extern "C" {

int TLobby__sub_801EE028(void* p);
void TLobby__sub_801EE09C(void* p);
void create_quest_bgm_ctrl__6TLobbyFv(void);
int forward_801F36E4__6TLobbyFPv(void* p);
int TLobby__sub_801F36E4(void*);
void* TQuestBgmCtrl__ct(void*, s32);
void* __nw__7TObjectFUl(u32);
int set_cleanup_flag__6TLobbyFv(void*);

extern s32 tl_05;

void create_quest_bgm_ctrl__6TLobbyFv(void) {
    void* obj = __nw__7TObjectFUl(0x1C);
    if (obj != 0) {
        TQuestBgmCtrl__ct(obj, tl_05);
    }
}

void TLobby__sub_801EDF64(s32 arg0) {
    Pkt_801EDF64 pkt;
    init_6x05_switch_changed__6TLobbyFPv(&pkt);
    pkt.b = 0;
    pkt.a = 0xFFFF;
    pkt.c = (*(s32* *)&TLobby__data_805D5E78)[(u8)arg0++];
    pkt.d = (*(s32* *)&TLobby__data_805D5E78)[(u8)arg0++];
    pkt.e = (*(s32* *)&TLobby__data_805D5E78)[(u8)arg0];
    finalize_and_send_60__6TLobbyFPv(&pkt);
}

void TLobby__sub_801EDFE0(u8 reg) {
    TLobby__data_805D5E78[reg] = TLobby__data_805D53AC;
}

void TLobby__sub_801EDFF4(u8 reg) {
    TLobby__data_805D5E78[reg] = lbl_805D53A0;
}

int forward_801F36E4__6TLobbyFPv(void* p) { return TLobby__sub_801F36E4(p); }
int TLobby__sub_801EE028(void* p) { return set_cleanup_flag__6TLobbyFv(p); }

void TLobby__sub_801EE048(void) {
    Pkt_801EE048 pkt;
    s32 x = TLobby__data_80512220[0];
    s32 y = TLobby__data_80512220[1];
    init_packet_67_04__6TLobbyFPv(&pkt);
    pkt.b = x;
    pkt.a = 0;
    pkt.c = y;
    pkt.d = 0;
    byteswap_and_send__6TLobbyFi((s32)&pkt);
}

void TLobby__sub_801EE09C(void* p) { TBoss1Dragon::requestActionRefresh(); }
void TLobby__sub_801EE0BC(u8 arg0, u8 arg1) {
    Item_801EE0BC item;
    init__9TItemDataFv(&item);
    item.data[0] = TLobby__data_805D5E78[(u8)arg0++];
    item.data[1] = TLobby__data_805D5E78[(u8)arg0++];
    item.data[2] = TLobby__data_805D5E78[(u8)arg0++];
    item.data[3] = TLobby__data_805D5E78[(u8)arg0++];
    item.data[4] = TLobby__data_805D5E78[(u8)arg0++];
    item.data[5] = TLobby__data_805D5E78[(u8)arg0];
    if (TCheckRoomSequence__sub_80210D44(&item, 0) != 0) {
        TLobby__data_805D5E78[arg1] = 1;
    } else {
        TLobby__data_805D5E78[arg1] = 0;
    }
}

}
