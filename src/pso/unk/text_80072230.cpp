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

extern "C" {
M2C_UNK send_challenge_packet__6TLobbyFPv(void *);
M2C_UNK TLobby__sub_800728FC(void *);
void TLobby__sub_800724F0(M2C_UNK arg0, s32 arg1);
s32 TLobby__sub_800703D0(void *, void *);
s32 send_6x7C_packet__6TLobbyFi(void *);
s32 init_pkt_cmd_7C__6TLobbyFPv(void *);
s32 get_card_window__17TWindowSubComCardFUi(int);
extern s32 lbl_805D53A0;
void TLobby__sub_800726A0(void);
s32 mix_seed_checked__6TLobbyFi(void *);
s32 send_state__6TLobbyFPv(void *);
s32 TLobby__sub_80072880(void *);
extern s32 lbl_805D53A0;
void TLobby__sub_80072448(s32 arg0);
s32 is_flag_set__6TLobbyFv();
s32 send_and_handle_60_wrapper__6TLobbyFPv(void *);
s32 TLobby__sub_800727EC(void *);
extern s32 lbl_805D53A0;
void TLobby__sub_80072308(s32 arg0);
s32 init_pkt_cmd_7C__6TLobbyFPv(void *);
s32 send_6x7C_packet__6TLobbyFi(void *);
void TLobby__sub_800725E0(void);
}

extern "C" {

s32 is_flag_set__6TLobbyFv();
M2C_UNK TLobby__sub_800727A0(void *);
extern M2C_UNK lbl_8048C9D8[];

void TLobby__sub_80072308(s32 arg0) {
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

void TLobby__sub_80072448(s32 arg0) {
    typedef char sp8_offset[(offsetof(Stack_80072448, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80072448, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_80072448, sp10) == 0x8) ? 1 : -1];
    Stack_80072448 stack;
    TLobby__sub_80072880((void *) (&stack.sp8));
    stack.sp10 = mix_seed_checked__6TLobbyFi((void *) (arg0));
    stack.spC = lbl_805D53A0;
    send_state__6TLobbyFPv((void *) (&stack.sp8));
}

void TLobby__sub_800724F0(M2C_UNK arg0, s32 arg1) {
    typedef char sp8_offset[(offsetof(Stack_800724F0, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_800724F0, spC) == 0x4) ? 1 : -1];
    Stack_800724F0 stack;
    TLobby__sub_800728FC((void *) (&stack.sp8));
    stack.spC = arg1;
    send_challenge_packet__6TLobbyFPv((void *) (&stack.sp8));
}

void TLobby__sub_800725E0(void) {
    Pkt_800725E0 pkt;
    init_pkt_cmd_7C__6TLobbyFPv(&pkt);
    pkt.f4 = 0xFFFF;
    send_6x7C_packet__6TLobbyFi(&pkt);
}

void TLobby__sub_800726A0(void) {
    G_SetChallengeRecords_V3_6x7C packet;
    init_pkt_cmd_7C__6TLobbyFPv((void *) (&packet.__base_G_SetChallengeRecordsBase_6x7C.header));
    packet.__base_G_SetChallengeRecordsBase_6x7C.client_id = (s16) lbl_805D53A0;
    TLobby__sub_800703D0((void *) (&packet.records[0]), (void *) (get_card_window__17TWindowSubComCardFUi((int) (0xFFFF)) + 0x21C4));
    send_6x7C_packet__6TLobbyFi((void *) (&packet.__base_G_SetChallengeRecordsBase_6x7C.header));
}

}
