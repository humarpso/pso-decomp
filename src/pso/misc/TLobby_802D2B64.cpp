#include "pso/protocol/subcmd_6x.h"
#include <stddef.h>
typedef char TradeProposalSize[(sizeof(G_ModifyTradeProposal_6xA6) == 0x10) ? 1 : -1];
typedef char TradeProposalAmountOffset[(offsetof(G_ModifyTradeProposal_6xA6, amount) == 0xC) ? 1 : -1];

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>

struct Stack_802D3228
{
  M2C_UNK sp8;
  s8 spC;
  s8 spD;
  u8 pad_E[0x2];
  s32 sp10;
  s32 sp14;
};

struct O_802D33C0 { u8 pad[5]; u8 state; };

struct O_802D3384 { u8 pad[5]; u8 state; s16 h6; };

typedef s32 M2C_UNK;
extern "C" {
M2C_UNK prepare_and_send_trade_packet__6TLobbyFPvPv(void *, void *);
M2C_UNK build_6xA6_modify_trade_proposal(void *);
void TLobby__sub_802D30E8(s32 arg0);
M2C_UNK prepare_and_send_trade_packet__6TLobbyFPvPv(void *, void *);
M2C_UNK build_6xA6_modify_trade_proposal(void *);
extern s8 TLobby__data_805D688A;
void TLobby__sub_802D3284(s8 arg0, s8 arg1);
M2C_UNK prepare_and_send_trade_packet__6TLobbyFPvPv(void *, void *);
M2C_UNK build_6xA6_modify_trade_proposal(void *);
extern s8 TLobby__data_805D688A;
char TLobby__sub_802D3228(s8 arg0, s32 arg1, s32 arg2);
u8 *get_quest_id__12TQuestListVMFPv(u32);
u32 TPlayerBattleCtrl4P__sub_801BA74C(void *);
s32 TWindowTradeRequest__sub_80249FCC();
M2C_UNK TLobby__sub_8024AAA0(s32, M2C_UNK);
s32 TLobby__sub_802D23E0();
void TLobby__sub_802D30E8(s32 arg0);
M2C_UNK prepare_and_send_trade_packet__6TLobbyFPvPv(void *, void *);
M2C_UNK build_6xA6_modify_trade_proposal(void *);
extern s32 lbl_805D53A0;
extern s8 TLobby__data_805D688A;
extern s8 TLobby__data_805D688B;
void TLobby__sub_802D32D0(s32 arg0);
void send_cancel_trade__9TProtocolFv(void *self);
extern void *TLobby__data_805D5580;
void TLobby__sub_802D33C0(O_802D33C0 *self);
s32 update_sub_status_disp__6TLobbyFi(s32 arg0);
void reset__6TLobbyFi(s32 arg0);
void TLobby__sub_802D3384(O_802D3384 *self);
s32 TWindowTradeRequest__sub_80249FCC();
s32 update_sub_status_disp__6TLobbyFi(s32 arg0);
M2C_UNK reset__6TLobbyFv();
void reset__6TLobbyFi(s32 arg0);
M2C_UNK prepare_and_send_trade_packet__6TLobbyFPvPv(void *, void *);
M2C_UNK build_6xA6_modify_trade_proposal(void *);
extern s8 TLobby__data_805D688A;
extern s8 TLobby__data_805D688B;
void TLobby__sub_802D3070(s32 arg0);
}

extern "C" {

void TLobby__sub_802D3380(void);
void reset__6TLobbyFi(s32 arg0);
M2C_UNK TLobby_802D2F7C__sub_80339910(u32, s32);
M2C_UNK TLobby__sub_8024AAA0(s32, M2C_UNK);
s32 is_trade_active();

extern s32 lbl_805D53A0;
extern u16 lbl_805D6888;
extern s8 TLobby__data_805D688A;
extern s8 TLobby__data_805D688B;
extern s32 TLobby__data_805D688C;
extern s32 lbl_805D6890;
extern u32 TLobby__data_805D689C;

void reset__6TLobbyFi(s32 arg0) {
    if (is_trade_active() == 0) {
        TLobby__data_805D688B = 0;
        TLobby__data_805D688A = 4;
        TLobby__data_805D688C = 0;
        lbl_805D6890 = 0;
        lbl_805D6888 &= 0xFFFFF80F;
        TLobby__sub_8024AAA0(lbl_805D53A0, 0x1E);
        u32 temp_r3 = TLobby__data_805D689C;
        if (temp_r3 != 0U) {
            TLobby_802D2F7C__sub_80339910(temp_r3, arg0);
        }
    }
}

void TLobby__sub_802D3070(s32 arg0) {
    G_ModifyTradeProposal_6xA6 packet;
    s8 new_var;
    build_6xA6_modify_trade_proposal(&packet.header);
    new_var = (s8) ((*(u8 *)&TLobby__data_805D688A) & 0xFFFFFFFFFFFFFFFFu);
    packet.what = 7;
    packet.result = 0;
    packet.unknown_a1 = arg0;
    prepare_and_send_trade_packet__6TLobbyFPvPv(&packet.header, (void *)((s32) new_var));
    if (TLobby__data_805D688B == 2) {
        TWindowTradeRequest__sub_80249FCC();
        reset__6TLobbyFv();
        return;
    }
    reset__6TLobbyFi(update_sub_status_disp__6TLobbyFi(arg0));
}

void TLobby__sub_802D30E8(s32 arg0) {
    G_ModifyTradeProposal_6xA6 packet;
    build_6xA6_modify_trade_proposal((void *) (&packet.header));
    packet.what = 6;
    packet.result = 0;
    prepare_and_send_trade_packet__6TLobbyFPvPv((void *) (&packet.header), (void *) (arg0));
}

char TLobby__sub_802D3228(s8 arg0, s32 arg1, s32 arg2) {
  Stack_802D3228 stack;
  build_6xA6_modify_trade_proposal(&stack.sp8);
  stack.spC = arg0;
  stack.spD = 0;
  stack.sp10 = arg1;
  stack.sp14 = arg2;
  if (((!(*(u8 *)&TLobby__data_805D688A)) && (!(*(u8 *)&TLobby__data_805D688A))) && (!(*(u8 *)&TLobby__data_805D688A)))
  {
  }
  prepare_and_send_trade_packet__6TLobbyFPvPv((void *)((s32) (&stack.sp8)), (void *)((s32) ((s8) (*(u8 *)&TLobby__data_805D688A))));
}

void TLobby__sub_802D3284(s8 arg0, s8 arg1) {
  G_ModifyTradeProposal_6xA6 packet;
  s8 new_var;
  arg1++;
  arg1--;
  build_6xA6_modify_trade_proposal(&packet.header);
  new_var = (s8) ((*(u8 *)&TLobby__data_805D688A) & 0xFFFFFFFFFFFFFFFFu);
  packet.what = arg0;
  packet.result = arg1;
  prepare_and_send_trade_packet__6TLobbyFPvPv((void *)((s32) (&packet.header)), (void *)((s32) new_var));
}

void TLobby__sub_802D32D0(s32 arg0) {
    G_ModifyTradeProposal_6xA6 packet;
    u32 temp_r3;
    u8 *temp_r3_2;
    build_6xA6_modify_trade_proposal((void *) (&packet.header));
    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((void *) (lbl_805D53A0));
    if ((temp_r3 != 0U) && (temp_r3_2 = get_quest_id__12TQuestListVMFPv(temp_r3), ((temp_r3_2 == NULL) == 0))) {
        if ((s32) (*(u8 *)&TLobby__data_805D688A) != 4) {
            TWindowTradeRequest__sub_80249FCC();
            if ((s8) (*(u8 *)&TLobby__data_805D688A) == arg0) {
                TLobby__sub_802D23E0();
                TLobby__sub_8024AAA0((s32)((void *) (lbl_805D53A0)), (M2C_UNK)((int) (0x1D)));
                return;
            }
            TLobby__sub_802D30E8((s32)((int) ((s32) (s8) (*(u8 *)&TLobby__data_805D688A))));
            goto block_6;
        }
block_6:
        packet.what = 0;
        packet.result = 0;
        packet.amount = M2C_FIELD(temp_r3_2, s32 *, 0x20);
        prepare_and_send_trade_packet__6TLobbyFPvPv((void *) (&packet.header), (void *) (arg0));
        (*(u8 *)&TLobby__data_805D688A) = (u8) arg0;
        TLobby__data_805D688B = 1;
    }
}

void TLobby__sub_802D3380(void) {  }

void TLobby__sub_802D3384(O_802D3384 *self) {
    switch (self->state) {
    case 0:
        reset__6TLobbyFi(update_sub_status_disp__6TLobbyFi(self->h6));
        break;
    case 1:
    case 2:
        break;
    }
}

void TLobby__sub_802D33C0(O_802D33C0 *self) {
    switch (self->state) {
    case 3:
        break;
    case 4:
        send_cancel_trade__9TProtocolFv(TLobby__data_805D5580);
        break;
    }
}

}
