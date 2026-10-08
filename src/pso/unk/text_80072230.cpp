#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
struct Stack_800724F0 {
    M2C_UNK sp8;
    s32 spC;
};

#include "pso/protocol/subcmd_6x.h"

struct Stack_80072448 {
    M2C_UNK sp8;
    s32 spC;
    s32 sp10;
    u8 trailing_storage[0x8];
};

struct Stack_80072308 {
    M2C_UNK sp8;
    s32 spC;
    s32 sp10;
    u8 trailing_storage[0x8];
};

struct Pkt_800725E0 { u8 pad[4]; u16 f4; u8 pad2[0x102]; };

struct Pkt_80072494 { u32 hdr; s32 idx; };

struct Stack_800722AC { s32 sp8; s32 spC; s32 sp10; s32 sp14; };

typedef s32 M2C_UNK;
struct Rec_80072230 { s32 flag; u8 data[0x100]; };

struct Chal_80072230 {
    u8 pad0[0x38];
    s32 dead[4];
    u8 pad48[0x270 - 0x48];
    Rec_80072230 recs[4];
    s32 time[4];
};

struct Pkt_80072230 { u32 hdr; s32 idx; s32 val; };

struct Pkt7C_80072230 { u32 hdr; u16 id; u8 pad6[2]; u8 recs[0x100]; };

extern "C" {
M2C_UNK send_challenge_packet__6TLobbyFPv(void *);
M2C_UNK TLobby__sub_800728FC(void *);
void send_challenge_with_value__6TLobbyFii(M2C_UNK arg0, s32 arg1);
s32 TLobby__sub_800703D0(void *, void *);
s32 send_6x7C_packet__6TLobbyFi(void *);
s32 init_pkt_cmd_7C__6TLobbyFPv(void *);
s32 get_card_window__17TWindowSubComCardFUi(int);
extern s32 lbl_805D53A0;
s32 mix_seed_checked__6TLobbyFi(void *);
s32 send_state__6TLobbyFPv(void *);
s32 TLobby__sub_80072880(void *);
extern s32 lbl_805D53A0;
void send_seed_state__6TLobbyFi(s32 arg0);
s32 is_flag_set__6TLobbyFv();
s32 send_and_handle_60_wrapper__6TLobbyFPv(void *);
s32 TLobby__sub_800727EC(void *);
extern s32 lbl_805D53A0;
void send_challenge_retry_cmd__6TLobbyFi(s32 arg0);
s32 init_pkt_cmd_7C__6TLobbyFPv(void *);
s32 send_6x7C_packet__6TLobbyFi(void *);
void send_6x7c_reset__6TLobbyFv(void);
s32 is_flag_set__6TLobbyFv();
s32 byteswap_challenge_packet__6TLobbyFPv(void *);
void TLobby__sub_80070024(void *, s32);
extern void *lbl_805D4E28;
void handle_6x8A_show_challenge_time_records_window(Pkt_80072494 *pkt);
s32 is_flag_set__6TLobbyFv();
s32 TLobby__sub_80072758(void *);
s32 TLobby__sub_80072724(void *);
void TLobby__sub_800722AC(s32 arg0);
s32 TLobby__sub_800703D0(void *, void *);
s32 is_flag_set__6TLobbyFv();
void send_challenge_records__6TLobbyFUi(u32);
s32 get_card_window__17TWindowSubComCardFUi(int);
extern M2C_UNK lbl_8048C9D8[];
extern void *lbl_805D4E28;
extern s32 lbl_805D53A0;
void TLobby__sub_80072618(void);
s32 TLobby__sub_800703D0(void *, void *);
s32 is_flag_set__6TLobbyFv();
void send_challenge_records__6TLobbyFUi(u32 _w0);
M2C_UNK bswap_6x7C_packet__6TLobbyFi(void *);
extern M2C_UNK lbl_8048C9D8[];
extern void *lbl_805D4E28;
extern s32 lbl_805D53A0;
void handle_6x7C_set_challenge_records(Pkt7C_80072230 *pkt);
s32 is_flag_set__6TLobbyFv();
M2C_UNK bswap_challenge_dead_flag__6TLobbyFPv(void *);
void *get_player_by_client_id(s32);
extern M2C_UNK lbl_8048C9D8[];
void handle_6x9D_set_challenge_dead_flag(Pkt_80072230 *pkt);
s32 check_challenge_time_range__6TLobbyFi(s32);
s32 get_valid_slot__6TLobbyFi(s32);
s32 mix_seed_checked__6TLobbyFi(void *);
s32 is_flag_set__6TLobbyFv();
M2C_UNK byteswap_challenge_time_packet__6TLobbyFPv(void *);
extern M2C_UNK lbl_8048C9D8[];
void handle_6x95_set_challenge_time(Pkt_80072230 *pkt);
}

extern "C" {

s32 is_flag_set__6TLobbyFv();
M2C_UNK TLobby__sub_800727A0(void *);
extern M2C_UNK lbl_8048C9D8[];

void handle_6x9D_set_challenge_dead_flag(Pkt_80072230 *pkt) {
    s32 idx;
    if (is_flag_set__6TLobbyFv() == 0) {
        return;
    }
    bswap_challenge_dead_flag__6TLobbyFPv(pkt);
    idx = pkt->idx;
    if (idx < 0 || idx >= 4) {
        return;
    }
    if (get_player_by_client_id(idx) != NULL) {
        lbl_8048C9D8[idx + 0x38 / 4] = 1;
    }
}

void TLobby__sub_800722AC(s32 arg0) {
    Stack_800722AC stack;
    if (is_flag_set__6TLobbyFv() == 0) {
        return;
    }
    if (arg0 < 0 || arg0 >= 4) {
        return;
    }
    TLobby__sub_80072758(&stack);
    stack.spC = arg0;
    TLobby__sub_80072724(&stack);
}

void send_challenge_retry_cmd__6TLobbyFi(s32 arg0) {
    typedef char sp8_offset[(offsetof(Stack_80072308, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80072308, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_80072308, sp10) == 0x8) ? 1 : -1];
    Stack_80072308 stack;
    if (is_flag_set__6TLobbyFv() != 0) {
        TLobby__sub_800727EC((void *) (&stack.sp8));
        stack.sp10 = arg0;
        stack.spC = lbl_805D53A0;
        send_and_handle_60_wrapper__6TLobbyFPv((void *) (&stack.sp8));
    }
}

void handle_6x97_select_challenge_mode_failure_option(void *arg0) {
    s32 var_r0;

    if (is_flag_set__6TLobbyFv() != 0) {
        TLobby__sub_800727A0(arg0);
        var_r0 = M2C_FIELD(arg0, s32 *, 8);
        if ((var_r0 < 0) || (var_r0 > 1)) {
            var_r0 = 0;
        }
        M2C_FIELD(&lbl_8048C9D8, s32 *, 0x24) = var_r0;
    }
}

void handle_6x95_set_challenge_time(Pkt_80072230 *pkt) {
    s32 idx;
    s32 t;
    s32 r;
    if (is_flag_set__6TLobbyFv() == 0) {
        return;
    }
    byteswap_challenge_time_packet__6TLobbyFPv(pkt);
    t = pkt->val;
    idx = pkt->idx;
    r = get_valid_slot__6TLobbyFi(t);
    if (idx < 0 || idx >= 4) {
        return;
    }
    if (check_challenge_time_range__6TLobbyFi(r) != 0) {
        t = mix_seed_checked__6TLobbyFi((void *)0x8C9F);
    }
    lbl_8048C9D8[idx + 0x680 / 4] = t;
}

void send_seed_state__6TLobbyFi(s32 arg0) {
    typedef char sp8_offset[(offsetof(Stack_80072448, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80072448, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_80072448, sp10) == 0x8) ? 1 : -1];
    Stack_80072448 stack;
    TLobby__sub_80072880((void *) (&stack.sp8));
    stack.sp10 = mix_seed_checked__6TLobbyFi((void *) (arg0));
    stack.spC = lbl_805D53A0;
    send_state__6TLobbyFPv((void *) (&stack.sp8));
}

void handle_6x8A_show_challenge_time_records_window(Pkt_80072494 *pkt) {
    if (is_flag_set__6TLobbyFv() == 0) {
        return;
    }
    byteswap_challenge_packet__6TLobbyFPv(pkt);
    if (pkt->idx < 0 || pkt->idx >= 0x11) {
        return;
    }
    TLobby__sub_80070024(lbl_805D4E28, pkt->idx);
}

void send_challenge_with_value__6TLobbyFii(M2C_UNK arg0, s32 arg1) {
    typedef char sp8_offset[(offsetof(Stack_800724F0, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_800724F0, spC) == 0x4) ? 1 : -1];
    Stack_800724F0 stack;
    TLobby__sub_800728FC((void *) (&stack.sp8));
    stack.spC = arg1;
    send_challenge_packet__6TLobbyFPv((void *) (&stack.sp8));
}

void handle_6x7C_set_challenge_records(Pkt7C_80072230 *pkt) {
    s32 id;
    Rec_80072230 *rec;
    if (is_flag_set__6TLobbyFv() == 0) {
        return;
    }
    bswap_6x7C_packet__6TLobbyFi(pkt);
    id = pkt->id;
    if (id == lbl_805D53A0) {
        return;
    }
    if (id == 0xFFFF) {
        send_challenge_records__6TLobbyFUi((u32)lbl_805D4E28);
        return;
    }
    if (id < 0 || id >= 4) {
        return;
    }
    rec = &(*(Chal_80072230 *)&lbl_8048C9D8).recs[id];
    if (rec->flag == 0) {
        send_challenge_records__6TLobbyFUi((u32)lbl_805D4E28);
    }
    rec->flag = 1;
    TLobby__sub_800703D0(rec->data, pkt->recs);
}

void send_6x7c_reset__6TLobbyFv(void) {
    Pkt_800725E0 pkt;
    init_pkt_cmd_7C__6TLobbyFPv(&pkt);
    pkt.f4 = 0xFFFF;
    send_6x7C_packet__6TLobbyFi(&pkt);
}

void TLobby__sub_80072618(void) {
    s32 *q;
    if (is_flag_set__6TLobbyFv() != 0) {
        q = (s32 *)(((u8 *)&lbl_8048C9D8) + lbl_805D53A0 * 0x104 + 0x270);
        if (((u32)get_card_window__17TWindowSubComCardFUi((int)(0xFFFF))) != 0) {
            TLobby__sub_800703D0(q + 1, (void *)(((u32)get_card_window__17TWindowSubComCardFUi((int)(0xFFFF))) + 0x21C4));
            if ((*(u32 *)&lbl_805D4E28) != 0) {
                send_challenge_records__6TLobbyFUi((u32)((*(u32 *)&lbl_805D4E28)));
            }
        }
    }
}

void send_challenge_records__6TLobbyFUi(u32 _w0) {
    G_SetChallengeRecords_V3_6x7C packet;
    init_pkt_cmd_7C__6TLobbyFPv((void *) (&packet.__base_G_SetChallengeRecordsBase_6x7C.header));
    packet.__base_G_SetChallengeRecordsBase_6x7C.client_id = (s16) lbl_805D53A0;
    TLobby__sub_800703D0((void *) (&packet.records[0]), (void *) (get_card_window__17TWindowSubComCardFUi((int) (0xFFFF)) + 0x21C4));
    send_6x7C_packet__6TLobbyFi((void *) (&packet.__base_G_SetChallengeRecordsBase_6x7C.header));
}

}
