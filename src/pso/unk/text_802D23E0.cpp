#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_F8 { u8 bytes[0xf8]; };

struct Stack_802D23E0
{
  M2C_UNK sp8;
  s8 spC;
  s8 spD;
  u8 pad_E[0x6];
  s32 sp14;
};

struct Half_802D26C8 { u8 b[0xF8]; };

struct Pair_802D26C8 { Half_802D26C8 h[2]; };

extern "C" {
u8 * TLobby__sub_802D27E0(s32 arg0, s32 arg1);
M2C_UNK get_shared_text_buffer();
M2C_UNK get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
M2C_UNK refresh_player_status__6TLobbyFv(int);
M2C_UNK text_builder_append();
M2C_UNK text_builder_reset();
extern s8 TLobby__data_805D688A;
void TLobby__sub_802D268C(void);
s32 get_quest_id__12TQuestListVMFPv(void *);
s32 get_player_by_client_id(u32);
void prepare_and_send_trade_packet__6TLobbyFPvPv(s32, s32);
void build_6xA6_modify_trade_proposal(void *);
extern u32 lbl_805D53A0;
extern s8 TLobby__data_805D688A;
extern u8 TLobby__data_805D688B;
void send_trade_proposal_modify__6TLobbyFv(void);
M2C_UNK send_trade_list__6TLobbyFPvPv(s32, M2C_UNK *);
M2C_UNK clear_flag400__6TLobbyFv();
M2C_UNK TLobby__sub_802D3134(M2C_UNK *);
M2C_UNK TWindowSubTradeMain__sub_80330A84();
extern s32 TLobby__data_805D5580;
extern u16 lbl_805D6888;
extern u8 TLobby__data_805D688B;
extern u32 TLobby__data_805D6898;
void TLobby__sub_802D245C(void);
M2C_UNK send_trade_proposal_result__6TLobbyFcc(M2C_UNK, M2C_UNK);
M2C_UNK forward_to_child__19TWindowSubTradeMainFPvi(u32, M2C_UNK);
extern u16 lbl_805D6888;
extern u8 TLobby__data_805D688B;
extern s32 lbl_805D6890;
extern u32 TLobby__data_805D6898;
void TLobby__sub_802D2518(void);
s32 TLobby__sub_802D1D48(void *, void *);
M2C_UNK update_both_halves__6TLobbyFPv(void *);
u8 * TLobby__sub_802D27E0(s32 arg0, s32 arg1);
s32 show_event_message__6TLobbyFiii(void *, int, int);
extern Half_802D26C8 TLobby__data_80540BD0[4];
extern u32 lbl_805D53A0;
extern s8 TLobby__data_805D688A;
s32 TLobby__sub_802D26C8(void);
}

extern "C" {

typedef struct Stack_802D23E0 Stack_802D23E0;
void send_trade_proposal_modify__6TLobbyFv(void) {
  Stack_802D23E0 stack;
  u8 *temp_r3;
  u8 *temp_r3_2;
  build_6xA6_modify_trade_proposal(&stack.sp8);
  if (((s32) TLobby__data_805D688B) == 2)
  {
    temp_r3 = (u8 *) get_player_by_client_id(lbl_805D53A0);
    if (temp_r3)
    {
      temp_r3_2 = (u8 *) get_quest_id__12TQuestListVMFPv(temp_r3);
      if (temp_r3_2 != 0)
      {
        stack.spC = 0;
        stack.spD = 2;
        stack.sp14 = *((s32 *) (((s8 *) temp_r3_2) - -0x20));
        if (((*(u8 *)&TLobby__data_805D688A) && (*(u8 *)&TLobby__data_805D688A)) && (*(u8 *)&TLobby__data_805D688A))
        {
        }
        prepare_and_send_trade_packet__6TLobbyFPvPv((s32) (&stack.sp8), (s32) ((s8) (*(u8 *)&TLobby__data_805D688A)));
        TLobby__data_805D688B = 3;
      }
    }
  }
}

void TLobby__sub_802D245C(void) {
    u8 sp8[0x288];
    switch ((s8) TLobby__data_805D688B) {
    case 5:
        if ((lbl_805D6888 & 0x100) && (lbl_805D6888 & 0x200)) {
            TLobby__data_805D688B = 6;
        }
        break;
    case 6:
        TLobby__sub_802D3134((M2C_UNK *)sp8);
        send_trade_list__6TLobbyFPvPv(TLobby__data_805D5580, (M2C_UNK *)sp8);
        lbl_805D6888 |= 0x400;
        if ((u32) TLobby__data_805D6898 != 0U) {
            ((void (*)(u32))TWindowSubTradeMain__sub_80330A84)(TLobby__data_805D6898);
        }
        TLobby__data_805D688B = 7;
        break;
    case 7:
    case 8:
        if (!(lbl_805D6888 & 0x100) || !(lbl_805D6888 & 0x200)) {
            clear_flag400__6TLobbyFv();
        }
        break;
    }
}

void TLobby__sub_802D2518(void) {
    if (!(lbl_805D6888 & 0x10)) {
        lbl_805D6890 = 0;
        if (lbl_805D6888 & 0x20) {
            send_trade_proposal_result__6TLobbyFcc(3, 4);
            lbl_805D6888 &= 0xFFFFFFDF;
            if ((u32) TLobby__data_805D6898 != 0U) {
                forward_to_child__19TWindowSubTradeMainFPvi(TLobby__data_805D6898, 0);
            }
            TLobby__data_805D688B = 3;
        }
    } else if (!(lbl_805D6888 & 0x20)) {
        if (lbl_805D6890++ >= 0x1E) {
            send_trade_proposal_result__6TLobbyFcc(3, 0);
            lbl_805D6888 |= 0x20;
            if ((u32) TLobby__data_805D6898 != 0U) {
                forward_to_child__19TWindowSubTradeMainFPvi(TLobby__data_805D6898, 1);
            }
            lbl_805D6890 = 0;
            TLobby__data_805D688B = 4;
        }
    } else if (!(lbl_805D6888 & 0x80)) {
        lbl_805D6890 = 0;
        if (lbl_805D6888 & 0x100) {
            send_trade_proposal_result__6TLobbyFcc(4, 4);
            if ((u32) TLobby__data_805D6898 != 0U) {
                forward_to_child__19TWindowSubTradeMainFPvi(TLobby__data_805D6898, 1);
            }
            lbl_805D6888 &= 0xFFFFFEFF;
            TLobby__data_805D688B = 4;
        }
    } else if (!(lbl_805D6888 & 0x100)) {
        if (lbl_805D6890++ >= 0x1E) {
            send_trade_proposal_result__6TLobbyFcc(4, 0);
            lbl_805D6888 |= 0x100;
            if ((u32) TLobby__data_805D6898 != 0U) {
                forward_to_child__19TWindowSubTradeMainFPvi(TLobby__data_805D6898, 2);
            }
            lbl_805D6890 = 0;
            TLobby__data_805D688B = 5;
        }
    }
}

#pragma push
#pragma scheduling off
void TLobby__sub_802D268C(void) {
    text_builder_reset();
    refresh_player_status__6TLobbyFv(TLobby__data_805D688A);
    get_message_10__20TWindowSubStatusDispFPv(0xF6);
    text_builder_append();
    get_shared_text_buffer();
}
#pragma pop

s32 TLobby__sub_802D26C8(void) {
    s32 code;
    Pair_802D26C8 buf;
    s32 r;
    s32 flag = 0;
    update_both_halves__6TLobbyFPv(&buf);
    ((u8 *(*)(void *, void *))TLobby__sub_802D27E0)(&buf.h[0], &TLobby__data_80540BD0[2]);
    ((u8 *(*)(void *, void *))TLobby__sub_802D27E0)(&buf.h[1], &TLobby__data_80540BD0[1]);
    r = TLobby__sub_802D1D48(&buf, &code);
    if (r == 4) {
        flag = 1;
    } else if (r != 0) {
        return show_event_message__6TLobbyFiii((void *)lbl_805D53A0, r, code);
    }
    update_both_halves__6TLobbyFPv(&buf);
    ((u8 *(*)(void *, void *))TLobby__sub_802D27E0)(&buf.h[0], &TLobby__data_80540BD0[0]);
    ((u8 *(*)(void *, void *))TLobby__sub_802D27E0)(&buf.h[1], &TLobby__data_80540BD0[3]);
    r = TLobby__sub_802D1D48(&buf, &code);
    if (r == 4) {
        if (flag) {
            return show_event_message__6TLobbyFiii((void *)(s32)TLobby__data_805D688A, 4, code);
        }
    } else if (r != 0) {
        return show_event_message__6TLobbyFiii((void *)(s32)TLobby__data_805D688A, r, code);
    }
    return 0;
}

u8 * TLobby__sub_802D27E0(s32 arg0, s32 arg1) {
    *(M2CCopy_F8 *)(arg0) = *(const M2CCopy_F8 *)(arg1);
    return (u8 *)arg0;
}

}
