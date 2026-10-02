#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Pkt_802084B0 { u8 hdr[2]; u16 a; s32 b; s32 c; s32 d; };

struct Pkt_8020857C { u8 hdr[2]; u16 a; s16 b; s16 pad; s16 c; s8 d; s8 e; };

struct Pkt_8020851C {
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
s32 get_current_floor();
void byteswap_and_send__6TLobbyFi(void *);
void init_packet_67_04__6TLobbyFPv(void *);
void set_destroy_event__6TLobbyFi(int, int);
extern s32 lbl_805D53A0;
extern s32 lbl_805D6084;
void TLobby__sub_802084B0(s32 arg0);
s32 get_current_floor();
void finalize_and_send_60__6TLobbyFPv(void *);
void init_6x05_switch_changed__6TLobbyFPv(void *);
extern s32 lbl_805D6088;
void TLobby__sub_8020857C(s16 arg0);
s32 get_current_floor();
void finalize_and_send_60__6TLobbyFPv(void *);
void init_6x05_switch_changed__6TLobbyFPv(void *);
void TLobby__sub_8020851C(s32 arg0);
}

extern "C" {

void load_item_data__6TLobbyFv(void);
void relink_objects__6TLobbyFv(void);
s32 *TItemDrop__sub_800F94BC(s32, u32);
u32 alloc__22TQuestVmDownLoadServerFPv(M2C_UNK);
s32 get_drop_item_mode__6TLobbyFv();
int link_matching_objects__6TLobbyFss(void);
s32 update_lobby_scene__6TSceneFPv(s32);

extern s32 lbl_804C9390[];
extern s32 TLobby__data_805D6068;
extern s32 lbl_805D606C;
extern s32 *lbl_805D6070;
extern u32 lbl_805D6074;

void load_item_data__6TLobbyFv(void) {
    s32 *temp_r3_2;
    s32 temp_r0;
    s32 temp_r30;
    u32 temp_r3;

    lbl_805D606C = 0;
    lbl_805D6070 = NULL;
    temp_r3 = alloc__22TQuestVmDownLoadServerFPv(0x24B8);
    lbl_805D6074 = temp_r3;
    if (temp_r3 != 0U) {
        temp_r30 = get_drop_item_mode__6TLobbyFv();
        if (update_lobby_scene__6TSceneFPv(lbl_804C9390[temp_r30]) <= 0x24B8) {
            temp_r3_2 = TItemDrop__sub_800F94BC(lbl_804C9390[temp_r30], lbl_805D6074);
            lbl_805D6070 = temp_r3_2;
            if (temp_r3_2 != NULL) {
                temp_r0 = *temp_r3_2;
                lbl_805D606C = temp_r0;
                TLobby__data_805D6068 = temp_r0;
            }
        }
    }
}

    extern int lbl_805D6080;
void relink_objects__6TLobbyFv(void) { link_matching_objects__6TLobbyFss(); lbl_805D6080 = 1; }
void TLobby__sub_802084B0(s32 arg0) {
    Pkt_802084B0 pkt;
    s32 t = lbl_805D6084;
    lbl_805D6084 = t + 1;
    set_destroy_event__6TLobbyFi(1, t);
    init_packet_67_04__6TLobbyFPv(&pkt);
    pkt.a = 0xFFFF;
    pkt.b = get_current_floor();
    pkt.c = arg0;
    pkt.d = lbl_805D53A0;
    byteswap_and_send__6TLobbyFi(&pkt);
}

void TLobby__sub_8020851C(s32 arg0) {
    Pkt_8020851C pkt;
    init_6x05_switch_changed__6TLobbyFPv(&pkt);
    pkt.b = 0;
    pkt.a = 0xFFFF;
    pkt.c = arg0;
    pkt.d = ((s32 (*)(s32))get_current_floor)(0xFFFF);
    pkt.e = 0;
    finalize_and_send_60__6TLobbyFPv(&pkt);
}

void TLobby__sub_8020857C(s16 arg0) {
    Pkt_8020857C pkt;
    init_6x05_switch_changed__6TLobbyFPv(&pkt);
    pkt.a = 0xFFFF;
    pkt.b = 0;
    pkt.c = arg0;
    pkt.d = ((s8)get_current_floor());
    if (lbl_805D6088 != 0) {
        pkt.e = 3;
        lbl_805D6088 = 0;
    } else {
        pkt.e = 1;
    }
    finalize_and_send_60__6TLobbyFPv(&pkt);
}

}
